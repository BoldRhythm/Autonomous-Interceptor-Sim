// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/DetectAndAvoid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/detect_and_avoid.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/detect_and_avoid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectAndAvoid_expected_min_dist_time
{
public:
  explicit Init_DetectAndAvoid_expected_min_dist_time(::px4_msgs::msg::DetectAndAvoid & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::DetectAndAvoid expected_min_dist_time(::px4_msgs::msg::DetectAndAvoid::_expected_min_dist_time_type arg)
  {
    msg_.expected_min_dist_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::DetectAndAvoid msg_;
};

class Init_DetectAndAvoid_aircraft_dist_vert
{
public:
  explicit Init_DetectAndAvoid_aircraft_dist_vert(::px4_msgs::msg::DetectAndAvoid & msg)
  : msg_(msg)
  {}
  Init_DetectAndAvoid_expected_min_dist_time aircraft_dist_vert(::px4_msgs::msg::DetectAndAvoid::_aircraft_dist_vert_type arg)
  {
    msg_.aircraft_dist_vert = std::move(arg);
    return Init_DetectAndAvoid_expected_min_dist_time(msg_);
  }

private:
  ::px4_msgs::msg::DetectAndAvoid msg_;
};

class Init_DetectAndAvoid_aircraft_dist_hor
{
public:
  explicit Init_DetectAndAvoid_aircraft_dist_hor(::px4_msgs::msg::DetectAndAvoid & msg)
  : msg_(msg)
  {}
  Init_DetectAndAvoid_aircraft_dist_vert aircraft_dist_hor(::px4_msgs::msg::DetectAndAvoid::_aircraft_dist_hor_type arg)
  {
    msg_.aircraft_dist_hor = std::move(arg);
    return Init_DetectAndAvoid_aircraft_dist_vert(msg_);
  }

private:
  ::px4_msgs::msg::DetectAndAvoid msg_;
};

class Init_DetectAndAvoid_aircraft_dist
{
public:
  explicit Init_DetectAndAvoid_aircraft_dist(::px4_msgs::msg::DetectAndAvoid & msg)
  : msg_(msg)
  {}
  Init_DetectAndAvoid_aircraft_dist_hor aircraft_dist(::px4_msgs::msg::DetectAndAvoid::_aircraft_dist_type arg)
  {
    msg_.aircraft_dist = std::move(arg);
    return Init_DetectAndAvoid_aircraft_dist_hor(msg_);
  }

private:
  ::px4_msgs::msg::DetectAndAvoid msg_;
};

class Init_DetectAndAvoid_conflict_level
{
public:
  explicit Init_DetectAndAvoid_conflict_level(::px4_msgs::msg::DetectAndAvoid & msg)
  : msg_(msg)
  {}
  Init_DetectAndAvoid_aircraft_dist conflict_level(::px4_msgs::msg::DetectAndAvoid::_conflict_level_type arg)
  {
    msg_.conflict_level = std::move(arg);
    return Init_DetectAndAvoid_aircraft_dist(msg_);
  }

private:
  ::px4_msgs::msg::DetectAndAvoid msg_;
};

class Init_DetectAndAvoid_unique_id_encoding
{
public:
  explicit Init_DetectAndAvoid_unique_id_encoding(::px4_msgs::msg::DetectAndAvoid & msg)
  : msg_(msg)
  {}
  Init_DetectAndAvoid_conflict_level unique_id_encoding(::px4_msgs::msg::DetectAndAvoid::_unique_id_encoding_type arg)
  {
    msg_.unique_id_encoding = std::move(arg);
    return Init_DetectAndAvoid_conflict_level(msg_);
  }

private:
  ::px4_msgs::msg::DetectAndAvoid msg_;
};

class Init_DetectAndAvoid_unique_id
{
public:
  explicit Init_DetectAndAvoid_unique_id(::px4_msgs::msg::DetectAndAvoid & msg)
  : msg_(msg)
  {}
  Init_DetectAndAvoid_unique_id_encoding unique_id(::px4_msgs::msg::DetectAndAvoid::_unique_id_type arg)
  {
    msg_.unique_id = std::move(arg);
    return Init_DetectAndAvoid_unique_id_encoding(msg_);
  }

private:
  ::px4_msgs::msg::DetectAndAvoid msg_;
};

class Init_DetectAndAvoid_timestamp
{
public:
  Init_DetectAndAvoid_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectAndAvoid_unique_id timestamp(::px4_msgs::msg::DetectAndAvoid::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DetectAndAvoid_unique_id(msg_);
  }

private:
  ::px4_msgs::msg::DetectAndAvoid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::DetectAndAvoid>()
{
  return px4_msgs::msg::builder::Init_DetectAndAvoid_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID__BUILDER_HPP_
