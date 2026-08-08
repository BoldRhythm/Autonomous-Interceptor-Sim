// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/InternalCombustionEngineStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/internal_combustion_engine_status.h"


#ifndef PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STATE_STOPPED'.
/**
  * The engine is not running. This is the default state.
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__STATE_STOPPED = 0
};

/// Constant 'STATE_STARTING'.
/**
  * The engine is starting. This is a transient state.
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__STATE_STARTING = 1
};

/// Constant 'STATE_RUNNING'.
/**
  * The engine is running normally.
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__STATE_RUNNING = 2
};

/// Constant 'STATE_FAULT'.
/**
  * The engine can no longer function.
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__STATE_FAULT = 3
};

/// Constant 'SUBSTATE_RUN'.
/**
  * The engine is running. This is the default state.
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__SUBSTATE_RUN = 0
};

/// Constant 'SUBSTATE_IDLE'.
/**
  * The engine idle rpm controller is running.
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__SUBSTATE_IDLE = 1
};

/// Constant 'SUBSTATE_REST'.
/**
  * The engine is at rest.
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__SUBSTATE_REST = 2
};

/// Constant 'FLAG_GENERAL_ERROR'.
/**
  * General error.
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_GENERAL_ERROR = 1ul
};

/// Constant 'FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED'.
/**
  * Error of the crankshaft sensor. This flag is optional.
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED = 2ul
};

/// Constant 'FLAG_CRANKSHAFT_SENSOR_ERROR'.
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_CRANKSHAFT_SENSOR_ERROR = 4ul
};

/// Constant 'FLAG_TEMPERATURE_SUPPORTED'.
/**
  * Temperature levels. These flags are optional
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_TEMPERATURE_SUPPORTED = 8ul
};

/// Constant 'FLAG_TEMPERATURE_BELOW_NOMINAL'.
/**
  * Under-temperature warning
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_TEMPERATURE_BELOW_NOMINAL = 16ul
};

/// Constant 'FLAG_TEMPERATURE_ABOVE_NOMINAL'.
/**
  * Over-temperature warning
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_TEMPERATURE_ABOVE_NOMINAL = 32ul
};

/// Constant 'FLAG_TEMPERATURE_OVERHEATING'.
/**
  * Critical overheating
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_TEMPERATURE_OVERHEATING = 64ul
};

/// Constant 'FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL'.
/**
  * Exhaust gas over-temperature warning
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL = 128ul
};

/// Constant 'FLAG_FUEL_PRESSURE_SUPPORTED'.
/**
  * Fuel pressure. These flags are optional
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_FUEL_PRESSURE_SUPPORTED = 256ul
};

/// Constant 'FLAG_FUEL_PRESSURE_BELOW_NOMINAL'.
/**
  * Under-pressure warning
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_FUEL_PRESSURE_BELOW_NOMINAL = 512ul
};

/// Constant 'FLAG_FUEL_PRESSURE_ABOVE_NOMINAL'.
/**
  * Over-pressure warning
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_FUEL_PRESSURE_ABOVE_NOMINAL = 1024ul
};

/// Constant 'FLAG_DETONATION_SUPPORTED'.
/**
  * Detonation warning. This flag is optional.
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_DETONATION_SUPPORTED = 2048ul
};

/// Constant 'FLAG_DETONATION_OBSERVED'.
/**
  * Detonation condition observed warning
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_DETONATION_OBSERVED = 4096ul
};

/// Constant 'FLAG_MISFIRE_SUPPORTED'.
/**
  * Misfire warning. This flag is optional.
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_MISFIRE_SUPPORTED = 8192ul
};

/// Constant 'FLAG_MISFIRE_OBSERVED'.
/**
  * Misfire condition observed warning
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_MISFIRE_OBSERVED = 16384ul
};

/// Constant 'FLAG_OIL_PRESSURE_SUPPORTED'.
/**
  * Oil pressure. These flags are optional
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_OIL_PRESSURE_SUPPORTED = 32768ul
};

/// Constant 'FLAG_OIL_PRESSURE_BELOW_NOMINAL'.
/**
  * Under-pressure warning
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_OIL_PRESSURE_BELOW_NOMINAL = 65536ul
};

/// Constant 'FLAG_OIL_PRESSURE_ABOVE_NOMINAL'.
/**
  * Over-pressure warning
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_OIL_PRESSURE_ABOVE_NOMINAL = 131072ul
};

/// Constant 'FLAG_DEBRIS_SUPPORTED'.
/**
  * Debris warning. This flag is optional
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_DEBRIS_SUPPORTED = 262144ul
};

/// Constant 'FLAG_DEBRIS_DETECTED'.
/**
  * Detection of debris warning
 */
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__FLAG_DEBRIS_DETECTED = 524288ul
};

/// Constant 'SPARK_PLUG_SINGLE'.
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__SPARK_PLUG_SINGLE = 0
};

/// Constant 'SPARK_PLUG_FIRST_ACTIVE'.
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__SPARK_PLUG_FIRST_ACTIVE = 1
};

/// Constant 'SPARK_PLUG_SECOND_ACTIVE'.
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__SPARK_PLUG_SECOND_ACTIVE = 2
};

/// Constant 'SPARK_PLUG_BOTH_ACTIVE'.
enum
{
  px4_msgs__msg__InternalCombustionEngineStatus__SPARK_PLUG_BOTH_ACTIVE = 3
};

/// Struct defined in msg/InternalCombustionEngineStatus in the package px4_msgs.
typedef struct px4_msgs__msg__InternalCombustionEngineStatus
{
  /// Time since system start
  uint64_t timestamp;
  /// Engine state
  uint8_t state;
  /// Engine substate
  uint8_t substate;
  /// Engine status flags bitmap
  uint32_t flags;
  /// [@range 0, 127] Engine load estimate
  uint8_t engine_load_percent;
  /// [@range 0, inf] Engine speed
  uint32_t engine_speed_rpm;
  /// [@range 0, inf] Spark dwell time
  float spark_dwell_time_ms;
  /// [@range 0, inf] Atmospheric (barometric) pressure
  float atmospheric_pressure_kpa;
  /// [@range 0, inf] Engine intake manifold pressure
  float intake_manifold_pressure_kpa;
  /// [@range 0, inf] Engine intake manifold temperature
  float intake_manifold_temperature;
  /// [@range 0, inf] Engine coolant temperature
  float coolant_temperature;
  /// [@range 0, inf] Oil pressure
  float oil_pressure;
  /// [@range 0, inf] Oil temperature
  float oil_temperature;
  /// [@range 0, inf] Fuel pressure
  float fuel_pressure;
  /// [@range 0, inf] Instant fuel consumption estimate
  float fuel_consumption_rate_cm3pm;
  /// [@range 0, inf] Estimate of the consumed fuel since the start of the engine
  float estimated_consumed_fuel_volume_cm3;
  /// [@range 0, 100] Throttle position
  uint8_t throttle_position_percent;
  /// [@range 0, 255] The index of the publishing ECU
  uint8_t ecu_index;
  /// Spark plug activity report
  uint8_t spark_plug_usage;
  /// [@range -inf, inf] Cylinder ignition timing, angular degrees of the crankshaft
  float ignition_timing_deg;
  /// [@range 0, inf] Fuel injection time
  float injection_time_ms;
  /// [@range 0, inf] Cylinder head temperature (CHT)
  float cylinder_head_temperature;
  /// [@range 0, inf] Exhaust gas temperature (EGT)
  float exhaust_gas_temperature;
  /// [@range 0, inf] Estimated lambda coefficient, dimensionless ratio
  float lambda_coefficient;
  /// [@range -1, 1] Integral of the PID for the closed loop idle RPM controller
  float pid_idle_rpm_integral;
} px4_msgs__msg__InternalCombustionEngineStatus;

// Struct for a sequence of px4_msgs__msg__InternalCombustionEngineStatus.
typedef struct px4_msgs__msg__InternalCombustionEngineStatus__Sequence
{
  px4_msgs__msg__InternalCombustionEngineStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__InternalCombustionEngineStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_STATUS__STRUCT_H_
