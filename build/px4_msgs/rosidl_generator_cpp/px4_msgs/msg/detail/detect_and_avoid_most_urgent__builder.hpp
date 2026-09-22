// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/DetectAndAvoidMostUrgent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/detect_and_avoid_most_urgent.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID_MOST_URGENT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID_MOST_URGENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/detect_and_avoid_most_urgent__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectAndAvoidMostUrgent_aircraft_dist
{
public:
  explicit Init_DetectAndAvoidMostUrgent_aircraft_dist(::px4_msgs::msg::DetectAndAvoidMostUrgent & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::DetectAndAvoidMostUrgent aircraft_dist(::px4_msgs::msg::DetectAndAvoidMostUrgent::_aircraft_dist_type arg)
  {
    msg_.aircraft_dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::DetectAndAvoidMostUrgent msg_;
};

class Init_DetectAndAvoidMostUrgent_conflict_level
{
public:
  explicit Init_DetectAndAvoidMostUrgent_conflict_level(::px4_msgs::msg::DetectAndAvoidMostUrgent & msg)
  : msg_(msg)
  {}
  Init_DetectAndAvoidMostUrgent_aircraft_dist conflict_level(::px4_msgs::msg::DetectAndAvoidMostUrgent::_conflict_level_type arg)
  {
    msg_.conflict_level = std::move(arg);
    return Init_DetectAndAvoidMostUrgent_aircraft_dist(msg_);
  }

private:
  ::px4_msgs::msg::DetectAndAvoidMostUrgent msg_;
};

class Init_DetectAndAvoidMostUrgent_has_action
{
public:
  explicit Init_DetectAndAvoidMostUrgent_has_action(::px4_msgs::msg::DetectAndAvoidMostUrgent & msg)
  : msg_(msg)
  {}
  Init_DetectAndAvoidMostUrgent_conflict_level has_action(::px4_msgs::msg::DetectAndAvoidMostUrgent::_has_action_type arg)
  {
    msg_.has_action = std::move(arg);
    return Init_DetectAndAvoidMostUrgent_conflict_level(msg_);
  }

private:
  ::px4_msgs::msg::DetectAndAvoidMostUrgent msg_;
};

class Init_DetectAndAvoidMostUrgent_unique_id_encoding
{
public:
  explicit Init_DetectAndAvoidMostUrgent_unique_id_encoding(::px4_msgs::msg::DetectAndAvoidMostUrgent & msg)
  : msg_(msg)
  {}
  Init_DetectAndAvoidMostUrgent_has_action unique_id_encoding(::px4_msgs::msg::DetectAndAvoidMostUrgent::_unique_id_encoding_type arg)
  {
    msg_.unique_id_encoding = std::move(arg);
    return Init_DetectAndAvoidMostUrgent_has_action(msg_);
  }

private:
  ::px4_msgs::msg::DetectAndAvoidMostUrgent msg_;
};

class Init_DetectAndAvoidMostUrgent_unique_id
{
public:
  explicit Init_DetectAndAvoidMostUrgent_unique_id(::px4_msgs::msg::DetectAndAvoidMostUrgent & msg)
  : msg_(msg)
  {}
  Init_DetectAndAvoidMostUrgent_unique_id_encoding unique_id(::px4_msgs::msg::DetectAndAvoidMostUrgent::_unique_id_type arg)
  {
    msg_.unique_id = std::move(arg);
    return Init_DetectAndAvoidMostUrgent_unique_id_encoding(msg_);
  }

private:
  ::px4_msgs::msg::DetectAndAvoidMostUrgent msg_;
};

class Init_DetectAndAvoidMostUrgent_timestamp
{
public:
  Init_DetectAndAvoidMostUrgent_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectAndAvoidMostUrgent_unique_id timestamp(::px4_msgs::msg::DetectAndAvoidMostUrgent::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DetectAndAvoidMostUrgent_unique_id(msg_);
  }

private:
  ::px4_msgs::msg::DetectAndAvoidMostUrgent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::DetectAndAvoidMostUrgent>()
{
  return px4_msgs::msg::builder::Init_DetectAndAvoidMostUrgent_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID_MOST_URGENT__BUILDER_HPP_
