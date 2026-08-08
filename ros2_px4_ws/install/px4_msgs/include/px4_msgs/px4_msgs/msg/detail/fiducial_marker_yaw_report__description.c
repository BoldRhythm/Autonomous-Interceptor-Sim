// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/FiducialMarkerYawReport.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/fiducial_marker_yaw_report__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__FiducialMarkerYawReport__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd0, 0xf4, 0x7b, 0xd6, 0x67, 0xe6, 0x28, 0xc4,
      0x1c, 0x49, 0xf6, 0xd4, 0x22, 0x5b, 0x9c, 0x44,
      0xa0, 0xed, 0x8c, 0x7e, 0x18, 0x0a, 0x03, 0xee,
      0x20, 0xf6, 0x45, 0x75, 0x1a, 0x2b, 0x78, 0x7f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__FiducialMarkerYawReport__TYPE_NAME[] = "px4_msgs/msg/FiducialMarkerYawReport";

// Define type names, field names, and default values
static char px4_msgs__msg__FiducialMarkerYawReport__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__FiducialMarkerYawReport__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4_msgs__msg__FiducialMarkerYawReport__FIELD_NAME__yaw_ned[] = "yaw_ned";
static char px4_msgs__msg__FiducialMarkerYawReport__FIELD_NAME__yaw_var_ned[] = "yaw_var_ned";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__FiducialMarkerYawReport__FIELDS[] = {
  {
    {px4_msgs__msg__FiducialMarkerYawReport__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FiducialMarkerYawReport__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FiducialMarkerYawReport__FIELD_NAME__yaw_ned, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FiducialMarkerYawReport__FIELD_NAME__yaw_var_ned, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__FiducialMarkerYawReport__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__FiducialMarkerYawReport__TYPE_NAME, 36, 36},
      {px4_msgs__msg__FiducialMarkerYawReport__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Yaw of a precision-landing target relative to the NED (North, East, Down) frame, reported by a vision pipeline.\n"
  "#\n"
  "# Published by: vision pipelines (on-board or off-board over MAVLink TARGET_RELATIVE), decoded in mavlink_receiver.\n"
  "# Subscribed by: vision_target_estimator (VTEOrientation).\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "uint64 timestamp_sample # [us] Timestamp of the raw observation\n"
  "\n"
  "float32 yaw_ned # [rad] [@frame NED] Orientation of the target relative to the NED frame [-Pi ; Pi]\n"
  "float32 yaw_var_ned # [rad^2] Orientation uncertainty";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__FiducialMarkerYawReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__FiducialMarkerYawReport__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 559, 559},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__FiducialMarkerYawReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__FiducialMarkerYawReport__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
