// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ctd_interfaces:msg/CtdMeasurement.idl
// generated code does not contain a copyright notice

#ifndef CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__STRUCT_H_
#define CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sensor_id'
// Member 'raw_line'
#include "rosidl_runtime_c/string.h"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/CtdMeasurement in the package ctd_interfaces.
typedef struct ctd_interfaces__msg__CtdMeasurement
{
  rosidl_runtime_c__String sensor_id;
  builtin_interfaces__msg__Time stamp;
  float temperature;
  float conductivity;
  float pressure;
  float turbidity;
  bool valid;
  rosidl_runtime_c__String raw_line;
} ctd_interfaces__msg__CtdMeasurement;

// Struct for a sequence of ctd_interfaces__msg__CtdMeasurement.
typedef struct ctd_interfaces__msg__CtdMeasurement__Sequence
{
  ctd_interfaces__msg__CtdMeasurement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ctd_interfaces__msg__CtdMeasurement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__STRUCT_H_
