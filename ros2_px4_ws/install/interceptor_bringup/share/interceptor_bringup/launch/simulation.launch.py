from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess, TimerAction
from launch.event_handlers import OnProcessStart
from launch.actions import RegisterEventHandler


def generate_launch_description():

        
    dds_agent = ExecuteProcess(
            cmd=[
                'MicroXRCEAgent',
                'udp4',
                '-p',
                '8888'
            ],
            output='screen'
        )

#     px4_1 = ExecuteProcess(
#         cmd=[
#             './build/px4_sitl_default/bin/px4',
#             '-i', '1'
#         ],
#         cwd='/home/gp/PX4-Autopilot',
#         additional_env={
#             'PX4_SYS_AUTOSTART': '4012',
#             'PX4_SIM_MODEL': 'gz_interceptor_x500',
#         },
#         output='screen'
#     )
# 
#     px4_2 = ExecuteProcess(
#         cmd=[
#             './build/px4_sitl_default/bin/px4',
#             '-i', '2'
#         ],
#         cwd='/home/gp/PX4-Autopilot',
#         additional_env={
#             'PX4_GZ_STANDALONE': '1',
#             'PX4_SYS_AUTOSTART': '4012',
#             'PX4_GZ_MODEL_POSE': '0,1',
#             'PX4_SIM_MODEL': 'gz_interceptor_x500',
#         },
#         output='screen'
#     )
    
    offboard_node = Node(
        package='px4_offboard',
        executable='main_velocity_offboard.py',
        name='offboard_controller',
        output='screen'
    )

    #Delayed starts
    
    delayed_offboard = TimerAction(
        period=5.0,
        actions=[offboard_node]
    )

    # delayed_px4_2 = TimerAction(
    #     period=5.0,
    #     actions=[px4_2]
    # )

    return LaunchDescription([
        dds_agent,
        # px4_1,
        # delayed_px4_2,
        delayed_offboard,
    ])
