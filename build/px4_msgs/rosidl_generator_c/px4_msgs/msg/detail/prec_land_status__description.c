// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/PrecLandStatus.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/prec_land_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__PrecLandStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x88, 0x4f, 0xdb, 0xdb, 0xa1, 0x67, 0xe7, 0xb4,
      0xe0, 0xa3, 0x4c, 0x46, 0x99, 0xc5, 0x90, 0xa0,
      0x92, 0x74, 0xab, 0x48, 0x82, 0x4f, 0x22, 0x41,
      0xe0, 0xf1, 0xae, 0x9b, 0x7d, 0xa2, 0x7b, 0xc1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__PrecLandStatus__TYPE_NAME[] = "px4_msgs/msg/PrecLandStatus";

// Define type names, field names, and default values
static char px4_msgs__msg__PrecLandStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__PrecLandStatus__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__PrecLandStatus__FIELDS[] = {
  {
    {px4_msgs__msg__PrecLandStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PrecLandStatus__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__PrecLandStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__PrecLandStatus__TYPE_NAME, 27, 27},
      {px4_msgs__msg__PrecLandStatus__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Precision-landing runtime status: a single state captures both whether precision landing is active and which phase it is in.\n"
  "#\n"
  "# Published by: navigator (precland.cpp).\n"
  "# Subscribed by: vision_target_estimator, flight_mode_manager (FlightTaskAuto).\n"
  "#\n"
  "# STOPPED is published when the precision-landing task is not active (just inactivated, or never started).\n"
  "# The phase values (START..FALLBACK) are only published while the task is running and not yet finished.\n"
  "# DONE is published once on successful completion, then STOPPED on the subsequent inactivation.\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "\n"
  "uint8 state # [@enum PREC_LAND_STATE] Current precision-landing state\n"
  "uint8 PREC_LAND_STATE_STOPPED = 0 # Task not active (inactivated or never started)\n"
  "uint8 PREC_LAND_STATE_START = 1 # Task just activated, initial setup\n"
  "uint8 PREC_LAND_STATE_HORIZONTAL = 2 # Positioning over landing target while maintaining altitude\n"
  "uint8 PREC_LAND_STATE_DESCEND = 3 # Descending while staying over the target\n"
  "uint8 PREC_LAND_STATE_FINAL = 4 # Final landing approach (continues even without target in sight)\n"
  "uint8 PREC_LAND_STATE_SEARCH = 5 # Searching for the landing target\n"
  "uint8 PREC_LAND_STATE_FALLBACK = 6   # Fallback landing method (no precision)\n"
  "uint8 PREC_LAND_STATE_DONE = 7 # Precision landing finished";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__PrecLandStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__PrecLandStatus__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1311, 1311},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__PrecLandStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__PrecLandStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
