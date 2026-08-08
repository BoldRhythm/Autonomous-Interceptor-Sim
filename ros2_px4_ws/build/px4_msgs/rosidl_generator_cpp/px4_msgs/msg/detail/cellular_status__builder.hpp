// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/CellularStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/cellular_status.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/cellular_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_CellularStatus_sinr
{
public:
  explicit Init_CellularStatus_sinr(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::CellularStatus sinr(::px4_msgs::msg::CellularStatus::_sinr_type arg)
  {
    msg_.sinr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_rx_quality
{
public:
  explicit Init_CellularStatus_rx_quality(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_sinr rx_quality(::px4_msgs::msg::CellularStatus::_rx_quality_type arg)
  {
    msg_.rx_quality = std::move(arg);
    return Init_CellularStatus_sinr(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_tx_level
{
public:
  explicit Init_CellularStatus_tx_level(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_rx_quality tx_level(::px4_msgs::msg::CellularStatus::_tx_level_type arg)
  {
    msg_.tx_level = std::move(arg);
    return Init_CellularStatus_rx_quality(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_rx_level
{
public:
  explicit Init_CellularStatus_rx_level(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_tx_level rx_level(::px4_msgs::msg::CellularStatus::_rx_level_type arg)
  {
    msg_.rx_level = std::move(arg);
    return Init_CellularStatus_tx_level(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_channel_number
{
public:
  explicit Init_CellularStatus_channel_number(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_rx_level channel_number(::px4_msgs::msg::CellularStatus::_channel_number_type arg)
  {
    msg_.channel_number = std::move(arg);
    return Init_CellularStatus_rx_level(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_band_frequency
{
public:
  explicit Init_CellularStatus_band_frequency(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_channel_number band_frequency(::px4_msgs::msg::CellularStatus::_band_frequency_type arg)
  {
    msg_.band_frequency = std::move(arg);
    return Init_CellularStatus_channel_number(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_band_number
{
public:
  explicit Init_CellularStatus_band_number(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_band_frequency band_number(::px4_msgs::msg::CellularStatus::_band_number_type arg)
  {
    msg_.band_number = std::move(arg);
    return Init_CellularStatus_band_frequency(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_cell_tower_id
{
public:
  explicit Init_CellularStatus_cell_tower_id(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_band_number cell_tower_id(::px4_msgs::msg::CellularStatus::_cell_tower_id_type arg)
  {
    msg_.cell_tower_id = std::move(arg);
    return Init_CellularStatus_band_number(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_link_rx_rate
{
public:
  explicit Init_CellularStatus_link_rx_rate(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_cell_tower_id link_rx_rate(::px4_msgs::msg::CellularStatus::_link_rx_rate_type arg)
  {
    msg_.link_rx_rate = std::move(arg);
    return Init_CellularStatus_cell_tower_id(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_link_tx_rate
{
public:
  explicit Init_CellularStatus_link_tx_rate(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_link_rx_rate link_tx_rate(::px4_msgs::msg::CellularStatus::_link_tx_rate_type arg)
  {
    msg_.link_tx_rate = std::move(arg);
    return Init_CellularStatus_link_rx_rate(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_id
{
public:
  explicit Init_CellularStatus_id(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_link_tx_rate id(::px4_msgs::msg::CellularStatus::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CellularStatus_link_tx_rate(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_lac
{
public:
  explicit Init_CellularStatus_lac(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_id lac(::px4_msgs::msg::CellularStatus::_lac_type arg)
  {
    msg_.lac = std::move(arg);
    return Init_CellularStatus_id(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_mnc
{
public:
  explicit Init_CellularStatus_mnc(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_lac mnc(::px4_msgs::msg::CellularStatus::_mnc_type arg)
  {
    msg_.mnc = std::move(arg);
    return Init_CellularStatus_lac(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_mcc
{
public:
  explicit Init_CellularStatus_mcc(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_mnc mcc(::px4_msgs::msg::CellularStatus::_mcc_type arg)
  {
    msg_.mcc = std::move(arg);
    return Init_CellularStatus_mnc(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_quality
{
public:
  explicit Init_CellularStatus_quality(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_mcc quality(::px4_msgs::msg::CellularStatus::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return Init_CellularStatus_mcc(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_type
{
public:
  explicit Init_CellularStatus_type(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_quality type(::px4_msgs::msg::CellularStatus::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_CellularStatus_quality(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_failure_reason
{
public:
  explicit Init_CellularStatus_failure_reason(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_type failure_reason(::px4_msgs::msg::CellularStatus::_failure_reason_type arg)
  {
    msg_.failure_reason = std::move(arg);
    return Init_CellularStatus_type(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_status
{
public:
  explicit Init_CellularStatus_status(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_failure_reason status(::px4_msgs::msg::CellularStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CellularStatus_failure_reason(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_timestamp
{
public:
  Init_CellularStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CellularStatus_status timestamp(::px4_msgs::msg::CellularStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CellularStatus_status(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::CellularStatus>()
{
  return px4_msgs::msg::builder::Init_CellularStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__BUILDER_HPP_
