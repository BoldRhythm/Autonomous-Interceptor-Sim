// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SetpointConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/setpoint_config.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/setpoint_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SetpointConfig_timeout_ms
{
public:
  explicit Init_SetpointConfig_timeout_ms(::px4_msgs::msg::SetpointConfig & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SetpointConfig timeout_ms(::px4_msgs::msg::SetpointConfig::_timeout_ms_type arg)
  {
    msg_.timeout_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SetpointConfig msg_;
};

class Init_SetpointConfig_should_apply
{
public:
  explicit Init_SetpointConfig_should_apply(::px4_msgs::msg::SetpointConfig & msg)
  : msg_(msg)
  {}
  Init_SetpointConfig_timeout_ms should_apply(::px4_msgs::msg::SetpointConfig::_should_apply_type arg)
  {
    msg_.should_apply = std::move(arg);
    return Init_SetpointConfig_timeout_ms(msg_);
  }

private:
  ::px4_msgs::msg::SetpointConfig msg_;
};

class Init_SetpointConfig_source_id
{
public:
  explicit Init_SetpointConfig_source_id(::px4_msgs::msg::SetpointConfig & msg)
  : msg_(msg)
  {}
  Init_SetpointConfig_should_apply source_id(::px4_msgs::msg::SetpointConfig::_source_id_type arg)
  {
    msg_.source_id = std::move(arg);
    return Init_SetpointConfig_should_apply(msg_);
  }

private:
  ::px4_msgs::msg::SetpointConfig msg_;
};

class Init_SetpointConfig_type
{
public:
  explicit Init_SetpointConfig_type(::px4_msgs::msg::SetpointConfig & msg)
  : msg_(msg)
  {}
  Init_SetpointConfig_source_id type(::px4_msgs::msg::SetpointConfig::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SetpointConfig_source_id(msg_);
  }

private:
  ::px4_msgs::msg::SetpointConfig msg_;
};

class Init_SetpointConfig_timestamp
{
public:
  Init_SetpointConfig_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetpointConfig_type timestamp(::px4_msgs::msg::SetpointConfig::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SetpointConfig_type(msg_);
  }

private:
  ::px4_msgs::msg::SetpointConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SetpointConfig>()
{
  return px4_msgs::msg::builder::Init_SetpointConfig_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG__BUILDER_HPP_
