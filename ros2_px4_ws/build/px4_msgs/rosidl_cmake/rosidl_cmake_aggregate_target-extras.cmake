# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target px4_msgs::px4_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${px4_msgs_TARGETS}.
if(px4_msgs_TARGETS AND NOT TARGET px4_msgs::px4_msgs)
  add_library(px4_msgs::px4_msgs INTERFACE IMPORTED)
  set_target_properties(px4_msgs::px4_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${px4_msgs_TARGETS}")
endif()
