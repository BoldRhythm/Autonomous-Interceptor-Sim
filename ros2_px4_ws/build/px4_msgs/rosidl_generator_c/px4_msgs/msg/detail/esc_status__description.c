// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/EscStatus.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/esc_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__EscStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0xdc, 0x04, 0x70, 0x3b, 0x64, 0x00, 0x2f,
      0x2a, 0x39, 0xe5, 0x90, 0x90, 0x78, 0xae, 0x7b,
      0x73, 0x01, 0xda, 0x32, 0xef, 0x14, 0xa0, 0x43,
      0x29, 0xf4, 0xca, 0x9e, 0x40, 0xe6, 0x35, 0xa2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "px4_msgs/msg/detail/esc_report__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t px4_msgs__msg__EscReport__EXPECTED_HASH = {1, {
    0x13, 0x0a, 0x8d, 0x15, 0xdc, 0x9d, 0xe3, 0x3b,
    0xf5, 0x12, 0x36, 0x70, 0x28, 0x51, 0xae, 0xa8,
    0x27, 0x7a, 0xb7, 0x6b, 0x6c, 0xe5, 0x4a, 0xb0,
    0x7e, 0x25, 0xba, 0x79, 0xd8, 0x91, 0x1d, 0xcb,
  }};
#endif

static char px4_msgs__msg__EscStatus__TYPE_NAME[] = "px4_msgs/msg/EscStatus";
static char px4_msgs__msg__EscReport__TYPE_NAME[] = "px4_msgs/msg/EscReport";

// Define type names, field names, and default values
static char px4_msgs__msg__EscStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__EscStatus__FIELD_NAME__counter[] = "counter";
static char px4_msgs__msg__EscStatus__FIELD_NAME__esc_count[] = "esc_count";
static char px4_msgs__msg__EscStatus__FIELD_NAME__esc_connectiontype[] = "esc_connectiontype";
static char px4_msgs__msg__EscStatus__FIELD_NAME__esc_online_flags[] = "esc_online_flags";
static char px4_msgs__msg__EscStatus__FIELD_NAME__esc_armed_flags[] = "esc_armed_flags";
static char px4_msgs__msg__EscStatus__FIELD_NAME__esc[] = "esc";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__EscStatus__FIELDS[] = {
  {
    {px4_msgs__msg__EscStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscStatus__FIELD_NAME__counter, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscStatus__FIELD_NAME__esc_count, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscStatus__FIELD_NAME__esc_connectiontype, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscStatus__FIELD_NAME__esc_online_flags, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscStatus__FIELD_NAME__esc_armed_flags, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EscStatus__FIELD_NAME__esc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      12,
      0,
      {px4_msgs__msg__EscReport__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription px4_msgs__msg__EscStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {px4_msgs__msg__EscReport__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__EscStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__EscStatus__TYPE_NAME, 22, 22},
      {px4_msgs__msg__EscStatus__FIELDS, 7, 7},
    },
    {px4_msgs__msg__EscStatus__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&px4_msgs__msg__EscReport__EXPECTED_HASH, px4_msgs__msg__EscReport__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = px4_msgs__msg__EscReport__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp # [us] Time since system start\n"
  "uint8 CONNECTED_ESC_MAX = 12 # The number of ESCs supported (Motor1-Motor12)\n"
  "\n"
  "uint8 ESC_CONNECTION_TYPE_PPM = 0 # Traditional PPM ESC\n"
  "uint8 ESC_CONNECTION_TYPE_SERIAL = 1 # Serial Bus connected ESC\n"
  "uint8 ESC_CONNECTION_TYPE_ONESHOT = 2 # One Shot PPM\n"
  "uint8 ESC_CONNECTION_TYPE_I2C = 3 # I2C\n"
  "uint8 ESC_CONNECTION_TYPE_CAN = 4 # CAN-Bus\n"
  "uint8 ESC_CONNECTION_TYPE_DSHOT = 5 # DShot\n"
  "\n"
  "uint16 counter # [-] Incremented by the writing thread everytime new data is stored\n"
  "\n"
  "uint8 esc_count # [-] Number of connected ESCs\n"
  "uint8 esc_connectiontype # [@enum ESC_CONNECTION_TYPE] How ESCs connected to the system\n"
  "\n"
  "uint16 esc_online_flags               # Bitmask indicating which ESC is online/offline (in motor order)\n"
  "# esc_online_flags bit 0 : Set to 1 if Motor1 is online\n"
  "# esc_online_flags bit 1 : Set to 1 if Motor2 is online\n"
  "# esc_online_flags bit 2 : Set to 1 if Motor3 is online\n"
  "# esc_online_flags bit 3 : Set to 1 if Motor4 is online\n"
  "# esc_online_flags bit 4 : Set to 1 if Motor5 is online\n"
  "# esc_online_flags bit 5 : Set to 1 if Motor6 is online\n"
  "# esc_online_flags bit 6 : Set to 1 if Motor7 is online\n"
  "# esc_online_flags bit 7 : Set to 1 if Motor8 is online\n"
  "# esc_online_flags bit 8 : Set to 1 if Motor9 is online\n"
  "# esc_online_flags bit 9 : Set to 1 if Motor10 is online\n"
  "# esc_online_flags bit 10: Set to 1 if Motor11 is online\n"
  "# esc_online_flags bit 11: Set to 1 if Motor12 is online\n"
  "\n"
  "uint16 esc_armed_flags # [-] Bitmask indicating which ESC is armed (in motor order)\n"
  "\n"
  "EscReport[12] esc";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__EscStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__EscStatus__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1532, 1532},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__EscStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__EscStatus__get_individual_type_description_source(NULL),
    sources[1] = *px4_msgs__msg__EscReport__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
