from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ground_truth',
            executable='relativePosition',
            output='log',
        ),
        Node(
            package='ground_truth',
            executable='interceptSuccess',
            output='log',
        ),
        Node(
            package='ros_gz_bridge',
            executable='parameter_bridge',
            arguments=[
                '/world/default/model/interceptor_x500_1/link/camera_link/sensor/camera/image@sensor_msgs/msg/Image@gz.msgs.Image'
            ],
            output='log',
        ),
    ])
