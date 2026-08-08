// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/SetpointConfigReply.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/setpoint_config_reply__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/setpoint_config_reply__struct.h"
#include "px4_msgs/msg/detail/setpoint_config_reply__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetpointConfigReply__ros_msg_type = px4_msgs__msg__SetpointConfigReply;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
bool cdr_serialize_px4_msgs__msg__SetpointConfigReply(
  const px4_msgs__msg__SetpointConfigReply * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: source_id
  {
    cdr << ros_message->source_id;
  }

  // Field name: result
  {
    cdr << ros_message->result;
  }

  // Field name: mode_req_angular_velocity
  {
    cdr << (ros_message->mode_req_angular_velocity ? true : false);
  }

  // Field name: mode_req_attitude
  {
    cdr << (ros_message->mode_req_attitude ? true : false);
  }

  // Field name: mode_req_local_alt
  {
    cdr << (ros_message->mode_req_local_alt ? true : false);
  }

  // Field name: mode_req_local_position
  {
    cdr << (ros_message->mode_req_local_position ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
bool cdr_deserialize_px4_msgs__msg__SetpointConfigReply(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs__msg__SetpointConfigReply * ros_message)
{
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: source_id
  {
    cdr >> ros_message->source_id;
  }

  // Field name: result
  {
    cdr >> ros_message->result;
  }

  // Field name: mode_req_angular_velocity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_req_angular_velocity = tmp ? true : false;
  }

  // Field name: mode_req_attitude
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_req_attitude = tmp ? true : false;
  }

  // Field name: mode_req_local_alt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_req_local_alt = tmp ? true : false;
  }

  // Field name: mode_req_local_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_req_local_position = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__SetpointConfigReply(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetpointConfigReply__ros_msg_type * ros_message = static_cast<const _SetpointConfigReply__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: source_id
  {
    size_t item_size = sizeof(ros_message->source_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_req_angular_velocity
  {
    size_t item_size = sizeof(ros_message->mode_req_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_req_attitude
  {
    size_t item_size = sizeof(ros_message->mode_req_attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_req_local_alt
  {
    size_t item_size = sizeof(ros_message->mode_req_local_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_req_local_position
  {
    size_t item_size = sizeof(ros_message->mode_req_local_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__SetpointConfigReply(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: source_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: result
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_req_angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_req_attitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_req_local_alt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_req_local_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs__msg__SetpointConfigReply;
    is_plain =
      (
      offsetof(DataType, mode_req_local_position) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
bool cdr_serialize_key_px4_msgs__msg__SetpointConfigReply(
  const px4_msgs__msg__SetpointConfigReply * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: source_id
  {
    cdr << ros_message->source_id;
  }

  // Field name: result
  {
    cdr << ros_message->result;
  }

  // Field name: mode_req_angular_velocity
  {
    cdr << (ros_message->mode_req_angular_velocity ? true : false);
  }

  // Field name: mode_req_attitude
  {
    cdr << (ros_message->mode_req_attitude ? true : false);
  }

  // Field name: mode_req_local_alt
  {
    cdr << (ros_message->mode_req_local_alt ? true : false);
  }

  // Field name: mode_req_local_position
  {
    cdr << (ros_message->mode_req_local_position ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_key_px4_msgs__msg__SetpointConfigReply(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetpointConfigReply__ros_msg_type * ros_message = static_cast<const _SetpointConfigReply__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: source_id
  {
    size_t item_size = sizeof(ros_message->source_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_req_angular_velocity
  {
    size_t item_size = sizeof(ros_message->mode_req_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_req_attitude
  {
    size_t item_size = sizeof(ros_message->mode_req_attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_req_local_alt
  {
    size_t item_size = sizeof(ros_message->mode_req_local_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_req_local_position
  {
    size_t item_size = sizeof(ros_message->mode_req_local_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_key_px4_msgs__msg__SetpointConfigReply(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: source_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: result
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_req_angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_req_attitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_req_local_alt
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_req_local_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs__msg__SetpointConfigReply;
    is_plain =
      (
      offsetof(DataType, mode_req_local_position) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetpointConfigReply__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const px4_msgs__msg__SetpointConfigReply * ros_message = static_cast<const px4_msgs__msg__SetpointConfigReply *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_px4_msgs__msg__SetpointConfigReply(ros_message, cdr);
}

static bool _SetpointConfigReply__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  px4_msgs__msg__SetpointConfigReply * ros_message = static_cast<px4_msgs__msg__SetpointConfigReply *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_px4_msgs__msg__SetpointConfigReply(cdr, ros_message);
}

static uint32_t _SetpointConfigReply__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__SetpointConfigReply(
      untyped_ros_message, 0));
}

static size_t _SetpointConfigReply__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__SetpointConfigReply(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetpointConfigReply = {
  "px4_msgs::msg",
  "SetpointConfigReply",
  _SetpointConfigReply__cdr_serialize,
  _SetpointConfigReply__cdr_deserialize,
  _SetpointConfigReply__get_serialized_size,
  _SetpointConfigReply__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetpointConfigReply__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetpointConfigReply,
  get_message_typesupport_handle_function,
  &px4_msgs__msg__SetpointConfigReply__get_type_hash,
  &px4_msgs__msg__SetpointConfigReply__get_type_description,
  &px4_msgs__msg__SetpointConfigReply__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, SetpointConfigReply)() {
  return &_SetpointConfigReply__type_support;
}

#if defined(__cplusplus)
}
#endif
