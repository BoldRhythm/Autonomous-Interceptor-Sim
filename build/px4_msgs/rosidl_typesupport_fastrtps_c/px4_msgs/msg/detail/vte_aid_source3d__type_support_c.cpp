// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/VteAidSource3d.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vte_aid_source3d__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/vte_aid_source3d__struct.h"
#include "px4_msgs/msg/detail/vte_aid_source3d__functions.h"
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


using _VteAidSource3d__ros_msg_type = px4_msgs__msg__VteAidSource3d;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
bool cdr_serialize_px4_msgs__msg__VteAidSource3d(
  const px4_msgs__msg__VteAidSource3d * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: time_last_predict
  {
    cdr << ros_message->time_last_predict;
  }

  // Field name: observation
  {
    size_t size = 3;
    auto array_ptr = ros_message->observation;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: observation_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->observation_variance;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: innovation
  {
    size_t size = 3;
    auto array_ptr = ros_message->innovation;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: innovation_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->innovation_variance;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: test_ratio
  {
    size_t size = 3;
    auto array_ptr = ros_message->test_ratio;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: fusion_status
  {
    size_t size = 3;
    auto array_ptr = ros_message->fusion_status;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: time_since_meas_ms
  {
    cdr << ros_message->time_since_meas_ms;
  }

  // Field name: history_steps
  {
    cdr << ros_message->history_steps;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
bool cdr_deserialize_px4_msgs__msg__VteAidSource3d(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs__msg__VteAidSource3d * ros_message)
{
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: time_last_predict
  {
    cdr >> ros_message->time_last_predict;
  }

  // Field name: observation
  {
    size_t size = 3;
    auto array_ptr = ros_message->observation;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: observation_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->observation_variance;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: innovation
  {
    size_t size = 3;
    auto array_ptr = ros_message->innovation;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: innovation_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->innovation_variance;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: test_ratio
  {
    size_t size = 3;
    auto array_ptr = ros_message->test_ratio;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: fusion_status
  {
    size_t size = 3;
    auto array_ptr = ros_message->fusion_status;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: time_since_meas_ms
  {
    cdr >> ros_message->time_since_meas_ms;
  }

  // Field name: history_steps
  {
    cdr >> ros_message->history_steps;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VteAidSource3d(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VteAidSource3d__ros_msg_type * ros_message = static_cast<const _VteAidSource3d__ros_msg_type *>(untyped_ros_message);
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

  // Field name: timestamp_sample
  {
    size_t item_size = sizeof(ros_message->timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_last_predict
  {
    size_t item_size = sizeof(ros_message->time_last_predict);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: observation
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->observation;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: observation_variance
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->observation_variance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: innovation
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->innovation;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: innovation_variance
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->innovation_variance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: test_ratio
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->test_ratio;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fusion_status
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->fusion_status;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_since_meas_ms
  {
    size_t item_size = sizeof(ros_message->time_since_meas_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: history_steps
  {
    size_t item_size = sizeof(ros_message->history_steps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VteAidSource3d(
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

  // Field name: timestamp_sample
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: time_last_predict
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: observation
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: observation_variance
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: innovation
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: innovation_variance
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: test_ratio
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fusion_status
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: time_since_meas_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: history_steps
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
    using DataType = px4_msgs__msg__VteAidSource3d;
    is_plain =
      (
      offsetof(DataType, history_steps) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
bool cdr_serialize_key_px4_msgs__msg__VteAidSource3d(
  const px4_msgs__msg__VteAidSource3d * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: time_last_predict
  {
    cdr << ros_message->time_last_predict;
  }

  // Field name: observation
  {
    size_t size = 3;
    auto array_ptr = ros_message->observation;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: observation_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->observation_variance;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: innovation
  {
    size_t size = 3;
    auto array_ptr = ros_message->innovation;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: innovation_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->innovation_variance;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: test_ratio
  {
    size_t size = 3;
    auto array_ptr = ros_message->test_ratio;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: fusion_status
  {
    size_t size = 3;
    auto array_ptr = ros_message->fusion_status;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: time_since_meas_ms
  {
    cdr << ros_message->time_since_meas_ms;
  }

  // Field name: history_steps
  {
    cdr << ros_message->history_steps;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_key_px4_msgs__msg__VteAidSource3d(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VteAidSource3d__ros_msg_type * ros_message = static_cast<const _VteAidSource3d__ros_msg_type *>(untyped_ros_message);
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

  // Field name: timestamp_sample
  {
    size_t item_size = sizeof(ros_message->timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_last_predict
  {
    size_t item_size = sizeof(ros_message->time_last_predict);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: observation
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->observation;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: observation_variance
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->observation_variance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: innovation
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->innovation;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: innovation_variance
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->innovation_variance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: test_ratio
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->test_ratio;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fusion_status
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->fusion_status;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_since_meas_ms
  {
    size_t item_size = sizeof(ros_message->time_since_meas_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: history_steps
  {
    size_t item_size = sizeof(ros_message->history_steps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_key_px4_msgs__msg__VteAidSource3d(
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

  // Field name: timestamp_sample
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: time_last_predict
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: observation
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: observation_variance
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: innovation
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: innovation_variance
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: test_ratio
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fusion_status
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: time_since_meas_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: history_steps
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
    using DataType = px4_msgs__msg__VteAidSource3d;
    is_plain =
      (
      offsetof(DataType, history_steps) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _VteAidSource3d__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const px4_msgs__msg__VteAidSource3d * ros_message = static_cast<const px4_msgs__msg__VteAidSource3d *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_px4_msgs__msg__VteAidSource3d(ros_message, cdr);
}

static bool _VteAidSource3d__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  px4_msgs__msg__VteAidSource3d * ros_message = static_cast<px4_msgs__msg__VteAidSource3d *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_px4_msgs__msg__VteAidSource3d(cdr, ros_message);
}

static uint32_t _VteAidSource3d__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__VteAidSource3d(
      untyped_ros_message, 0));
}

static size_t _VteAidSource3d__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__VteAidSource3d(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VteAidSource3d = {
  "px4_msgs::msg",
  "VteAidSource3d",
  _VteAidSource3d__cdr_serialize,
  _VteAidSource3d__cdr_deserialize,
  _VteAidSource3d__get_serialized_size,
  _VteAidSource3d__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _VteAidSource3d__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VteAidSource3d,
  get_message_typesupport_handle_function,
  &px4_msgs__msg__VteAidSource3d__get_type_hash,
  &px4_msgs__msg__VteAidSource3d__get_type_description,
  &px4_msgs__msg__VteAidSource3d__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VteAidSource3d)() {
  return &_VteAidSource3d__type_support;
}

#if defined(__cplusplus)
}
#endif
