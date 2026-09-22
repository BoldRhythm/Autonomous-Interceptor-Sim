// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/RtcmData.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/rtcm_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__RtcmData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2d, 0x27, 0xbe, 0x98, 0xa7, 0xeb, 0xdc, 0xe1,
      0xed, 0x0d, 0xaf, 0x27, 0xf8, 0x7e, 0x1d, 0xbb,
      0x96, 0xac, 0x21, 0x50, 0xc6, 0x8d, 0x0f, 0xc0,
      0xc2, 0xc2, 0xc9, 0x99, 0xeb, 0xcc, 0x2f, 0x9a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__RtcmData__TYPE_NAME[] = "px4_msgs/msg/RtcmData";

// Define type names, field names, and default values
static char px4_msgs__msg__RtcmData__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__RtcmData__FIELD_NAME__device_id[] = "device_id";
static char px4_msgs__msg__RtcmData__FIELD_NAME__len[] = "len";
static char px4_msgs__msg__RtcmData__FIELD_NAME__flags[] = "flags";
static char px4_msgs__msg__RtcmData__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__RtcmData__FIELDS[] = {
  {
    {px4_msgs__msg__RtcmData__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RtcmData__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RtcmData__FIELD_NAME__len, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RtcmData__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RtcmData__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      300,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__RtcmData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__RtcmData__TYPE_NAME, 21, 21},
      {px4_msgs__msg__RtcmData__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# RTCM3 data exchanged with GNSS receivers.\n"
  "#\n"
  "# Published under two topic names that share this definition (see TOPICS below):\n"
  "#\n"
  "# rtcm_corrections - external fixed-base corrections fed into the vehicle (MAVLink\n"
  "# GPS_RTCM_DATA, UAVCAN RTCMStream, GPS drivers in dump mode). Multiple\n"
  "# sources are allowed, one uORB instance each; consumers select an instance\n"
  "# via their stale-link logic.\n"
  "#\n"
  "# rtcm_moving_baseline - moving-base GPS output (RTCM 4072 or equivalent) intended for a rover.\n"
  "# Single publisher per vehicle (on-board moving base, or a CANnode\n"
  "# forwarding MovingBaselineData); consumers only read instance 0.\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "\n"
  "uint32 device_id # [-] Unique device ID of the publisher that produced this RTCM\n"
  "\n"
  "uint16 len # [-] Length of data\n"
  "uint8 flags # [-] LSB: 1=fragmented\n"
  "uint8[300] data # Correction payload (fixed-base RTCM3 and/or SPARTN frames, or moving-baseline RTCM3)\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 16\n"
  "\n"
  "# Sized for the fixed-base corrections case (up to four independent sources). The moving-baseline\n"
  "# topic only uses instance 0 (single publisher per vehicle).\n"
  "uint8 MAX_INSTANCES = 4\n"
  "\n"
  "# TOPICS rtcm_corrections rtcm_moving_baseline";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__RtcmData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__RtcmData__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1185, 1185},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__RtcmData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__RtcmData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
