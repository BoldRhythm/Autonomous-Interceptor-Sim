// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RtcmData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/rtcm_data.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__RTCM_DATA__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__RTCM_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RtcmData __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RtcmData __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RtcmData_
{
  using Type = RtcmData_<ContainerAllocator>;

  explicit RtcmData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_id = 0ul;
      this->len = 0;
      this->flags = 0;
      std::fill<typename std::array<uint8_t, 300>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  explicit RtcmData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_id = 0ul;
      this->len = 0;
      this->flags = 0;
      std::fill<typename std::array<uint8_t, 300>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _device_id_type =
    uint32_t;
  _device_id_type device_id;
  using _len_type =
    uint16_t;
  _len_type len;
  using _flags_type =
    uint8_t;
  _flags_type flags;
  using _data_type =
    std::array<uint8_t, 300>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__device_id(
    const uint32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__len(
    const uint16_t & _arg)
  {
    this->len = _arg;
    return *this;
  }
  Type & set__flags(
    const uint8_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 300> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    16u;
  static constexpr uint8_t MAX_INSTANCES =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::RtcmData_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RtcmData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RtcmData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RtcmData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RtcmData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RtcmData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RtcmData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RtcmData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RtcmData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RtcmData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RtcmData
    std::shared_ptr<px4_msgs::msg::RtcmData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RtcmData
    std::shared_ptr<px4_msgs::msg::RtcmData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RtcmData_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->len != other.len) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const RtcmData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RtcmData_

// alias to use template instance with default allocator
using RtcmData =
  px4_msgs::msg::RtcmData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RtcmData_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RtcmData_<ContainerAllocator>::MAX_INSTANCES;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RTCM_DATA__STRUCT_HPP_
