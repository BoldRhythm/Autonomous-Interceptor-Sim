// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/VehicleCommandAck.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/vehicle_command_ack__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__VehicleCommandAck__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x36, 0x03, 0x8d, 0x69, 0xf9, 0xdb, 0x90, 0x98,
      0x0f, 0xb8, 0xfe, 0x15, 0x4f, 0x27, 0xf2, 0x2d,
      0xff, 0xed, 0x0c, 0x35, 0xe5, 0x30, 0xb3, 0x24,
      0x13, 0xcf, 0x04, 0x56, 0xaa, 0x8a, 0x29, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__VehicleCommandAck__TYPE_NAME[] = "px4_msgs/msg/VehicleCommandAck";

// Define type names, field names, and default values
static char px4_msgs__msg__VehicleCommandAck__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__VehicleCommandAck__FIELD_NAME__command[] = "command";
static char px4_msgs__msg__VehicleCommandAck__FIELD_NAME__result[] = "result";
static char px4_msgs__msg__VehicleCommandAck__FIELD_NAME__result_param1[] = "result_param1";
static char px4_msgs__msg__VehicleCommandAck__FIELD_NAME__result_param2[] = "result_param2";
static char px4_msgs__msg__VehicleCommandAck__FIELD_NAME__target_system[] = "target_system";
static char px4_msgs__msg__VehicleCommandAck__FIELD_NAME__target_component[] = "target_component";
static char px4_msgs__msg__VehicleCommandAck__FIELD_NAME__from_external[] = "from_external";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__VehicleCommandAck__FIELDS[] = {
  {
    {px4_msgs__msg__VehicleCommandAck__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VehicleCommandAck__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VehicleCommandAck__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VehicleCommandAck__FIELD_NAME__result_param1, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VehicleCommandAck__FIELD_NAME__result_param2, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VehicleCommandAck__FIELD_NAME__target_system, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VehicleCommandAck__FIELD_NAME__target_component, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VehicleCommandAck__FIELD_NAME__from_external, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__VehicleCommandAck__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__VehicleCommandAck__TYPE_NAME, 30, 30},
      {px4_msgs__msg__VehicleCommandAck__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Vehicle Command Acknowledgement uORB message.\n"
  "#\n"
  "# Used for acknowledging the vehicle command being received.\n"
  "# Follows the MAVLink COMMAND_ACK message definition\n"
  "\n"
  "uint32 MESSAGE_VERSION = 1\n"
  "\n"
  "uint64 timestamp # [us] time since system start\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 8\n"
  "\n"
  "uint32 command # [-] Command that is being acknowledged\n"
  "\n"
  "uint8 result # [@enum VEHICLE_CMD_RESULT] Command result\n"
  "# VEHICLE_CMD_RESULT Result cases. Follows the MAVLink MAV_RESULT enum definition\n"
  "uint8 VEHICLE_CMD_RESULT_ACCEPTED = 0 # Command ACCEPTED and EXECUTED\n"
  "uint8 VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED = 1 # Command TEMPORARY REJECTED/DENIED\n"
  "uint8 VEHICLE_CMD_RESULT_DENIED = 2 # Command PERMANENTLY DENIED\n"
  "uint8 VEHICLE_CMD_RESULT_UNSUPPORTED = 3 # Command UNKNOWN/UNSUPPORTED\n"
  "uint8 VEHICLE_CMD_RESULT_FAILED = 4 # Command executed, but failed\n"
  "uint8 VEHICLE_CMD_RESULT_IN_PROGRESS = 5 # Command being executed\n"
  "uint8 VEHICLE_CMD_RESULT_CANCELLED = 6 # Command Canceled\n"
  "uint8 VEHICLE_CMD_RESULT_COMMAND_LONG_ONLY = 7 # Command is only accepted when sent as a COMMAND_LONG\n"
  "uint8 VEHICLE_CMD_RESULT_COMMAND_INT_ONLY = 8 # Command is only accepted when sent as a COMMAND_INT\n"
  "uint8 VEHICLE_CMD_RESULT_UNSUPPORTED_MAV_FRAME = 9 # Command does not support specified frame\n"
  "\n"
  "uint8 result_param1 # [-] Can be set with the reason why the command was denied, or the progress percentage when result is MAV_RESULT_IN_PROGRESS (%)\n"
  "\n"
  "int32 result_param2 # [enum ARM_AUTH_DENIED_REASON] Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied, or what ARM_AUTH_DENIED_REASON\n"
  "# Arming denied specific cases\n"
  "uint16 ARM_AUTH_DENIED_REASON_GENERIC = 0\n"
  "uint16 ARM_AUTH_DENIED_REASON_NONE = 1\n"
  "uint16 ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT = 2\n"
  "uint16 ARM_AUTH_DENIED_REASON_TIMEOUT = 3\n"
  "uint16 ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE = 4\n"
  "uint16 ARM_AUTH_DENIED_REASON_BAD_WEATHER = 5\n"
  "\n"
  "uint8 target_system # [-] Target system\n"
  "uint16 target_component # Target component / mode executor\n"
  "\n"
  "bool from_external # Indicates if the command came from an external source";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__VehicleCommandAck__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__VehicleCommandAck__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2066, 2066},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__VehicleCommandAck__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__VehicleCommandAck__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
