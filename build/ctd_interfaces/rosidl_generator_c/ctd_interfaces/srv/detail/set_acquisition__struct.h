// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ctd_interfaces:srv/SetAcquisition.idl
// generated code does not contain a copyright notice

#ifndef CTD_INTERFACES__SRV__DETAIL__SET_ACQUISITION__STRUCT_H_
#define CTD_INTERFACES__SRV__DETAIL__SET_ACQUISITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetAcquisition in the package ctd_interfaces.
typedef struct ctd_interfaces__srv__SetAcquisition_Request
{
  rosidl_runtime_c__String target;
  bool enable;
} ctd_interfaces__srv__SetAcquisition_Request;

// Struct for a sequence of ctd_interfaces__srv__SetAcquisition_Request.
typedef struct ctd_interfaces__srv__SetAcquisition_Request__Sequence
{
  ctd_interfaces__srv__SetAcquisition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ctd_interfaces__srv__SetAcquisition_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetAcquisition in the package ctd_interfaces.
typedef struct ctd_interfaces__srv__SetAcquisition_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ctd_interfaces__srv__SetAcquisition_Response;

// Struct for a sequence of ctd_interfaces__srv__SetAcquisition_Response.
typedef struct ctd_interfaces__srv__SetAcquisition_Response__Sequence
{
  ctd_interfaces__srv__SetAcquisition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ctd_interfaces__srv__SetAcquisition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CTD_INTERFACES__SRV__DETAIL__SET_ACQUISITION__STRUCT_H_
