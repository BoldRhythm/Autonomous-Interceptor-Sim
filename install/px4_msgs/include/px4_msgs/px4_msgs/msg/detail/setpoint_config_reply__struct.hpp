// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SetpointConfigReply.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/setpoint_config_reply.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG_REPLY__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG_REPLY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SetpointConfigReply __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SetpointConfigReply __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetpointConfigReply_
{
  using Type = SetpointConfigReply_<ContainerAllocator>;

  explicit SetpointConfigReply_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->type = 0;
      this->source_id = 0;
      this->result = 0;
      this->mode_req_angular_velocity = false;
      this->mode_req_attitude = false;
      this->mode_req_local_alt = false;
      this->mode_req_local_position = false;
    }
  }

  explicit SetpointConfigReply_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->type = 0;
      this->source_id = 0;
      this->result = 0;
      this->mode_req_angular_velocity = false;
      this->mode_req_attitude = false;
      this->mode_req_local_alt = false;
      this->mode_req_local_position = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _type_type =
    uint16_t;
  _type_type type;
  using _source_id_type =
    uint8_t;
  _source_id_type source_id;
  using _result_type =
    uint8_t;
  _result_type result;
  using _mode_req_angular_velocity_type =
    bool;
  _mode_req_angular_velocity_type mode_req_angular_velocity;
  using _mode_req_attitude_type =
    bool;
  _mode_req_attitude_type mode_req_attitude;
  using _mode_req_local_alt_type =
    bool;
  _mode_req_local_alt_type mode_req_local_alt;
  using _mode_req_local_position_type =
    bool;
  _mode_req_local_position_type mode_req_local_position;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__type(
    const uint16_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__source_id(
    const uint8_t & _arg)
  {
    this->source_id = _arg;
    return *this;
  }
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__mode_req_angular_velocity(
    const bool & _arg)
  {
    this->mode_req_angular_velocity = _arg;
    return *this;
  }
  Type & set__mode_req_attitude(
    const bool & _arg)
  {
    this->mode_req_attitude = _arg;
    return *this;
  }
  Type & set__mode_req_local_alt(
    const bool & _arg)
  {
    this->mode_req_local_alt = _arg;
    return *this;
  }
  Type & set__mode_req_local_position(
    const bool & _arg)
  {
    this->mode_req_local_position = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MESSAGE_VERSION =
    0u;
  static constexpr uint8_t RESULT_SUCCESS =
    0u;
  static constexpr uint8_t RESULT_FAILURE_OTHER =
    1u;
  static constexpr uint8_t RESULT_UNSUPPORTED =
    2u;
  static constexpr uint8_t RESULT_UNKNOWN_SETPOINT_TYPE =
    3u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::SetpointConfigReply_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SetpointConfigReply_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SetpointConfigReply_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SetpointConfigReply_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SetpointConfigReply_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SetpointConfigReply_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SetpointConfigReply_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SetpointConfigReply_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SetpointConfigReply_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SetpointConfigReply_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SetpointConfigReply
    std::shared_ptr<px4_msgs::msg::SetpointConfigReply_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SetpointConfigReply
    std::shared_ptr<px4_msgs::msg::SetpointConfigReply_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetpointConfigReply_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->source_id != other.source_id) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->mode_req_angular_velocity != other.mode_req_angular_velocity) {
      return false;
    }
    if (this->mode_req_attitude != other.mode_req_attitude) {
      return false;
    }
    if (this->mode_req_local_alt != other.mode_req_local_alt) {
      return false;
    }
    if (this->mode_req_local_position != other.mode_req_local_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetpointConfigReply_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetpointConfigReply_

// alias to use template instance with default allocator
using SetpointConfigReply =
  px4_msgs::msg::SetpointConfigReply_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SetpointConfigReply_<ContainerAllocator>::MESSAGE_VERSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointConfigReply_<ContainerAllocator>::RESULT_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointConfigReply_<ContainerAllocator>::RESULT_FAILURE_OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointConfigReply_<ContainerAllocator>::RESULT_UNSUPPORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointConfigReply_<ContainerAllocator>::RESULT_UNKNOWN_SETPOINT_TYPE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG_REPLY__STRUCT_HPP_
