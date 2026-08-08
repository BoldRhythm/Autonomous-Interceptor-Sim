// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/CellularStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/cellular_status.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/cellular_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CellularStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: failure_reason
  {
    out << "failure_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.failure_reason, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: quality
  {
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << ", ";
  }

  // member: mcc
  {
    out << "mcc: ";
    rosidl_generator_traits::value_to_yaml(msg.mcc, out);
    out << ", ";
  }

  // member: mnc
  {
    out << "mnc: ";
    rosidl_generator_traits::value_to_yaml(msg.mnc, out);
    out << ", ";
  }

  // member: lac
  {
    out << "lac: ";
    rosidl_generator_traits::value_to_yaml(msg.lac, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: link_tx_rate
  {
    out << "link_tx_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.link_tx_rate, out);
    out << ", ";
  }

  // member: link_rx_rate
  {
    out << "link_rx_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.link_rx_rate, out);
    out << ", ";
  }

  // member: cell_tower_id
  {
    if (msg.cell_tower_id.size() == 0) {
      out << "cell_tower_id: []";
    } else {
      out << "cell_tower_id: [";
      size_t pending_items = msg.cell_tower_id.size();
      for (auto item : msg.cell_tower_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: band_number
  {
    out << "band_number: ";
    rosidl_generator_traits::value_to_yaml(msg.band_number, out);
    out << ", ";
  }

  // member: band_frequency
  {
    out << "band_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.band_frequency, out);
    out << ", ";
  }

  // member: channel_number
  {
    out << "channel_number: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_number, out);
    out << ", ";
  }

  // member: rx_level
  {
    out << "rx_level: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_level, out);
    out << ", ";
  }

  // member: tx_level
  {
    out << "tx_level: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_level, out);
    out << ", ";
  }

  // member: rx_quality
  {
    out << "rx_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_quality, out);
    out << ", ";
  }

  // member: sinr
  {
    out << "sinr: ";
    rosidl_generator_traits::value_to_yaml(msg.sinr, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CellularStatus & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: failure_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failure_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.failure_reason, out);
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

  // member: quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << "\n";
  }

  // member: mcc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mcc: ";
    rosidl_generator_traits::value_to_yaml(msg.mcc, out);
    out << "\n";
  }

  // member: mnc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mnc: ";
    rosidl_generator_traits::value_to_yaml(msg.mnc, out);
    out << "\n";
  }

  // member: lac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lac: ";
    rosidl_generator_traits::value_to_yaml(msg.lac, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: link_tx_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_tx_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.link_tx_rate, out);
    out << "\n";
  }

  // member: link_rx_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_rx_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.link_rx_rate, out);
    out << "\n";
  }

  // member: cell_tower_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cell_tower_id.size() == 0) {
      out << "cell_tower_id: []\n";
    } else {
      out << "cell_tower_id:\n";
      for (auto item : msg.cell_tower_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: band_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "band_number: ";
    rosidl_generator_traits::value_to_yaml(msg.band_number, out);
    out << "\n";
  }

  // member: band_frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "band_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.band_frequency, out);
    out << "\n";
  }

  // member: channel_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel_number: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_number, out);
    out << "\n";
  }

  // member: rx_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_level: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_level, out);
    out << "\n";
  }

  // member: tx_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_level: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_level, out);
    out << "\n";
  }

  // member: rx_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_quality, out);
    out << "\n";
  }

  // member: sinr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sinr: ";
    rosidl_generator_traits::value_to_yaml(msg.sinr, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CellularStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::CellularStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::CellularStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::CellularStatus>()
{
  return "px4_msgs::msg::CellularStatus";
}

template<>
inline const char * name<px4_msgs::msg::CellularStatus>()
{
  return "px4_msgs/msg/CellularStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::CellularStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::CellularStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::CellularStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__TRAITS_HPP_
