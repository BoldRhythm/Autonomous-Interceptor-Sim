// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SetpointConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/setpoint_config.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SetpointConfig __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SetpointConfig __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetpointConfig_
{
  using Type = SetpointConfig_<ContainerAllocator>;

  explicit SetpointConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->type = 0;
      this->source_id = 0;
      this->should_apply = false;
      this->timeout_ms = 0;
    }
  }

  explicit SetpointConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->type = 0;
      this->source_id = 0;
      this->should_apply = false;
      this->timeout_ms = 0;
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
  using _should_apply_type =
    bool;
  _should_apply_type should_apply;
  using _timeout_ms_type =
    uint16_t;
  _timeout_ms_type timeout_ms;

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
  Type & set__should_apply(
    const bool & _arg)
  {
    this->should_apply = _arg;
    return *this;
  }
  Type & set__timeout_ms(
    const uint16_t & _arg)
  {
    this->timeout_ms = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MESSAGE_VERSION =
    0u;
  static constexpr uint16_t TYPE_INVALID =
    0u;
  static constexpr uint16_t TYPE_DIRECT_ACTUATORS =
    1u;
  static constexpr uint16_t TYPE_MULTICOPTER_GOTO =
    2u;
  static constexpr uint16_t TYPE_FIXEDWING_LATERAL_LONGITUDINAL =
    3u;
  static constexpr uint16_t TYPE_TRAJECTORY =
    4u;
  static constexpr uint16_t TYPE_RATES =
    5u;
  static constexpr uint16_t TYPE_ATTITUDE =
    6u;
  static constexpr uint16_t TYPE_ROVER_POSITION =
    7u;
  static constexpr uint16_t TYPE_ROVER_SPEED_ATTITUDE =
    8u;
  static constexpr uint16_t TYPE_ROVER_SPEED_RATE =
    9u;
  static constexpr uint16_t TYPE_ROVER_SPEED_STEERING =
    10u;
  static constexpr uint16_t TYPE_ROVER_THROTTLE_ATTITUDE =
    11u;
  static constexpr uint16_t TYPE_ROVER_THROTTLE_RATE =
    12u;
  static constexpr uint16_t TYPE_ROVER_THROTTLE_STEERING =
    13u;
  static constexpr uint16_t TYPE_TRAJECTORY_6DOF =
    14u;
  static constexpr uint16_t TYPE_THRUST_AND_TORQUE =
    15u;
  static constexpr uint16_t TYPE_POSITION_TRIPLET =
    16u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::SetpointConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SetpointConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SetpointConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SetpointConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SetpointConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SetpointConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SetpointConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SetpointConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SetpointConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SetpointConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SetpointConfig
    std::shared_ptr<px4_msgs::msg::SetpointConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SetpointConfig
    std::shared_ptr<px4_msgs::msg::SetpointConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetpointConfig_ & other) const
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
    if (this->should_apply != other.should_apply) {
      return false;
    }
    if (this->timeout_ms != other.timeout_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetpointConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetpointConfig_

// alias to use template instance with default allocator
using SetpointConfig =
  px4_msgs::msg::SetpointConfig_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SetpointConfig_<ContainerAllocator>::MESSAGE_VERSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_DIRECT_ACTUATORS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_MULTICOPTER_GOTO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_FIXEDWING_LATERAL_LONGITUDINAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_TRAJECTORY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_RATES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_ATTITUDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_ROVER_POSITION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_ROVER_SPEED_ATTITUDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_ROVER_SPEED_RATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_ROVER_SPEED_STEERING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_ROVER_THROTTLE_ATTITUDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_ROVER_THROTTLE_RATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_ROVER_THROTTLE_STEERING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_TRAJECTORY_6DOF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_THRUST_AND_TORQUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SetpointConfig_<ContainerAllocator>::TYPE_POSITION_TRIPLET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG__STRUCT_HPP_
