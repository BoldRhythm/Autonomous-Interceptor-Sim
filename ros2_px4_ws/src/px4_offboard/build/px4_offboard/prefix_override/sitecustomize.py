import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/gp/ros2_px4_ws/src/px4_offboard/install/px4_offboard'
