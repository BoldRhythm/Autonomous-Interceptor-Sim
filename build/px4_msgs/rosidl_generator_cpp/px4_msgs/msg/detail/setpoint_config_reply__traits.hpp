// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SetpointConfigReply.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/setpoint_config_reply.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG_REPLY__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG_REPLY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/setpoint_config_reply__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetpointConfigReply & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: source_id
  {
    out << "source_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_id, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: mode_req_angular_velocity
  {
    out << "mode_req_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_angular_velocity, out);
    out << ", ";
  }

  // member: mode_req_attitude
  {
    out << "mode_req_attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_attitude, out);
    out << ", ";
  }

  // member: mode_req_local_alt
  {
    out << "mode_req_local_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_alt, out);
    out << ", ";
  }

  // member: mode_req_local_position
  {
    out << "mode_req_local_position: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetpointConfigReply & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: source_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_id, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: mode_req_angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_angular_velocity, out);
    out << "\n";
  }

  // member: mode_req_attitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_attitude, out);
    out << "\n";
  }

  // member: mode_req_local_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_local_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_alt, out);
    out << "\n";
  }

  // member: mode_req_local_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_local_position: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetpointConfigReply & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::SetpointConfigReply & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::SetpointConfigReply & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::SetpointConfigReply>()
{
  return "px4_msgs::msg::SetpointConfigReply";
}

template<>
inline const char * name<px4_msgs::msg::SetpointConfigReply>()
{
  return "px4_msgs/msg/SetpointConfigReply";
}

template<>
struct has_fixed_size<px4_msgs::msg::SetpointConfigReply>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SetpointConfigReply>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SetpointConfigReply>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG_REPLY__TRAITS_HPP_
