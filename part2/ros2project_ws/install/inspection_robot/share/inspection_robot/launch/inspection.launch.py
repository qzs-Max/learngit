from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(package='inspection_robot', executable='robot1',  output='screen'),
        Node(package='inspection_robot', executable='moniter', output='screen'),
    ])
