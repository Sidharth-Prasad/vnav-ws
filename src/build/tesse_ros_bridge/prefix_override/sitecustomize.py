import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/zengine/vnav_ws/src/install/tesse_ros_bridge'
