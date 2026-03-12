from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ctd_system',
            executable='sensor_bridge',
            name='sensor_bridge',
            output='screen'
        ),
        Node(
            package='ctd_system',
            executable='command_service',
            name='command_service',
            output='screen'
        ),
        Node(
            package='ctd_system',
            executable='acquire_action_server',
            name='acquire_action_server',
            output='screen'
        ),
        Node(
            package='ctd_system',
            executable='web_app',
            name='web_app',
            output='screen'
        ),
    ])
