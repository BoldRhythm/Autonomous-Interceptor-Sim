// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/CellularStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/cellular_status.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__CellularStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__CellularStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CellularStatus_
{
  using Type = CellularStatus_<ContainerAllocator>;

  explicit CellularStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->status = 0;
      this->failure_reason = 0;
      this->type = 0;
      this->quality = 0;
      this->mcc = 0;
      this->mnc = 0;
      this->lac = 0;
      this->id = 0;
      this->link_tx_rate = 0ul;
      this->link_rx_rate = 0ul;
      std::fill<typename std::array<uint8_t, 9>::iterator, uint8_t>(this->cell_tower_id.begin(), this->cell_tower_id.end(), 0);
      this->band_number = 0;
      this->band_frequency = 0.0f;
      this->channel_number = 0ul;
      this->rx_level = 0.0f;
      this->tx_level = 0.0f;
      this->rx_quality = 0.0f;
      this->sinr = 0.0f;
    }
  }

  explicit CellularStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cell_tower_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->status = 0;
      this->failure_reason = 0;
      this->type = 0;
      this->quality = 0;
      this->mcc = 0;
      this->mnc = 0;
      this->lac = 0;
      this->id = 0;
      this->link_tx_rate = 0ul;
      this->link_rx_rate = 0ul;
      std::fill<typename std::array<uint8_t, 9>::iterator, uint8_t>(this->cell_tower_id.begin(), this->cell_tower_id.end(), 0);
      this->band_number = 0;
      this->band_frequency = 0.0f;
      this->channel_number = 0ul;
      this->rx_level = 0.0f;
      this->tx_level = 0.0f;
      this->rx_quality = 0.0f;
      this->sinr = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _status_type =
    uint8_t;
  _status_type status;
  using _failure_reason_type =
    uint8_t;
  _failure_reason_type failure_reason;
  using _type_type =
    uint8_t;
  _type_type type;
  using _quality_type =
    uint8_t;
  _quality_type quality;
  using _mcc_type =
    uint16_t;
  _mcc_type mcc;
  using _mnc_type =
    uint16_t;
  _mnc_type mnc;
  using _lac_type =
    uint16_t;
  _lac_type lac;
  using _id_type =
    uint8_t;
  _id_type id;
  using _link_tx_rate_type =
    uint32_t;
  _link_tx_rate_type link_tx_rate;
  using _link_rx_rate_type =
    uint32_t;
  _link_rx_rate_type link_rx_rate;
  using _cell_tower_id_type =
    std::array<uint8_t, 9>;
  _cell_tower_id_type cell_tower_id;
  using _band_number_type =
    uint8_t;
  _band_number_type band_number;
  using _band_frequency_type =
    float;
  _band_frequency_type band_frequency;
  using _channel_number_type =
    uint32_t;
  _channel_number_type channel_number;
  using _rx_level_type =
    float;
  _rx_level_type rx_level;
  using _tx_level_type =
    float;
  _tx_level_type tx_level;
  using _rx_quality_type =
    float;
  _rx_quality_type rx_quality;
  using _sinr_type =
    float;
  _sinr_type sinr;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__failure_reason(
    const uint8_t & _arg)
  {
    this->failure_reason = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__quality(
    const uint8_t & _arg)
  {
    this->quality = _arg;
    return *this;
  }
  Type & set__mcc(
    const uint16_t & _arg)
  {
    this->mcc = _arg;
    return *this;
  }
  Type & set__mnc(
    const uint16_t & _arg)
  {
    this->mnc = _arg;
    return *this;
  }
  Type & set__lac(
    const uint16_t & _arg)
  {
    this->lac = _arg;
    return *this;
  }
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__link_tx_rate(
    const uint32_t & _arg)
  {
    this->link_tx_rate = _arg;
    return *this;
  }
  Type & set__link_rx_rate(
    const uint32_t & _arg)
  {
    this->link_rx_rate = _arg;
    return *this;
  }
  Type & set__cell_tower_id(
    const std::array<uint8_t, 9> & _arg)
  {
    this->cell_tower_id = _arg;
    return *this;
  }
  Type & set__band_number(
    const uint8_t & _arg)
  {
    this->band_number = _arg;
    return *this;
  }
  Type & set__band_frequency(
    const float & _arg)
  {
    this->band_frequency = _arg;
    return *this;
  }
  Type & set__channel_number(
    const uint32_t & _arg)
  {
    this->channel_number = _arg;
    return *this;
  }
  Type & set__rx_level(
    const float & _arg)
  {
    this->rx_level = _arg;
    return *this;
  }
  Type & set__tx_level(
    const float & _arg)
  {
    this->tx_level = _arg;
    return *this;
  }
  Type & set__rx_quality(
    const float & _arg)
  {
    this->rx_quality = _arg;
    return *this;
  }
  Type & set__sinr(
    const float & _arg)
  {
    this->sinr = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_FLAG_UNKNOWN =
    0u;
  static constexpr uint8_t STATUS_FLAG_FAILED =
    1u;
  static constexpr uint8_t STATUS_FLAG_INITIALIZING =
    2u;
  static constexpr uint8_t STATUS_FLAG_LOCKED =
    3u;
  static constexpr uint8_t STATUS_FLAG_DISABLED =
    4u;
  static constexpr uint8_t STATUS_FLAG_DISABLING =
    5u;
  static constexpr uint8_t STATUS_FLAG_ENABLING =
    6u;
  static constexpr uint8_t STATUS_FLAG_ENABLED =
    7u;
  static constexpr uint8_t STATUS_FLAG_SEARCHING =
    8u;
  static constexpr uint8_t STATUS_FLAG_REGISTERED =
    9u;
  static constexpr uint8_t STATUS_FLAG_DISCONNECTING =
    10u;
  static constexpr uint8_t STATUS_FLAG_CONNECTING =
    11u;
  static constexpr uint8_t STATUS_FLAG_CONNECTED =
    12u;
  static constexpr uint8_t FAILURE_REASON_NONE =
    0u;
  static constexpr uint8_t FAILURE_REASON_UNKNOWN =
    1u;
  static constexpr uint8_t FAILURE_REASON_SIM_MISSING =
    2u;
  static constexpr uint8_t FAILURE_REASON_SIM_ERROR =
    3u;
  static constexpr uint8_t CELLULAR_NETWORK_RADIO_TYPE_NONE =
    0u;
  static constexpr uint8_t CELLULAR_NETWORK_RADIO_TYPE_GSM =
    1u;
  static constexpr uint8_t CELLULAR_NETWORK_RADIO_TYPE_CDMA =
    2u;
  static constexpr uint8_t CELLULAR_NETWORK_RADIO_TYPE_WCDMA =
    3u;
  static constexpr uint8_t CELLULAR_NETWORK_RADIO_TYPE_LTE =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::CellularStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::CellularStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::CellularStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::CellularStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CellularStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CellularStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CellularStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CellularStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::CellularStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::CellularStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__CellularStatus
    std::shared_ptr<px4_msgs::msg::CellularStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__CellularStatus
    std::shared_ptr<px4_msgs::msg::CellularStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CellularStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->failure_reason != other.failure_reason) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->quality != other.quality) {
      return false;
    }
    if (this->mcc != other.mcc) {
      return false;
    }
    if (this->mnc != other.mnc) {
      return false;
    }
    if (this->lac != other.lac) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->link_tx_rate != other.link_tx_rate) {
      return false;
    }
    if (this->link_rx_rate != other.link_rx_rate) {
      return false;
    }
    if (this->cell_tower_id != other.cell_tower_id) {
      return false;
    }
    if (this->band_number != other.band_number) {
      return false;
    }
    if (this->band_frequency != other.band_frequency) {
      return false;
    }
    if (this->channel_number != other.channel_number) {
      return false;
    }
    if (this->rx_level != other.rx_level) {
      return false;
    }
    if (this->tx_level != other.tx_level) {
      return false;
    }
    if (this->rx_quality != other.rx_quality) {
      return false;
    }
    if (this->sinr != other.sinr) {
      return false;
    }
    return true;
  }
  bool operator!=(const CellularStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CellularStatus_

// alias to use template instance with default allocator
using CellularStatus =
  px4_msgs::msg::CellularStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::STATUS_FLAG_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::STATUS_FLAG_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::STATUS_FLAG_INITIALIZING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::STATUS_FLAG_LOCKED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::STATUS_FLAG_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::STATUS_FLAG_DISABLING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::STATUS_FLAG_ENABLING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::STATUS_FLAG_ENABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::STATUS_FLAG_SEARCHING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::STATUS_FLAG_REGISTERED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::STATUS_FLAG_DISCONNECTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::STATUS_FLAG_CONNECTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::STATUS_FLAG_CONNECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::FAILURE_REASON_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::FAILURE_REASON_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::FAILURE_REASON_SIM_MISSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::FAILURE_REASON_SIM_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::CELLULAR_NETWORK_RADIO_TYPE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::CELLULAR_NETWORK_RADIO_TYPE_GSM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::CELLULAR_NETWORK_RADIO_TYPE_CDMA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::CELLULAR_NETWORK_RADIO_TYPE_WCDMA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CellularStatus_<ContainerAllocator>::CELLULAR_NETWORK_RADIO_TYPE_LTE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__STRUCT_HPP_
