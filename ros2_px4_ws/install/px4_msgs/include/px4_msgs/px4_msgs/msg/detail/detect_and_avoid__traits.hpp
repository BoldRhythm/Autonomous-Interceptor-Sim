// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/DetectAndAvoid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/detect_and_avoid.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/detect_and_avoid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectAndAvoid & msg,
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
    out << ", ";
  }

  // member: aircraft_dist_hor
  {
    out << "aircraft_dist_hor: ";
    rosidl_generator_traits::value_to_yaml(msg.aircraft_dist_hor, out);
    out << ", ";
  }

  // member: aircraft_dist_vert
  {
    out << "aircraft_dist_vert: ";
    rosidl_generator_traits::value_to_yaml(msg.aircraft_dist_vert, out);
    out << ", ";
  }

  // member: expected_min_dist_time
  {
    out << "expected_min_dist_time: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_min_dist_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectAndAvoid & msg,
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

  // member: aircraft_dist_hor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aircraft_dist_hor: ";
    rosidl_generator_traits::value_to_yaml(msg.aircraft_dist_hor, out);
    out << "\n";
  }

  // member: aircraft_dist_vert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aircraft_dist_vert: ";
    rosidl_generator_traits::value_to_yaml(msg.aircraft_dist_vert, out);
    out << "\n";
  }

  // member: expected_min_dist_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expected_min_dist_time: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_min_dist_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectAndAvoid & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::DetectAndAvoid & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::DetectAndAvoid & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::DetectAndAvoid>()
{
  return "px4_msgs::msg::DetectAndAvoid";
}

template<>
inline const char * name<px4_msgs::msg::DetectAndAvoid>()
{
  return "px4_msgs/msg/DetectAndAvoid";
}

template<>
struct has_fixed_size<px4_msgs::msg::DetectAndAvoid>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::DetectAndAvoid>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::DetectAndAvoid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID__TRAITS_HPP_
