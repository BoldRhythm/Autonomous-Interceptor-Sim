// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/EscEepromWrite.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/esc_eeprom_write__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__EscEepromWrite__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x46, 0x78, 0xcd, 0xdf, 0x47, 0xbb, 0xf8, 0xf5,
      0x98, 0x28, 0x72, 0x4a, 0x43, 0xce, 0x55, 0x6e,
      0x93, 0x84, 0x0b, 0xfe, 0xec, 0x60, 0x11, 0x17,
      0x34, 0xe5, 0xbc, 0x72, 0x0a, 0x84, 0x34, 0x17,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__EscEepromWrite__TYPE_NAME[] = "px4_msgs/msg/EscEepromWrite";

// Define type names, field names, and default values
static char px4_msgs__msg__EscEepromWrite__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__EscEepromWrite__FIELD_NAME__firmware[] = "firmware";
static char px4_msgs__msg__EscEepromWrite__FIELD_NAME__index[] = "index";
static char px4_msgs__msg__EscEepromWrite__FIELD_NAME__length[] = "length";
static char px4_msgs__msg__EscEepromWrite__FIELD_NAME__data[] = "data";
static char px4_msgs__msg__EscEepromWrite__FIELD_NAME__write_mask[] = "write_mask";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__EscEepromWrite__FIELDS[] = {
  {
    {px4_msgs__msg__EscEepromWrite__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscEepromWrite__FIELD_NAME__firmware, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscEepromWrite__FIELD_NAME__index, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscEepromWrite__FIELD_NAME__length, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscEepromWrite__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      48,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscEepromWrite__FIELD_NAME__write_mask, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__EscEepromWrite__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__EscEepromWrite__TYPE_NAME, 27, 27},
      {px4_msgs__msg__EscEepromWrite__FIELDS, 6, 6},
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
  "uint8 firmware # [-] ESC firmware type (see ESC_FIRMWARE enum in MAVLink)\n"
  "uint8 index # [-] Index of the ESC (0 = ESC1, 1 = ESC2, etc, 255 = All)\n"
  "uint16 length # [-] Length of valid data\n"
  "uint8[48] data # [-] Raw ESC EEPROM data\n"
  "uint32[2] write_mask # [-] Bitmask indicating which bytes in the data array should be written (max 48 values)\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 8 # To support 8 queued up requests";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__EscEepromWrite__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__EscEepromWrite__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 448, 448},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__EscEepromWrite__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__EscEepromWrite__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
