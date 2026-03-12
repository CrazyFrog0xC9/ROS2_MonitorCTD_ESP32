// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ctd_interfaces:msg/CtdMeasurement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ctd_interfaces/msg/detail/ctd_measurement__rosidl_typesupport_introspection_c.h"
#include "ctd_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ctd_interfaces/msg/detail/ctd_measurement__functions.h"
#include "ctd_interfaces/msg/detail/ctd_measurement__struct.h"


// Include directives for member types
// Member `sensor_id`
// Member `raw_line`
#include "rosidl_runtime_c/string_functions.h"
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ctd_interfaces__msg__CtdMeasurement__rosidl_typesupport_introspection_c__CtdMeasurement_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ctd_interfaces__msg__CtdMeasurement__init(message_memory);
}

void ctd_interfaces__msg__CtdMeasurement__rosidl_typesupport_introspection_c__CtdMeasurement_fini_function(void * message_memory)
{
  ctd_interfaces__msg__CtdMeasurement__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ctd_interfaces__msg__CtdMeasurement__rosidl_typesupport_introspection_c__CtdMeasurement_message_member_array[8] = {
  {
    "sensor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ctd_interfaces__msg__CtdMeasurement, sensor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ctd_interfaces__msg__CtdMeasurement, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ctd_interfaces__msg__CtdMeasurement, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "conductivity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ctd_interfaces__msg__CtdMeasurement, conductivity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pressure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ctd_interfaces__msg__CtdMeasurement, pressure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turbidity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ctd_interfaces__msg__CtdMeasurement, turbidity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ctd_interfaces__msg__CtdMeasurement, valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ctd_interfaces__msg__CtdMeasurement, raw_line),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ctd_interfaces__msg__CtdMeasurement__rosidl_typesupport_introspection_c__CtdMeasurement_message_members = {
  "ctd_interfaces__msg",  // message namespace
  "CtdMeasurement",  // message name
  8,  // number of fields
  sizeof(ctd_interfaces__msg__CtdMeasurement),
  ctd_interfaces__msg__CtdMeasurement__rosidl_typesupport_introspection_c__CtdMeasurement_message_member_array,  // message members
  ctd_interfaces__msg__CtdMeasurement__rosidl_typesupport_introspection_c__CtdMeasurement_init_function,  // function to initialize message memory (memory has to be allocated)
  ctd_interfaces__msg__CtdMeasurement__rosidl_typesupport_introspection_c__CtdMeasurement_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ctd_interfaces__msg__CtdMeasurement__rosidl_typesupport_introspection_c__CtdMeasurement_message_type_support_handle = {
  0,
  &ctd_interfaces__msg__CtdMeasurement__rosidl_typesupport_introspection_c__CtdMeasurement_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ctd_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ctd_interfaces, msg, CtdMeasurement)() {
  ctd_interfaces__msg__CtdMeasurement__rosidl_typesupport_introspection_c__CtdMeasurement_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ctd_interfaces__msg__CtdMeasurement__rosidl_typesupport_introspection_c__CtdMeasurement_message_type_support_handle.typesupport_identifier) {
    ctd_interfaces__msg__CtdMeasurement__rosidl_typesupport_introspection_c__CtdMeasurement_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ctd_interfaces__msg__CtdMeasurement__rosidl_typesupport_introspection_c__CtdMeasurement_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
