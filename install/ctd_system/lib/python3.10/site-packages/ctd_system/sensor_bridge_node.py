import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Bool
from ctd_interfaces.msg import CtdMeasurement
from ctd_system.state import latest, latest_lock, parse_ctd_line


class SensorBridgeNode(Node):
    def __init__(self):
        super().__init__('sensor_bridge')

        self.sub1 = self.create_subscription(
            String, '/esp32_1/ctd_raw', self.cb1, 10
        )
        self.sub2 = self.create_subscription(
            String, '/esp32_2/ctd_raw', self.cb2, 10
        )

        self.pub_cmd_1 = self.create_publisher(Bool, '/esp32_1/start_stop', 10)
        self.pub_cmd_2 = self.create_publisher(Bool, '/esp32_2/start_stop', 10)

        self.pub_ctd_1 = self.create_publisher(CtdMeasurement, '/esp32_1/ctd', 10)
        self.pub_ctd_2 = self.create_publisher(CtdMeasurement, '/esp32_2/ctd', 10)

    def _publish_ctd(self, sensor_id: str, raw: str, parsed: dict):
        msg = CtdMeasurement()
        msg.sensor_id = sensor_id
        msg.stamp = self.get_clock().now().to_msg()
        msg.temperature = float(parsed.get('C', 0.0) or 0.0)
        msg.conductivity = float(parsed.get('MS/CM', 0.0) or 0.0)
        msg.pressure = float(parsed.get('DBAR', 0.0) or 0.0)
        msg.turbidity = float(parsed.get('FTU', 0.0) or 0.0)
        msg.valid = len(parsed) > 0
        msg.raw_line = raw or ''

        if sensor_id == 'esp32_1':
            self.pub_ctd_1.publish(msg)
        else:
            self.pub_ctd_2.publish(msg)

    def cb1(self, msg: String):
        parsed = parse_ctd_line(msg.data)
        with latest_lock:
            latest['esp32_1']['raw'] = msg.data
            latest['esp32_1']['parsed'] = parsed
        self._publish_ctd('esp32_1', msg.data, parsed)

    def cb2(self, msg: String):
        parsed = parse_ctd_line(msg.data)
        with latest_lock:
            latest['esp32_2']['raw'] = msg.data
            latest['esp32_2']['parsed'] = parsed
        self._publish_ctd('esp32_2', msg.data, parsed)

    def send_start_stop(self, which: str, state: bool):
        m = Bool()
        m.data = state

        with latest_lock:
            if which == 'esp32_1':
                self.pub_cmd_1.publish(m)
                latest['esp32_1']['running'] = state
            elif which == 'esp32_2':
                self.pub_cmd_2.publish(m)
                latest['esp32_2']['running'] = state
            else:
                raise ValueError('which must be esp32_1 or esp32_2')

    def send_all(self, state: bool):
        self.send_start_stop('esp32_1', state)
        self.send_start_stop('esp32_2', state)


def main(args=None):
    rclpy.init(args=args)
    node = SensorBridgeNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
