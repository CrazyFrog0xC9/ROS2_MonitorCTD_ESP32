import sys
import rclpy
from rclpy.node import Node
from ctd_interfaces.srv import SetAcquisition


class CommandClientNode(Node):
    def __init__(self):
        super().__init__('command_client')
        self.cli = self.create_client(SetAcquisition, 'set_acquisition')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')

    def send_request(self, target, enable):
        req = SetAcquisition.Request()
        req.target = target
        req.enable = enable
        return self.cli.call_async(req)


def main(args=None):
    rclpy.init(args=args)
    node = CommandClientNode()

    target = sys.argv[1] if len(sys.argv) > 1 else 'all'
    enable = sys.argv[2].lower() == 'true' if len(sys.argv) > 2 else True

    future = node.send_request(target, enable)
    rclpy.spin_until_future_complete(node, future)

    if future.result() is not None:
        node.get_logger().info(
            f'success={future.result().success}, message="{future.result().message}"'
        )
    else:
        node.get_logger().error('Service call failed')

    node.destroy_node()
    rclpy.shutdown()
