import threading
import rclpy
from flask import Flask, jsonify, render_template, request
from rclpy.node import Node
from rclpy.action import ActionClient
from ctd_interfaces.action import AcquireData
from ctd_interfaces.msg import CtdMeasurement
from ctd_interfaces.srv import SetAcquisition
from ctd_system.state import latest, latest_lock

app = Flask(__name__)
ros_node = None


class WebClientNode(Node):
    def __init__(self):
        super().__init__('web_client_node')
        self.cli = self.create_client(SetAcquisition, 'set_acquisition')
        self.acquire_client = ActionClient(self, AcquireData, 'acquire_data')

        self.sub_ctd_1 = self.create_subscription(
            CtdMeasurement,
            '/esp32_1/ctd',
            self._cb_ctd_1,
            10,
        )
        self.sub_ctd_2 = self.create_subscription(
            CtdMeasurement,
            '/esp32_2/ctd',
            self._cb_ctd_2,
            10,
        )

    def send_command(self, which: str, state: bool):
        req = SetAcquisition.Request()
        req.target = which
        req.enable = state
        return self.cli.call_async(req)

    def send_acquire_goal(self, which: str, duration_sec: int):
        if not self.acquire_client.wait_for_server(timeout_sec=2.0):
            return None

        goal_msg = AcquireData.Goal()
        goal_msg.target = which
        goal_msg.duration_sec = max(int(duration_sec), 1)

        return self.acquire_client.send_goal_async(goal_msg)

    def _update_latest_from_ctd(self, sensor_id: str, msg: CtdMeasurement):
        parsed = {
            'C': float(msg.temperature),
            'MS/CM': float(msg.conductivity),
            'DBAR': float(msg.pressure),
            'FTU': float(msg.turbidity),
        }

        with latest_lock:
            latest[sensor_id]['raw'] = msg.raw_line or ''
            latest[sensor_id]['parsed'] = parsed

    def _cb_ctd_1(self, msg: CtdMeasurement):
        self._update_latest_from_ctd('esp32_1', msg)

    def _cb_ctd_2(self, msg: CtdMeasurement):
        self._update_latest_from_ctd('esp32_2', msg)


def wait_future(future, timeout: float = 2.0):
    done = threading.Event()
    future.add_done_callback(lambda _: done.set())
    if not done.wait(timeout):
        return None
    return future.result()


@app.get('/api/data')
def api_data():
    with latest_lock:
        return jsonify(latest)


@app.post('/api/cmd')
def api_cmd():
    global ros_node
    if ros_node is None:
        return jsonify({"ok": False, "error": "ROS node not ready"}), 500

    data = request.get_json(force=True, silent=True) or {}
    cmd = (data.get("cmd") or "").upper()
    which = data.get("which")

    if cmd not in ("START", "STOP"):
        return jsonify({"ok": False, "error": "Unknown cmd. Use START or STOP"}), 400

    if which not in ("esp32_1", "esp32_2", "all"):
        return jsonify({"ok": False, "error": "Missing/invalid 'which' (esp32_1|esp32_2|all)"}), 400

    state = True if cmd == "START" else False
    future = ros_node.send_command(which, state)
    result = wait_future(future, timeout=2.0)
    if result is None:
        return jsonify({"ok": False, "error": "Service call failed"}), 500

    if result.success:
        with latest_lock:
            if which == 'all':
                latest['esp32_1']['running'] = state
                latest['esp32_2']['running'] = state
            else:
                latest[which]['running'] = state

    return jsonify({"ok": result.success, "message": result.message})


@app.post('/api/acquire')
def api_acquire():
    global ros_node
    if ros_node is None:
        return jsonify({"ok": False, "error": "ROS node not ready"}), 500

    data = request.get_json(force=True, silent=True) or {}
    which = data.get("which")
    duration = int(data.get("duration_sec") or 10)

    if which not in ("esp32_1", "esp32_2", "all"):
        return jsonify({"ok": False, "error": "Missing/invalid 'which' (esp32_1|esp32_2|all)"}), 400

    if duration < 1 or duration > 600:
        return jsonify({"ok": False, "error": "Invalid duration_sec (1..600)"}), 400

    goal_future = ros_node.send_acquire_goal(which, duration)
    if goal_future is None:
        return jsonify({"ok": False, "error": "Action server not available"}), 503

    goal_handle = wait_future(goal_future, timeout=3.0)
    if goal_handle is None:
        return jsonify({"ok": False, "error": "Action goal request timeout"}), 504

    if not goal_handle.accepted:
        return jsonify({"ok": False, "error": "Action goal rejected"}), 409

    result_future = goal_handle.get_result_async()
    wrapped_result = wait_future(result_future, timeout=float(duration) + 8.0)
    if wrapped_result is None:
        return jsonify({"ok": False, "error": "Action result timeout"}), 504

    result = wrapped_result.result
    return jsonify({"ok": bool(result.success), "message": result.summary})


@app.get('/')
def index():
    return render_template('index.html')


def ros_thread():
    global ros_node
    rclpy.init()
    ros_node = WebClientNode()
    rclpy.spin(ros_node)
    ros_node.destroy_node()
    rclpy.shutdown()


def main():
    t = threading.Thread(target=ros_thread, daemon=True)
    t.start()
    app.run(host='0.0.0.0', port=5000)


if __name__ == '__main__':
    main()