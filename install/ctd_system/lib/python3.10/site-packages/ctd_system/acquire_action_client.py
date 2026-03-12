import sys
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from ctd_interfaces.action import AcquireData


class AcquireActionClient(Node):
    def __init__(self):
        super().__init__('acquire_action_client')
        self._client = ActionClient(self, AcquireData, 'acquire_data')

    def send_goal(self, target, duration_sec):
        goal_msg = AcquireData.Goal()
        goal_msg.target = target
        goal_msg.duration_sec = duration_sec

        self._client.wait_for_server()
        return self._client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(
            f'Feedback: progress={feedback.progress:.2f}, status={feedback.status}'
        )


def main(args=None):
    rclpy.init(args=args)
    node = AcquireActionClient()

    target = sys.argv[1] if len(sys.argv) > 1 else 'all'
    duration = int(sys.argv[2]) if len(sys.argv) > 2 else 5

    future = node.send_goal(target, duration)
    rclpy.spin_until_future_complete(node, future)
    goal_handle = future.result()

    if not goal_handle.accepted:
        node.get_logger().error('Goal rejected')
        node.destroy_node()
        rclpy.shutdown()
        return

    node.get_logger().info('Goal accepted')

    result_future = goal_handle.get_result_async()
    rclpy.spin_until_future_complete(node, result_future)
    result = result_future.result().result

    node.get_logger().info(
        f'Result: success={result.success}, summary="{result.summary}"'
    )

    node.destroy_node()
    rclpy.shutdown()
