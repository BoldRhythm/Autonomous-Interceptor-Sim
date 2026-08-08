import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/gp/Projects/interceptor-sim/ros2_px4_ws/install/interceptor_vision'
