// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SetpointConfigReply.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/setpoint_config_reply.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG_REPLY__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG_REPLY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/setpoint_config_reply__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SetpointConfigReply_mode_req_local_position
{
public:
  explicit Init_SetpointConfigReply_mode_req_local_position(::px4_msgs::msg::SetpointConfigReply & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SetpointConfigReply mode_req_local_position(::px4_msgs::msg::SetpointConfigReply::_mode_req_local_position_type arg)
  {
    msg_.mode_req_local_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SetpointConfigReply msg_;
};

class Init_SetpointConfigReply_mode_req_local_alt
{
public:
  explicit Init_SetpointConfigReply_mode_req_local_alt(::px4_msgs::msg::SetpointConfigReply & msg)
  : msg_(msg)
  {}
  Init_SetpointConfigReply_mode_req_local_position mode_req_local_alt(::px4_msgs::msg::SetpointConfigReply::_mode_req_local_alt_type arg)
  {
    msg_.mode_req_local_alt = std::move(arg);
    return Init_SetpointConfigReply_mode_req_local_position(msg_);
  }

private:
  ::px4_msgs::msg::SetpointConfigReply msg_;
};

class Init_SetpointConfigReply_mode_req_attitude
{
public:
  explicit Init_SetpointConfigReply_mode_req_attitude(::px4_msgs::msg::SetpointConfigReply & msg)
  : msg_(msg)
  {}
  Init_SetpointConfigReply_mode_req_local_alt mode_req_attitude(::px4_msgs::msg::SetpointConfigReply::_mode_req_attitude_type arg)
  {
    msg_.mode_req_attitude = std::move(arg);
    return Init_SetpointConfigReply_mode_req_local_alt(msg_);
  }

private:
  ::px4_msgs::msg::SetpointConfigReply msg_;
};

class Init_SetpointConfigReply_mode_req_angular_velocity
{
public:
  explicit Init_SetpointConfigReply_mode_req_angular_velocity(::px4_msgs::msg::SetpointConfigReply & msg)
  : msg_(msg)
  {}
  Init_SetpointConfigReply_mode_req_attitude mode_req_angular_velocity(::px4_msgs::msg::SetpointConfigReply::_mode_req_angular_velocity_type arg)
  {
    msg_.mode_req_angular_velocity = std::move(arg);
    return Init_SetpointConfigReply_mode_req_attitude(msg_);
  }

private:
  ::px4_msgs::msg::SetpointConfigReply msg_;
};

class Init_SetpointConfigReply_result
{
public:
  explicit Init_SetpointConfigReply_result(::px4_msgs::msg::SetpointConfigReply & msg)
  : msg_(msg)
  {}
  Init_SetpointConfigReply_mode_req_angular_velocity result(::px4_msgs::msg::SetpointConfigReply::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_SetpointConfigReply_mode_req_angular_velocity(msg_);
  }

private:
  ::px4_msgs::msg::SetpointConfigReply msg_;
};

class Init_SetpointConfigReply_source_id
{
public:
  explicit Init_SetpointConfigReply_source_id(::px4_msgs::msg::SetpointConfigReply & msg)
  : msg_(msg)
  {}
  Init_SetpointConfigReply_result source_id(::px4_msgs::msg::SetpointConfigReply::_source_id_type arg)
  {
    msg_.source_id = std::move(arg);
    return Init_SetpointConfigReply_result(msg_);
  }

private:
  ::px4_msgs::msg::SetpointConfigReply msg_;
};

class Init_SetpointConfigReply_type
{
public:
  explicit Init_SetpointConfigReply_type(::px4_msgs::msg::SetpointConfigReply & msg)
  : msg_(msg)
  {}
  Init_SetpointConfigReply_source_id type(::px4_msgs::msg::SetpointConfigReply::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SetpointConfigReply_source_id(msg_);
  }

private:
  ::px4_msgs::msg::SetpointConfigReply msg_;
};

class Init_SetpointConfigReply_timestamp
{
public:
  Init_SetpointConfigReply_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetpointConfigReply_type timestamp(::px4_msgs::msg::SetpointConfigReply::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SetpointConfigReply_type(msg_);
  }

private:
  ::px4_msgs::msg::SetpointConfigReply msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SetpointConfigReply>()
{
  return px4_msgs::msg::builder::Init_SetpointConfigReply_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG_REPLY__BUILDER_HPP_
