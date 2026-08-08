// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/GpsDump.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/gps_dump__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__GpsDump__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x52, 0x7c, 0xfa, 0x70, 0x1f, 0x51, 0x8b, 0x3e,
      0x25, 0xd8, 0x22, 0x73, 0x37, 0xa9, 0xdd, 0xb6,
      0xa1, 0xc2, 0x88, 0x0e, 0x95, 0xb4, 0x46, 0xb8,
      0xd7, 0x42, 0x70, 0x92, 0xfc, 0x4b, 0x62, 0x98,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__GpsDump__TYPE_NAME[] = "px4_msgs/msg/GpsDump";

// Define type names, field names, and default values
static char px4_msgs__msg__GpsDump__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__GpsDump__FIELD_NAME__instance[] = "instance";
static char px4_msgs__msg__GpsDump__FIELD_NAME__device_id[] = "device_id";
static char px4_msgs__msg__GpsDump__FIELD_NAME__len[] = "len";
static char px4_msgs__msg__GpsDump__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__GpsDump__FIELDS[] = {
  {
    {px4_msgs__msg__GpsDump__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__GpsDump__FIELD_NAME__instance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__GpsDump__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__GpsDump__FIELD_NAME__len, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__GpsDump__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      79,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__GpsDump__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__GpsDump__TYPE_NAME, 20, 20},
      {px4_msgs__msg__GpsDump__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is used to dump the raw gps communication to the log.\n"
  "\n"
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "uint8 INSTANCE_MAIN = 0\n"
  "uint8 INSTANCE_SECONDARY = 1\n"
  "\n"
  "uint8 instance   # Instance of GNSS receiver\n"
  "uint32 device_id\n"
  "uint8 len        # length of data, MSB bit set = message to the gps device,\n"
  "                 # clear = message from the device\n"
  "uint8[79] data   # data to write to the log\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 16";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__GpsDump__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__GpsDump__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 445, 445},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__GpsDump__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__GpsDump__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
