// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/FixedWingRunwayControl.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/fixed_wing_runway_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__FixedWingRunwayControl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc7, 0x07, 0xd3, 0xed, 0x2f, 0x08, 0x65, 0x7d,
      0xb6, 0xee, 0xeb, 0xfc, 0x7d, 0x16, 0x1e, 0x40,
      0x4f, 0xb2, 0x32, 0x29, 0x0d, 0xc3, 0x24, 0x0f,
      0x92, 0x65, 0x1c, 0x07, 0x21, 0x11, 0x95, 0xff,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__FixedWingRunwayControl__TYPE_NAME[] = "px4_msgs/msg/FixedWingRunwayControl";

// Define type names, field names, and default values
static char px4_msgs__msg__FixedWingRunwayControl__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__FixedWingRunwayControl__FIELD_NAME__runway_takeoff_state[] = "runway_takeoff_state";
static char px4_msgs__msg__FixedWingRunwayControl__FIELD_NAME__wheel_steering_enabled[] = "wheel_steering_enabled";
static char px4_msgs__msg__FixedWingRunwayControl__FIELD_NAME__wheel_steering_nudging_rate[] = "wheel_steering_nudging_rate";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__FixedWingRunwayControl__FIELDS[] = {
  {
    {px4_msgs__msg__FixedWingRunwayControl__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FixedWingRunwayControl__FIELD_NAME__runway_takeoff_state, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FixedWingRunwayControl__FIELD_NAME__wheel_steering_enabled, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FixedWingRunwayControl__FIELD_NAME__wheel_steering_nudging_rate, 27, 27},
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
px4_msgs__msg__FixedWingRunwayControl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__FixedWingRunwayControl__TYPE_NAME, 35, 35},
      {px4_msgs__msg__FixedWingRunwayControl__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Auxiliary control fields for fixed-wing runway takeoff/landing\n"
  "\n"
  "# Passes information from the FixedWingModeManager to the FixedWingAttitudeController (wheel control) and FixedWingLandDetector (takeoff state)\n"
  "\n"
  "uint64 timestamp # [us] time since system start\n"
  "\n"
  "uint8 STATE_THROTTLE_RAMP = 0\\t\\t# ramping up throttle\n"
  "uint8 STATE_CLAMPED_TO_RUNWAY = 1\\t# clamped to runway, controlling yaw directly (wheel or rudder)\n"
  "uint8 STATE_CLIMBOUT = 2\\t\\t# climbout to safe height before navigation\n"
  "uint8 STATE_FLYING = 3\\t\\t\\t# navigate freely\n"
  "\n"
  "uint8 runway_takeoff_state\\t\\t# Current state of runway takeoff state machine\n"
  "\n"
  "bool wheel_steering_enabled\\t\\t# Flag that enables the wheel steering.\n"
  "float32 wheel_steering_nudging_rate\\t# [norm] [@range -1, 1] [FRD] Manual wheel nudging, added to controller output. NAN is interpreted as 0.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__FixedWingRunwayControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__FixedWingRunwayControl__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 812, 812},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__FixedWingRunwayControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__FixedWingRunwayControl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
