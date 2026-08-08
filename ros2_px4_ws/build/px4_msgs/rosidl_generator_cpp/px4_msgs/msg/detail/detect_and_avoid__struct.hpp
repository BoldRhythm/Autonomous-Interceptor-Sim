// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/DetectAndAvoid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/detect_and_avoid.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__DetectAndAvoid __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__DetectAndAvoid __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectAndAvoid_
{
  using Type = DetectAndAvoid_<ContainerAllocator>;

  explicit DetectAndAvoid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->unique_id = 0ull;
      this->unique_id_encoding = 0;
      this->conflict_level = 0;
      this->aircraft_dist = 0.0f;
      this->aircraft_dist_hor = 0.0f;
      this->aircraft_dist_vert = 0.0f;
      this->expected_min_dist_time = 0.0f;
    }
  }

  explicit DetectAndAvoid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->unique_id = 0ull;
      this->unique_id_encoding = 0;
      this->conflict_level = 0;
      this->aircraft_dist = 0.0f;
      this->aircraft_dist_hor = 0.0f;
      this->aircraft_dist_vert = 0.0f;
      this->expected_min_dist_time = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _unique_id_type =
    uint64_t;
  _unique_id_type unique_id;
  using _unique_id_encoding_type =
    uint8_t;
  _unique_id_encoding_type unique_id_encoding;
  using _conflict_level_type =
    uint8_t;
  _conflict_level_type conflict_level;
  using _aircraft_dist_type =
    float;
  _aircraft_dist_type aircraft_dist;
  using _aircraft_dist_hor_type =
    float;
  _aircraft_dist_hor_type aircraft_dist_hor;
  using _aircraft_dist_vert_type =
    float;
  _aircraft_dist_vert_type aircraft_dist_vert;
  using _expected_min_dist_time_type =
    float;
  _expected_min_dist_time_type expected_min_dist_time;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__unique_id(
    const uint64_t & _arg)
  {
    this->unique_id = _arg;
    return *this;
  }
  Type & set__unique_id_encoding(
    const uint8_t & _arg)
  {
    this->unique_id_encoding = _arg;
    return *this;
  }
  Type & set__conflict_level(
    const uint8_t & _arg)
  {
    this->conflict_level = _arg;
    return *this;
  }
  Type & set__aircraft_dist(
    const float & _arg)
  {
    this->aircraft_dist = _arg;
    return *this;
  }
  Type & set__aircraft_dist_hor(
    const float & _arg)
  {
    this->aircraft_dist_hor = _arg;
    return *this;
  }
  Type & set__aircraft_dist_vert(
    const float & _arg)
  {
    this->aircraft_dist_vert = _arg;
    return *this;
  }
  Type & set__expected_min_dist_time(
    const float & _arg)
  {
    this->expected_min_dist_time = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DAA_CONFLICT_LVL_NONE =
    0u;
  static constexpr uint8_t DAA_CONFLICT_LVL_LOW =
    1u;
  static constexpr uint8_t DAA_CONFLICT_LVL_MEDIUM =
    2u;
  static constexpr uint8_t DAA_CONFLICT_LVL_HIGH =
    3u;
  static constexpr uint8_t DAA_CONFLICT_LVL_CRITICAL =
    4u;
  static constexpr uint8_t UNIQUE_ID_ENCODING_ICAO =
    0u;
  static constexpr uint8_t UNIQUE_ID_ENCODING_ADSB_CALLSIGN =
    1u;
  static constexpr uint8_t UNIQUE_ID_ENCODING_UAS_ID =
    2u;
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    16u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::DetectAndAvoid_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::DetectAndAvoid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::DetectAndAvoid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::DetectAndAvoid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DetectAndAvoid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DetectAndAvoid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DetectAndAvoid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DetectAndAvoid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::DetectAndAvoid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::DetectAndAvoid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__DetectAndAvoid
    std::shared_ptr<px4_msgs::msg::DetectAndAvoid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__DetectAndAvoid
    std::shared_ptr<px4_msgs::msg::DetectAndAvoid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectAndAvoid_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->unique_id != other.unique_id) {
      return false;
    }
    if (this->unique_id_encoding != other.unique_id_encoding) {
      return false;
    }
    if (this->conflict_level != other.conflict_level) {
      return false;
    }
    if (this->aircraft_dist != other.aircraft_dist) {
      return false;
    }
    if (this->aircraft_dist_hor != other.aircraft_dist_hor) {
      return false;
    }
    if (this->aircraft_dist_vert != other.aircraft_dist_vert) {
      return false;
    }
    if (this->expected_min_dist_time != other.expected_min_dist_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectAndAvoid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectAndAvoid_

// alias to use template instance with default allocator
using DetectAndAvoid =
  px4_msgs::msg::DetectAndAvoid_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectAndAvoid_<ContainerAllocator>::DAA_CONFLICT_LVL_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectAndAvoid_<ContainerAllocator>::DAA_CONFLICT_LVL_LOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectAndAvoid_<ContainerAllocator>::DAA_CONFLICT_LVL_MEDIUM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectAndAvoid_<ContainerAllocator>::DAA_CONFLICT_LVL_HIGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectAndAvoid_<ContainerAllocator>::DAA_CONFLICT_LVL_CRITICAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectAndAvoid_<ContainerAllocator>::UNIQUE_ID_ENCODING_ICAO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectAndAvoid_<ContainerAllocator>::UNIQUE_ID_ENCODING_ADSB_CALLSIGN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectAndAvoid_<ContainerAllocator>::UNIQUE_ID_ENCODING_UAS_ID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectAndAvoid_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID__STRUCT_HPP_
