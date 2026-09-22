// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/position_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__PositionSetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0x68, 0x96, 0xda, 0x8f, 0x9f, 0x8a, 0x57,
      0x67, 0xf8, 0x9b, 0x89, 0xad, 0xe7, 0x88, 0xfc,
      0x24, 0xd1, 0x7d, 0xd1, 0xf4, 0x6f, 0x69, 0xff,
      0x93, 0x68, 0xbb, 0xdc, 0x8c, 0x8b, 0x99, 0x68,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__PositionSetpoint__TYPE_NAME[] = "px4_msgs/msg/PositionSetpoint";

// Define type names, field names, and default values
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__valid[] = "valid";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__type[] = "type";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__vx[] = "vx";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__vy[] = "vy";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__vz[] = "vz";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__lat[] = "lat";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__lon[] = "lon";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__alt[] = "alt";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__yaw[] = "yaw";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__loiter_radius[] = "loiter_radius";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__loiter_minor_radius[] = "loiter_minor_radius";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__loiter_direction_counter_clockwise[] = "loiter_direction_counter_clockwise";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__loiter_orientation[] = "loiter_orientation";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__loiter_pattern[] = "loiter_pattern";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__acceptance_radius[] = "acceptance_radius";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__alt_acceptance_radius[] = "alt_acceptance_radius";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__course[] = "course";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__cruising_speed[] = "cruising_speed";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__gliding_enabled[] = "gliding_enabled";
static char px4_msgs__msg__PositionSetpoint__FIELD_NAME__cruising_throttle[] = "cruising_throttle";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__PositionSetpoint__FIELDS[] = {
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__valid, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__vx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__vy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__vz, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__alt, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__loiter_radius, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__loiter_minor_radius, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__loiter_direction_counter_clockwise, 34, 34},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__loiter_orientation, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__loiter_pattern, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__acceptance_radius, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__alt_acceptance_radius, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__course, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__cruising_speed, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__gliding_enabled, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__PositionSetpoint__FIELD_NAME__cruising_throttle, 17, 17},
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
px4_msgs__msg__PositionSetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__PositionSetpoint__TYPE_NAME, 29, 29},
      {px4_msgs__msg__PositionSetpoint__FIELDS, 21, 21},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# this file is only used in the position_setpoint triple as a dependency\n"
  "\n"
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint8 SETPOINT_TYPE_POSITION=0\\t# position setpoint\n"
  "uint8 SETPOINT_TYPE_VELOCITY=1\\t# velocity setpoint\n"
  "uint8 SETPOINT_TYPE_LOITER=2\\t# loiter setpoint\n"
  "uint8 SETPOINT_TYPE_TAKEOFF=3\\t# takeoff setpoint\n"
  "uint8 SETPOINT_TYPE_LAND=4\\t# land setpoint, altitude must be ignored, descend until landing\n"
  "uint8 SETPOINT_TYPE_IDLE=5\\t# do nothing, switch off motors or keep at idle speed (MC)\n"
  "\n"
  "uint8 LOITER_TYPE_ORBIT=0 \\t# Circular pattern\n"
  "uint8 LOITER_TYPE_FIGUREEIGHT=1 # Pattern resembling an 8\n"
  "\n"
  "bool valid\\t\\t\\t# true if setpoint is valid\n"
  "uint8 type\\t\\t\\t# setpoint type to adjust behavior of position controller\n"
  "\n"
  "float32 vx\\t\\t\\t# local velocity setpoint in m/s in NED\n"
  "float32 vy\\t\\t\\t# local velocity setpoint in m/s in NED\n"
  "float32 vz\\t\\t\\t# local velocity setpoint in m/s in NED\n"
  "\n"
  "float64 lat\\t\\t\\t# latitude, in deg\n"
  "float64 lon\\t\\t\\t# longitude, in deg\n"
  "float32 alt\\t\\t\\t# altitude AMSL, in m\n"
  "float32 yaw\\t\\t\\t# yaw (only in hover), in rad [-PI..PI), NaN = leave to flight task\n"
  "\n"
  "float32 loiter_radius\\t\\t# [m] [@range 0, INF] loiter major axis radius\n"
  "float32 loiter_minor_radius\\t# [m] [@range 0, INF] loiter minor axis radius (used for non-circular loiter shapes)\n"
  "bool loiter_direction_counter_clockwise # loiter direction is clockwise by default and can be changed using this field\n"
  "float32 loiter_orientation \\t# [rad] [@range -pi, pi] orientation of the major axis with respect to true north\n"
  "uint8 \\tloiter_pattern\\t\\t# loitern pattern to follow\n"
  "\n"
  "float32 acceptance_radius   # horizontal acceptance_radius (meters)\n"
  "float32 alt_acceptance_radius # vertical acceptance radius, only used for fixed wing guidance, NAN = let guidance choose (meters)\n"
  "\n"
  "float32 course\\t\\t\\t# [rad] desired course (bearing) over ground, NaN = unused\n"
  "float32 cruising_speed\\t\\t# the generally desired cruising speed (not a hard constraint)\n"
  "bool gliding_enabled\\t\\t# commands the vehicle to glide if the capability is available (fixed wing only)\n"
  "float32 cruising_throttle\\t# the generally desired cruising throttle (not a hard constraint), only has an effect for rover";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__PositionSetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__PositionSetpoint__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2126, 2126},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__PositionSetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__PositionSetpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
