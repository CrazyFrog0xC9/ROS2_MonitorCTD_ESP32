import threading
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from ctd_interfaces.action import AcquireData
from ctd_interfaces.msg import CtdMeasurement
from ctd_interfaces.srv import SetAcquisition


class AcquireActionServer(Node):
    def __init__(self):
        super().__init__('acquire_action_server')

        self._action_group = MutuallyExclusiveCallbackGroup()
        self._sub_group = MutuallyExclusiveCallbackGroup()

        self._set_acq_client = self.create_client(
            SetAcquisition,
            'set_acquisition',
            callback_group=self._action_group,
        )

        self._sample_counts = {
            'esp32_1': 0,
            'esp32_2': 0,
        }
        self._count_lock = threading.Lock()

        self._sub_1 = self.create_subscription(
            CtdMeasurement,
            '/esp32_1/ctd',
            self._cb_ctd_1,
            10,
            callback_group=self._sub_group,
        )
        self._sub_2 = self.create_subscription(
            CtdMeasurement,
            '/esp32_2/ctd',
            self._cb_ctd_2,
            10,
            callback_group=self._sub_group,
        )

        self._action_server = ActionServer(
            self,
            AcquireData,
            'acquire_data',
            self.execute_callback,
            callback_group=self._action_group,
        )

    def _cb_ctd_1(self, _msg: CtdMeasurement):
        with self._count_lock:
            self._sample_counts['esp32_1'] += 1

    def _cb_ctd_2(self, _msg: CtdMeasurement):
        with self._count_lock:
            self._sample_counts['esp32_2'] += 1

    @staticmethod
    def _wait_future(future, timeout: float):
        done = threading.Event()
        future.add_done_callback(lambda _: done.set())
        if not done.wait(timeout):
            return None
        return future.result()

    def _set_acquisition(self, target: str, enable: bool, timeout: float = 2.0):
        if not self._set_acq_client.wait_for_service(timeout_sec=timeout):
            return False, 'set_acquisition service unavailable'

        req = SetAcquisition.Request()
        req.target = target
        req.enable = enable

        future = self._set_acq_client.call_async(req)
        result = self._wait_future(future, timeout=timeout)
        if result is None:
            return False, 'set_acquisition call timeout'

        return bool(result.success), str(result.message)

    @staticmethod
    def _resolve_targets(target: str):
        if target == 'all':
            return ['esp32_1', 'esp32_2']
        if target in ('esp32_1', 'esp32_2'):
            return [target]
        return None

    def _snapshot_counts(self):
        with self._count_lock:
            return dict(self._sample_counts)

    def execute_callback(self, goal_handle):
        target = goal_handle.request.target
        total = max(goal_handle.request.duration_sec, 1)
        targets = self._resolve_targets(target)

        if targets is None:
            goal_handle.abort()
            result = AcquireData.Result()
            result.success = False
            result.summary = f'Invalid target: {target}'
            return result

        self.get_logger().info(
            f'Start acquisition: target={target}, duration={total}s'
        )

        ok, msg = self._set_acquisition(target, True)
        if not ok:
            goal_handle.abort()
            result = AcquireData.Result()
            result.success = False
            result.summary = f'Failed to START acquisition: {msg}'
            return result

        start_counts = self._snapshot_counts()
        started_at = time.monotonic()

        while True:
            if not goal_handle.is_active:
                result = AcquireData.Result()
                result.success = False
                result.summary = 'Goal no longer active'
                return result

            if goal_handle.is_cancel_requested:
                self._set_acquisition(target, False)
                goal_handle.canceled()
                result = AcquireData.Result()
                result.success = False
                result.summary = 'Acquisition canceled'
                return result

            elapsed = time.monotonic() - started_at
            if elapsed >= float(total):
                break

            now_counts = self._snapshot_counts()
            deltas = {
                dev: now_counts[dev] - start_counts[dev]
                for dev in targets
            }

            feedback = AcquireData.Feedback()
            feedback.progress = min(elapsed / float(total), 0.99)
            feedback.status = (
                f'Collecting {target}: elapsed={elapsed:.1f}s/{total}s, '
                f'samples={deltas}'
            )
            goal_handle.publish_feedback(feedback)
            time.sleep(0.5)

        ok_stop, msg_stop = self._set_acquisition(target, False)
        end_counts = self._snapshot_counts()
        collected = {
            dev: end_counts[dev] - start_counts[dev]
            for dev in targets
        }

        if not ok_stop:
            goal_handle.abort()
            result = AcquireData.Result()
            result.success = False
            result.summary = (
                f'Acquisition finished but STOP failed: {msg_stop}; '
                f'collected={collected}'
            )
            return result

        goal_handle.succeed()
        result = AcquireData.Result()
        result.success = True
        result.summary = f'Finished acquisition for {target}; collected={collected}'
        return result


def main(args=None):
    rclpy.init(args=args)
    node = AcquireActionServer()

    executor = MultiThreadedExecutor(num_threads=2)
    executor.add_node(node)

    try:
        executor.spin()
    finally:
        executor.shutdown()
    node.destroy_node()
    rclpy.shutdown()
