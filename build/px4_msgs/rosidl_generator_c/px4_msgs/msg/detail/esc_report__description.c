// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/EscReport.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/esc_report__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__EscReport__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x13, 0x0a, 0x8d, 0x15, 0xdc, 0x9d, 0xe3, 0x3b,
      0xf5, 0x12, 0x36, 0x70, 0x28, 0x51, 0xae, 0xa8,
      0x27, 0x7a, 0xb7, 0x6b, 0x6c, 0xe5, 0x4a, 0xb0,
      0x7e, 0x25, 0xba, 0x79, 0xd8, 0x91, 0x1d, 0xcb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__EscReport__TYPE_NAME[] = "px4_msgs/msg/EscReport";

// Define type names, field names, and default values
static char px4_msgs__msg__EscReport__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__EscReport__FIELD_NAME__esc_errorcount[] = "esc_errorcount";
static char px4_msgs__msg__EscReport__FIELD_NAME__esc_rpm[] = "esc_rpm";
static char px4_msgs__msg__EscReport__FIELD_NAME__esc_voltage[] = "esc_voltage";
static char px4_msgs__msg__EscReport__FIELD_NAME__esc_current[] = "esc_current";
static char px4_msgs__msg__EscReport__FIELD_NAME__esc_temperature[] = "esc_temperature";
static char px4_msgs__msg__EscReport__FIELD_NAME__motor_temperature[] = "motor_temperature";
static char px4_msgs__msg__EscReport__FIELD_NAME__esc_state[] = "esc_state";
static char px4_msgs__msg__EscReport__FIELD_NAME__actuator_function[] = "actuator_function";
static char px4_msgs__msg__EscReport__FIELD_NAME__failures[] = "failures";
static char px4_msgs__msg__EscReport__FIELD_NAME__esc_power[] = "esc_power";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__EscReport__FIELDS[] = {
  {
    {px4_msgs__msg__EscReport__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscReport__FIELD_NAME__esc_errorcount, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscReport__FIELD_NAME__esc_rpm, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscReport__FIELD_NAME__esc_voltage, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscReport__FIELD_NAME__esc_current, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscReport__FIELD_NAME__esc_temperature, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscReport__FIELD_NAME__motor_temperature, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscReport__FIELD_NAME__esc_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscReport__FIELD_NAME__actuator_function, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscReport__FIELD_NAME__failures, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscReport__FIELD_NAME__esc_power, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__EscReport__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__EscReport__TYPE_NAME, 22, 22},
      {px4_msgs__msg__EscReport__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp # [us] Time since system start\n"
  "\n"
  "uint32 esc_errorcount # [-] Number of reported errors by ESC - if supported\n"
  "int32 esc_rpm # [rpm] Motor RPM, negative for reverse rotation - if supported\n"
  "float32 esc_voltage # [V] Voltage measured from current ESC - if supported\n"
  "float32 esc_current # [A] Current measured from current ESC - if supported\n"
  "float32 esc_temperature # [degC] Temperature measured from current ESC - if supported\n"
  "int16 motor_temperature # [degC] Temperature measured from current motor - if supported\n"
  "\n"
  "uint8 esc_state # [-] State of ESC - depend on Vendor\n"
  "\n"
  "uint8 actuator_function # [-] Actuator output function (one of Motor1...MotorN)\n"
  "\n"
  "uint8 ACTUATOR_FUNCTION_MOTOR1 = 101\n"
  "uint8 ACTUATOR_FUNCTION_MOTOR_MAX = 112 # output_functions.yaml Motor.start + Motor.count - 1\n"
  "\n"
  "uint16 failures # [@enum FAILURE] Bitmask to indicate the internal ESC faults\n"
  "int8 esc_power # [%] [@range 0,100] Applied power (negative values reserved)\n"
  "\n"
  "uint8 FAILURE_OVER_CURRENT = 0 # (1 << 0)\n"
  "uint8 FAILURE_OVER_VOLTAGE = 1 # (1 << 1)\n"
  "uint8 FAILURE_MOTOR_OVER_TEMPERATURE = 2 # (1 << 2)\n"
  "uint8 FAILURE_OVER_RPM = 3 # (1 << 3)\n"
  "uint8 FAILURE_INCONSISTENT_CMD = 4 # (1 << 4) Set if ESC received an inconsistent command (i.e out of boundaries)\n"
  "uint8 FAILURE_MOTOR_STUCK = 5 # (1 << 5)\n"
  "uint8 FAILURE_GENERIC = 6 # (1 << 6)\n"
  "uint8 FAILURE_MOTOR_WARN_TEMPERATURE = 7 # (1 << 7)\n"
  "uint8 FAILURE_WARN_ESC_TEMPERATURE = 8 # (1 << 8)\n"
  "uint8 FAILURE_OVER_ESC_TEMPERATURE = 9 # (1 << 9)\n"
  "uint8 ESC_FAILURE_COUNT = 10 # Counter - keep it as last element!";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__EscReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__EscReport__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1536, 1536},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__EscReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__EscReport__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
