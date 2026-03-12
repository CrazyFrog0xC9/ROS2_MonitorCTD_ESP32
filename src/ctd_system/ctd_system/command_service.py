import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from ctd_interfaces.srv import SetAcquisition
from ctd_system.state import latest, latest_lock


class CommandServiceNode(Node):
    def __init__(self):
        super().__init__('command_service')

        self.pub_cmd_1 = self.create_publisher(Bool, '/esp32_1/start_stop', 10)
        self.pub_cmd_2 = self.create_publisher(Bool, '/esp32_2/start_stop', 10)

        self.srv = self.create_service(
            SetAcquisition,
            'set_acquisition',
            self.handle_set_acquisition
        )

    def _send(self, which: str, state: bool):
        m = Bool()
        m.data = state

        with latest_lock:
            if which == 'esp32_1':
                self.pub_cmd_1.publish(m)
                latest['esp32_1']['running'] = state
            elif which == 'esp32_2':
                self.pub_cmd_2.publish(m)
                latest['esp32_2']['running'] = state

    def handle_set_acquisition(self, request, response):
        if request.target not in ['esp32_1', 'esp32_2', 'all']:
            response.success = False
            response.message = 'Invalid target'
            return response

        if request.target == 'all':
            self._send('esp32_1', request.enable)
            self._send('esp32_2', request.enable)
        else:
            self._send(request.target, request.enable)

        response.success = True
        response.message = f'Set {request.target} to {"START" if request.enable else "STOP"}'
        return response


def main(args=None):
    rclpy.init(args=args)
    node = CommandServiceNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
