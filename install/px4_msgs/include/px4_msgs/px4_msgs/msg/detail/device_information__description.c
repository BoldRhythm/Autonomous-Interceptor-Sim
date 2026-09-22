// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/DeviceInformation.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/device_information__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__DeviceInformation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0xa4, 0x8b, 0x6f, 0xf6, 0x1d, 0x08, 0x68,
      0x9e, 0x1b, 0x18, 0x9a, 0x54, 0xe1, 0x17, 0x32,
      0xb1, 0xf4, 0xdf, 0x96, 0xf9, 0x41, 0x60, 0x12,
      0xd8, 0x29, 0x84, 0xd7, 0x37, 0x02, 0x73, 0xaf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__DeviceInformation__TYPE_NAME[] = "px4_msgs/msg/DeviceInformation";

// Define type names, field names, and default values
static char px4_msgs__msg__DeviceInformation__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__DeviceInformation__FIELD_NAME__device_type[] = "device_type";
static char px4_msgs__msg__DeviceInformation__FIELD_NAME__name[] = "name";
static char px4_msgs__msg__DeviceInformation__FIELD_NAME__device_id[] = "device_id";
static char px4_msgs__msg__DeviceInformation__FIELD_NAME__firmware_version[] = "firmware_version";
static char px4_msgs__msg__DeviceInformation__FIELD_NAME__hardware_version[] = "hardware_version";
static char px4_msgs__msg__DeviceInformation__FIELD_NAME__serial_number[] = "serial_number";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__DeviceInformation__FIELDS[] = {
  {
    {px4_msgs__msg__DeviceInformation__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DeviceInformation__FIELD_NAME__device_type, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DeviceInformation__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      80,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DeviceInformation__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DeviceInformation__FIELD_NAME__firmware_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      24,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DeviceInformation__FIELD_NAME__hardware_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      24,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DeviceInformation__FIELD_NAME__serial_number, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      33,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__DeviceInformation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__DeviceInformation__TYPE_NAME, 30, 30},
      {px4_msgs__msg__DeviceInformation__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Device information\n"
  "#\n"
  "# Can be used to uniquely associate a device_id from a sensor topic with a physical device using serial number.\n"
  "# as well as tracking of the used firmware versions on the devices.\n"
  "\n"
  "uint64 timestamp  # time since system start (microseconds)\n"
  "\n"
  "uint8 device_type  # [@enum DEVICE_TYPE] Type of the device. Matches MAVLink DEVICE_TYPE enum\n"
  "uint8 DEVICE_TYPE_GENERIC = 0                 # Generic/unknown sensor\n"
  "uint8 DEVICE_TYPE_AIRSPEED = 1                # Airspeed sensor\n"
  "uint8 DEVICE_TYPE_ESC = 2                     # ESC\n"
  "uint8 DEVICE_TYPE_SERVO = 3                   # Servo\n"
  "uint8 DEVICE_TYPE_GPS = 4                     # GPS\n"
  "uint8 DEVICE_TYPE_MAGNETOMETER = 5            # Magnetometer\n"
  "uint8 DEVICE_TYPE_PARACHUTE = 6               # Parachute\n"
  "uint8 DEVICE_TYPE_RANGEFINDER = 7             # 1D Rangefinder\n"
  "uint8 DEVICE_TYPE_WINCH = 8                   # Winch\n"
  "uint8 DEVICE_TYPE_BAROMETER = 9               # Barometer\n"
  "uint8 DEVICE_TYPE_OPTICAL_FLOW = 10           # Optical flow\n"
  "uint8 DEVICE_TYPE_ACCELEROMETER = 11          # Accelerometer\n"
  "uint8 DEVICE_TYPE_GYROSCOPE = 12              # Gyroscope\n"
  "uint8 DEVICE_TYPE_DIFFERENTIAL_PRESSURE = 13  # Differential pressure\n"
  "uint8 DEVICE_TYPE_BATTERY = 14                # Battery\n"
  "uint8 DEVICE_TYPE_HYGROMETER = 15             # Hygrometer\n"
  "uint8 DEVICE_TYPE_TRAFFIC_AVOIDANCE = 16      # Traffic Avoidance system (ADSB)\n"
  "uint8 DEVICE_TYPE_COMPUTE = 17                # Compute boards\n"
  "uint8 DEVICE_TYPE_LIDAR = 18                  # 3D scanning / multi-beam Lidar\n"
  "uint8 DEVICE_TYPE_STEREO_CAMERA = 19          # stereo/depth camera\n"
  "\n"
  "\n"
  "char[80] name # Name of device e.g. DroneCAN node name\n"
  "\n"
  "uint32   device_id         # [-] [@invalid 0 if not available] Unique device ID for the sensor. Does not change between power cycles.\n"
  "char[24] firmware_version  # [-] [@invalid empty if not available] Firmware version.\n"
  "char[24] hardware_version  # [-] [@invalid empty if not available] Hardware version.\n"
  "char[33] serial_number     # [-] [@invalid empty if not available] Device serial number or unique identifier.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__DeviceInformation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__DeviceInformation__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2073, 2073},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__DeviceInformation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__DeviceInformation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
