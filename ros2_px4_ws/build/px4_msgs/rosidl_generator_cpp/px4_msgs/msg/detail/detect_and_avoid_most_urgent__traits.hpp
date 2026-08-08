// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/DetectAndAvoidMostUrgent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/detect_and_avoid_most_urgent.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID_MOST_URGENT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID_MOST_URGENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/detect_and_avoid_most_urgent__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectAndAvoidMostUrgent & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: unique_id
  {
    out << "unique_id: ";
    rosidl_generator_traits::value_to_yaml(msg.unique_id, out);
    out << ", ";
  }

  // member: unique_id_encoding
  {
    out << "unique_id_encoding: ";
    rosidl_generator_traits::value_to_yaml(msg.unique_id_encoding, out);
    out << ", ";
  }

  // member: has_action
  {
    out << "has_action: ";
    rosidl_generator_traits::value_to_yaml(msg.has_action, out);
    out << ", ";
  }

  // member: conflict_level
  {
    out << "conflict_level: ";
    rosidl_generator_traits::value_to_yaml(msg.conflict_level, out);
    out << ", ";
  }

  // member: aircraft_dist
  {
    out << "aircraft_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.aircraft_dist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectAndAvoidMostUrgent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: unique_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unique_id: ";
    rosidl_generator_traits::value_to_yaml(msg.unique_id, out);
    out << "\n";
  }

  // member: unique_id_encoding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unique_id_encoding: ";
    rosidl_generator_traits::value_to_yaml(msg.unique_id_encoding, out);
    out << "\n";
  }

  // member: has_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_action: ";
    rosidl_generator_traits::value_to_yaml(msg.has_action, out);
    out << "\n";
  }

  // member: conflict_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conflict_level: ";
    rosidl_generator_traits::value_to_yaml(msg.conflict_level, out);
    out << "\n";
  }

  // member: aircraft_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aircraft_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.aircraft_dist, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectAndAvoidMostUrgent & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::DetectAndAvoidMostUrgent & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::DetectAndAvoidMostUrgent & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::DetectAndAvoidMostUrgent>()
{
  return "px4_msgs::msg::DetectAndAvoidMostUrgent";
}

template<>
inline const char * name<px4_msgs::msg::DetectAndAvoidMostUrgent>()
{
  return "px4_msgs/msg/DetectAndAvoidMostUrgent";
}

template<>
struct has_fixed_size<px4_msgs::msg::DetectAndAvoidMostUrgent>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::DetectAndAvoidMostUrgent>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::DetectAndAvoidMostUrgent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID_MOST_URGENT__TRAITS_HPP_
