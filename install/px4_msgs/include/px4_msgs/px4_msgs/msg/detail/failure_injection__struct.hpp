// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/FailureInjection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/failure_injection.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__FAILURE_INJECTION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__FAILURE_INJECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__FailureInjection __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__FailureInjection __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FailureInjection_
{
  using Type = FailureInjection_<ContainerAllocator>;

  explicit FailureInjection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->count = 0;
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->unit.begin(), this->unit.end(), 0);
      std::fill<typename std::array<uint16_t, 4>::iterator, uint16_t>(this->instance_mask.begin(), this->instance_mask.end(), 0);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->failure_type.begin(), this->failure_type.end(), 0);
    }
  }

  explicit FailureInjection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : unit(_alloc),
    instance_mask(_alloc),
    failure_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->count = 0;
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->unit.begin(), this->unit.end(), 0);
      std::fill<typename std::array<uint16_t, 4>::iterator, uint16_t>(this->instance_mask.begin(), this->instance_mask.end(), 0);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->failure_type.begin(), this->failure_type.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _count_type =
    uint8_t;
  _count_type count;
  using _unit_type =
    std::array<uint8_t, 4>;
  _unit_type unit;
  using _instance_mask_type =
    std::array<uint16_t, 4>;
  _instance_mask_type instance_mask;
  using _failure_type_type =
    std::array<uint8_t, 4>;
  _failure_type_type failure_type;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__count(
    const uint8_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__unit(
    const std::array<uint8_t, 4> & _arg)
  {
    this->unit = _arg;
    return *this;
  }
  Type & set__instance_mask(
    const std::array<uint16_t, 4> & _arg)
  {
    this->instance_mask = _arg;
    return *this;
  }
  Type & set__failure_type(
    const std::array<uint8_t, 4> & _arg)
  {
    this->failure_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MAX_FAILURES =
    4u;
  static constexpr uint8_t FAILURE_UNIT_SENSOR_GYRO =
    0u;
  static constexpr uint8_t FAILURE_UNIT_SENSOR_ACCEL =
    1u;
  static constexpr uint8_t FAILURE_UNIT_SENSOR_MAG =
    2u;
  static constexpr uint8_t FAILURE_UNIT_SENSOR_BARO =
    3u;
  static constexpr uint8_t FAILURE_UNIT_SENSOR_GPS =
    4u;
  static constexpr uint8_t FAILURE_UNIT_SENSOR_OPTICAL_FLOW =
    5u;
  static constexpr uint8_t FAILURE_UNIT_SENSOR_VIO =
    6u;
  static constexpr uint8_t FAILURE_UNIT_SENSOR_DISTANCE_SENSOR =
    7u;
  static constexpr uint8_t FAILURE_UNIT_SENSOR_AIRSPEED =
    8u;
  static constexpr uint8_t FAILURE_UNIT_SYSTEM_BATTERY =
    100u;
  static constexpr uint8_t FAILURE_UNIT_SYSTEM_MOTOR =
    101u;
  static constexpr uint8_t FAILURE_UNIT_SYSTEM_SERVO =
    102u;
  static constexpr uint8_t FAILURE_UNIT_SYSTEM_AVOIDANCE =
    103u;
  static constexpr uint8_t FAILURE_UNIT_SYSTEM_RC_SIGNAL =
    104u;
  static constexpr uint8_t FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL =
    105u;
  static constexpr uint8_t FAILURE_UNIT_SYSTEM_ESC =
    106u;
  static constexpr uint8_t FAILURE_TYPE_OK =
    0u;
  static constexpr uint8_t FAILURE_TYPE_OFF =
    1u;
  static constexpr uint8_t FAILURE_TYPE_STUCK =
    2u;
  static constexpr uint8_t FAILURE_TYPE_GARBAGE =
    3u;
  static constexpr uint8_t FAILURE_TYPE_WRONG =
    4u;
  static constexpr uint8_t FAILURE_TYPE_SLOW =
    5u;
  static constexpr uint8_t FAILURE_TYPE_DELAYED =
    6u;
  static constexpr uint8_t FAILURE_TYPE_INTERMITTENT =
    7u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::FailureInjection_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::FailureInjection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::FailureInjection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::FailureInjection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FailureInjection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FailureInjection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FailureInjection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FailureInjection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::FailureInjection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::FailureInjection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__FailureInjection
    std::shared_ptr<px4_msgs::msg::FailureInjection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__FailureInjection
    std::shared_ptr<px4_msgs::msg::FailureInjection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FailureInjection_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    if (this->unit != other.unit) {
      return false;
    }
    if (this->instance_mask != other.instance_mask) {
      return false;
    }
    if (this->failure_type != other.failure_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const FailureInjection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FailureInjection_

// alias to use template instance with default allocator
using FailureInjection =
  px4_msgs::msg::FailureInjection_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::MAX_FAILURES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SENSOR_GYRO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SENSOR_ACCEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SENSOR_MAG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SENSOR_BARO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SENSOR_GPS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SENSOR_OPTICAL_FLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SENSOR_VIO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SENSOR_DISTANCE_SENSOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SENSOR_AIRSPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SYSTEM_BATTERY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SYSTEM_MOTOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SYSTEM_SERVO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SYSTEM_AVOIDANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SYSTEM_RC_SIGNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_UNIT_SYSTEM_ESC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_TYPE_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_TYPE_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_TYPE_STUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_TYPE_GARBAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_TYPE_WRONG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_TYPE_SLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_TYPE_DELAYED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FailureInjection_<ContainerAllocator>::FAILURE_TYPE_INTERMITTENT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FAILURE_INJECTION__STRUCT_HPP_
