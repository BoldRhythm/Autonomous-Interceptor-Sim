// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/FailureInjection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/failure_injection.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__FAILURE_INJECTION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__FAILURE_INJECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/failure_injection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FailureInjection & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << ", ";
  }

  // member: unit
  {
    if (msg.unit.size() == 0) {
      out << "unit: []";
    } else {
      out << "unit: [";
      size_t pending_items = msg.unit.size();
      for (auto item : msg.unit) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: instance_mask
  {
    if (msg.instance_mask.size() == 0) {
      out << "instance_mask: []";
    } else {
      out << "instance_mask: [";
      size_t pending_items = msg.instance_mask.size();
      for (auto item : msg.instance_mask) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: failure_type
  {
    if (msg.failure_type.size() == 0) {
      out << "failure_type: []";
    } else {
      out << "failure_type: [";
      size_t pending_items = msg.failure_type.size();
      for (auto item : msg.failure_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FailureInjection & msg,
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

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unit.size() == 0) {
      out << "unit: []\n";
    } else {
      out << "unit:\n";
      for (auto item : msg.unit) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: instance_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.instance_mask.size() == 0) {
      out << "instance_mask: []\n";
    } else {
      out << "instance_mask:\n";
      for (auto item : msg.instance_mask) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: failure_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.failure_type.size() == 0) {
      out << "failure_type: []\n";
    } else {
      out << "failure_type:\n";
      for (auto item : msg.failure_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FailureInjection & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::FailureInjection & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::FailureInjection & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::FailureInjection>()
{
  return "px4_msgs::msg::FailureInjection";
}

template<>
inline const char * name<px4_msgs::msg::FailureInjection>()
{
  return "px4_msgs/msg/FailureInjection";
}

template<>
struct has_fixed_size<px4_msgs::msg::FailureInjection>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::FailureInjection>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::FailureInjection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__FAILURE_INJECTION__TRAITS_HPP_
