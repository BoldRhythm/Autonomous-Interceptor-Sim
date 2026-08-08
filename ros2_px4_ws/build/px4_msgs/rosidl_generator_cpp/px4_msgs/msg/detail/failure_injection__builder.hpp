// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/FailureInjection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/failure_injection.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__FAILURE_INJECTION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__FAILURE_INJECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/failure_injection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_FailureInjection_failure_type
{
public:
  explicit Init_FailureInjection_failure_type(::px4_msgs::msg::FailureInjection & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::FailureInjection failure_type(::px4_msgs::msg::FailureInjection::_failure_type_type arg)
  {
    msg_.failure_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::FailureInjection msg_;
};

class Init_FailureInjection_instance_mask
{
public:
  explicit Init_FailureInjection_instance_mask(::px4_msgs::msg::FailureInjection & msg)
  : msg_(msg)
  {}
  Init_FailureInjection_failure_type instance_mask(::px4_msgs::msg::FailureInjection::_instance_mask_type arg)
  {
    msg_.instance_mask = std::move(arg);
    return Init_FailureInjection_failure_type(msg_);
  }

private:
  ::px4_msgs::msg::FailureInjection msg_;
};

class Init_FailureInjection_unit
{
public:
  explicit Init_FailureInjection_unit(::px4_msgs::msg::FailureInjection & msg)
  : msg_(msg)
  {}
  Init_FailureInjection_instance_mask unit(::px4_msgs::msg::FailureInjection::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return Init_FailureInjection_instance_mask(msg_);
  }

private:
  ::px4_msgs::msg::FailureInjection msg_;
};

class Init_FailureInjection_count
{
public:
  explicit Init_FailureInjection_count(::px4_msgs::msg::FailureInjection & msg)
  : msg_(msg)
  {}
  Init_FailureInjection_unit count(::px4_msgs::msg::FailureInjection::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_FailureInjection_unit(msg_);
  }

private:
  ::px4_msgs::msg::FailureInjection msg_;
};

class Init_FailureInjection_timestamp
{
public:
  Init_FailureInjection_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FailureInjection_count timestamp(::px4_msgs::msg::FailureInjection::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FailureInjection_count(msg_);
  }

private:
  ::px4_msgs::msg::FailureInjection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::FailureInjection>()
{
  return px4_msgs::msg::builder::Init_FailureInjection_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FAILURE_INJECTION__BUILDER_HPP_
