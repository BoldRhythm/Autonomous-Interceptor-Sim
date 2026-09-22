// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/FailureInjection.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/failure_injection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__FailureInjection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6d, 0x30, 0x5f, 0x7c, 0xca, 0xb8, 0x8b, 0xca,
      0xb7, 0xd1, 0x65, 0x39, 0xe5, 0x0b, 0x31, 0x0e,
      0x1b, 0x32, 0xf7, 0x82, 0x2b, 0xe3, 0x34, 0x99,
      0x48, 0x9a, 0xaf, 0xfe, 0xdb, 0xe1, 0xd7, 0xf7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__FailureInjection__TYPE_NAME[] = "px4_msgs/msg/FailureInjection";

// Define type names, field names, and default values
static char px4_msgs__msg__FailureInjection__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__FailureInjection__FIELD_NAME__count[] = "count";
static char px4_msgs__msg__FailureInjection__FIELD_NAME__unit[] = "unit";
static char px4_msgs__msg__FailureInjection__FIELD_NAME__instance_mask[] = "instance_mask";
static char px4_msgs__msg__FailureInjection__FIELD_NAME__failure_type[] = "failure_type";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__FailureInjection__FIELDS[] = {
  {
    {px4_msgs__msg__FailureInjection__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FailureInjection__FIELD_NAME__count, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FailureInjection__FIELD_NAME__unit, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FailureInjection__FIELD_NAME__instance_mask, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FailureInjection__FIELD_NAME__failure_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__FailureInjection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__FailureInjection__TYPE_NAME, 29, 29},
      {px4_msgs__msg__FailureInjection__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Failure injection configuration.\n"
  "#\n"
  "# Currently active failure-injection configuration, published by the failure\n"
  "# injection manager (the sole subscriber to vehicle_command INJECT_FAILURE).\n"
  "# Republished only when the configuration changes, so command spam on\n"
  "# vehicle_command cannot propagate to the consumers applying the failures.\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "\n"
  "uint8 MAX_FAILURES = 4 # maximum number of simultaneous failures\n"
  "\n"
  "uint8 count # number of valid entries in the arrays below\n"
  "\n"
  "uint8[4] unit # [@enum FAILURE_UNIT] Affected component per entry\n"
  "# Failure unit (affected component). Mirrors MAVLink FAILURE_UNIT and the\n"
  "# FAILURE_UNIT_* values in vehicle_command.\n"
  "uint8 FAILURE_UNIT_SENSOR_GYRO = 0\n"
  "uint8 FAILURE_UNIT_SENSOR_ACCEL = 1\n"
  "uint8 FAILURE_UNIT_SENSOR_MAG = 2\n"
  "uint8 FAILURE_UNIT_SENSOR_BARO = 3\n"
  "uint8 FAILURE_UNIT_SENSOR_GPS = 4\n"
  "uint8 FAILURE_UNIT_SENSOR_OPTICAL_FLOW = 5\n"
  "uint8 FAILURE_UNIT_SENSOR_VIO = 6\n"
  "uint8 FAILURE_UNIT_SENSOR_DISTANCE_SENSOR = 7\n"
  "uint8 FAILURE_UNIT_SENSOR_AIRSPEED = 8\n"
  "uint8 FAILURE_UNIT_SYSTEM_BATTERY = 100\n"
  "uint8 FAILURE_UNIT_SYSTEM_MOTOR = 101\n"
  "uint8 FAILURE_UNIT_SYSTEM_SERVO = 102\n"
  "uint8 FAILURE_UNIT_SYSTEM_AVOIDANCE = 103\n"
  "uint8 FAILURE_UNIT_SYSTEM_RC_SIGNAL = 104\n"
  "uint8 FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL = 105\n"
  "uint8 FAILURE_UNIT_SYSTEM_ESC = 106\n"
  "\n"
  "uint16[4] instance_mask # Bit i targets instance (i+1); 0xFFFF = all instances\n"
  "\n"
  "uint8[4] failure_type # [@enum FAILURE_TYPE] failure mode per entry\n"
  "# Failure mode.\n"
  "# Mirrors MAVLink FAILURE_TYPE and the FAILURE_TYPE_* values in vehicle_command.\n"
  "uint8 FAILURE_TYPE_OK = 0\n"
  "uint8 FAILURE_TYPE_OFF = 1\n"
  "uint8 FAILURE_TYPE_STUCK = 2\n"
  "uint8 FAILURE_TYPE_GARBAGE = 3\n"
  "uint8 FAILURE_TYPE_WRONG = 4\n"
  "uint8 FAILURE_TYPE_SLOW = 5\n"
  "uint8 FAILURE_TYPE_DELAYED = 6\n"
  "uint8 FAILURE_TYPE_INTERMITTENT = 7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__FailureInjection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__FailureInjection__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1796, 1796},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__FailureInjection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__FailureInjection__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
