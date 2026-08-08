// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/Vtx.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/vtx__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__Vtx__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x16, 0x4d, 0x91, 0x87, 0x03, 0x7f, 0x6b, 0x16,
      0xc4, 0xc6, 0xa8, 0x96, 0x7b, 0xcd, 0xbb, 0x6e,
      0x1c, 0x71, 0x0f, 0x06, 0xd7, 0x87, 0x24, 0xfb,
      0x8f, 0x03, 0x98, 0x60, 0x55, 0x4f, 0x20, 0x74,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__Vtx__TYPE_NAME[] = "px4_msgs/msg/Vtx";

// Define type names, field names, and default values
static char px4_msgs__msg__Vtx__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__Vtx__FIELD_NAME__protocol[] = "protocol";
static char px4_msgs__msg__Vtx__FIELD_NAME__device[] = "device";
static char px4_msgs__msg__Vtx__FIELD_NAME__mode[] = "mode";
static char px4_msgs__msg__Vtx__FIELD_NAME__band[] = "band";
static char px4_msgs__msg__Vtx__FIELD_NAME__channel[] = "channel";
static char px4_msgs__msg__Vtx__FIELD_NAME__frequency[] = "frequency";
static char px4_msgs__msg__Vtx__FIELD_NAME__band_letter[] = "band_letter";
static char px4_msgs__msg__Vtx__FIELD_NAME__band_name[] = "band_name";
static char px4_msgs__msg__Vtx__FIELD_NAME__power_level[] = "power_level";
static char px4_msgs__msg__Vtx__FIELD_NAME__power_label[] = "power_label";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__Vtx__FIELDS[] = {
  {
    {px4_msgs__msg__Vtx__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__Vtx__FIELD_NAME__protocol, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__Vtx__FIELD_NAME__device, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__Vtx__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__Vtx__FIELD_NAME__band, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__Vtx__FIELD_NAME__channel, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__Vtx__FIELD_NAME__frequency, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__Vtx__FIELD_NAME__band_letter, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__Vtx__FIELD_NAME__band_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      12,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__Vtx__FIELD_NAME__power_level, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__Vtx__FIELD_NAME__power_label, 11, 11},
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
px4_msgs__msg__Vtx__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__Vtx__TYPE_NAME, 16, 16},
      {px4_msgs__msg__Vtx__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "uint8 BAND_NAME_LENGTH = 12\n"
  "uint8 POWER_LABEL_LENGTH = 4\n"
  "\n"
  "uint8 PROTOCOL_NONE = 0              # No protocol is detected, usually an error\n"
  "uint8 PROTOCOL_SMART_AUDIO_V1 = 10\n"
  "uint8 PROTOCOL_SMART_AUDIO_V2 = 20\n"
  "uint8 PROTOCOL_SMART_AUDIO_V2_1 = 21\n"
  "uint8 PROTOCOL_TRAMP = 100\n"
  "uint8 protocol\n"
  "\n"
  "uint8 DEVICE_UNKNOWN = 0\n"
  "uint8 DEVICE_PEAK_THOR_T67 = 20\n"
  "uint8 DEVICE_RUSH_MAX_SOLO = 40\n"
  "uint8 device\n"
  "\n"
  "uint8 MODE_NORMAL = 0\n"
  "uint8 MODE_PIT = 1\n"
  "uint8 mode\n"
  "\n"
  "# Band and Channel are 0-indexed! But the user expects a 1-indexed display!\n"
  "int8 band        # Band number (0-23), negative values indicate frequency mode\n"
  "int8 channel     # Channel number (0-15), negative values indicate frequency mode\n"
  "uint16 frequency # Frequency in MHz, zero indicates unknown\n"
  "\n"
  "uint8 band_letter   # Band letter as ASCII\n"
  "uint8[12] band_name # Band name in ASCII without null termination\n"
  "\n"
  "# Also 0-indexed, but the user expects a 1-indexed display!\n"
  "int8 power_level     # Current power level (0-15), negative values indicate unknown\n"
  "uint8[4] power_label # Current power label in ASCII without null termination";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__Vtx__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__Vtx__TYPE_NAME, 16, 16},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1133, 1133},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__Vtx__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__Vtx__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
