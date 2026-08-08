// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/RtcmData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/rtcm_data.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__RTCM_DATA__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__RTCM_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/rtcm_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_RtcmData_data
{
public:
  explicit Init_RtcmData_data(::px4_msgs::msg::RtcmData & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::RtcmData data(::px4_msgs::msg::RtcmData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::RtcmData msg_;
};

class Init_RtcmData_flags
{
public:
  explicit Init_RtcmData_flags(::px4_msgs::msg::RtcmData & msg)
  : msg_(msg)
  {}
  Init_RtcmData_data flags(::px4_msgs::msg::RtcmData::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_RtcmData_data(msg_);
  }

private:
  ::px4_msgs::msg::RtcmData msg_;
};

class Init_RtcmData_len
{
public:
  explicit Init_RtcmData_len(::px4_msgs::msg::RtcmData & msg)
  : msg_(msg)
  {}
  Init_RtcmData_flags len(::px4_msgs::msg::RtcmData::_len_type arg)
  {
    msg_.len = std::move(arg);
    return Init_RtcmData_flags(msg_);
  }

private:
  ::px4_msgs::msg::RtcmData msg_;
};

class Init_RtcmData_device_id
{
public:
  explicit Init_RtcmData_device_id(::px4_msgs::msg::RtcmData & msg)
  : msg_(msg)
  {}
  Init_RtcmData_len device_id(::px4_msgs::msg::RtcmData::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_RtcmData_len(msg_);
  }

private:
  ::px4_msgs::msg::RtcmData msg_;
};

class Init_RtcmData_timestamp
{
public:
  Init_RtcmData_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RtcmData_device_id timestamp(::px4_msgs::msg::RtcmData::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RtcmData_device_id(msg_);
  }

private:
  ::px4_msgs::msg::RtcmData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::RtcmData>()
{
  return px4_msgs::msg::builder::Init_RtcmData_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RTCM_DATA__BUILDER_HPP_
