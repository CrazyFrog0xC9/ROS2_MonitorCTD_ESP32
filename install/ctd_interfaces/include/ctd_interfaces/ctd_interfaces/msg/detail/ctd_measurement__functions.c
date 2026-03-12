// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ctd_interfaces:msg/CtdMeasurement.idl
// generated code does not contain a copyright notice
#include "ctd_interfaces/msg/detail/ctd_measurement__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sensor_id`
// Member `raw_line`
#include "rosidl_runtime_c/string_functions.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ctd_interfaces__msg__CtdMeasurement__init(ctd_interfaces__msg__CtdMeasurement * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_id
  if (!rosidl_runtime_c__String__init(&msg->sensor_id)) {
    ctd_interfaces__msg__CtdMeasurement__fini(msg);
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ctd_interfaces__msg__CtdMeasurement__fini(msg);
    return false;
  }
  // temperature
  // conductivity
  // pressure
  // turbidity
  // valid
  // raw_line
  if (!rosidl_runtime_c__String__init(&msg->raw_line)) {
    ctd_interfaces__msg__CtdMeasurement__fini(msg);
    return false;
  }
  return true;
}

void
ctd_interfaces__msg__CtdMeasurement__fini(ctd_interfaces__msg__CtdMeasurement * msg)
{
  if (!msg) {
    return;
  }
  // sensor_id
  rosidl_runtime_c__String__fini(&msg->sensor_id);
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // temperature
  // conductivity
  // pressure
  // turbidity
  // valid
  // raw_line
  rosidl_runtime_c__String__fini(&msg->raw_line);
}

bool
ctd_interfaces__msg__CtdMeasurement__are_equal(const ctd_interfaces__msg__CtdMeasurement * lhs, const ctd_interfaces__msg__CtdMeasurement * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensor_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sensor_id), &(rhs->sensor_id)))
  {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // conductivity
  if (lhs->conductivity != rhs->conductivity) {
    return false;
  }
  // pressure
  if (lhs->pressure != rhs->pressure) {
    return false;
  }
  // turbidity
  if (lhs->turbidity != rhs->turbidity) {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  // raw_line
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->raw_line), &(rhs->raw_line)))
  {
    return false;
  }
  return true;
}

bool
ctd_interfaces__msg__CtdMeasurement__copy(
  const ctd_interfaces__msg__CtdMeasurement * input,
  ctd_interfaces__msg__CtdMeasurement * output)
{
  if (!input || !output) {
    return false;
  }
  // sensor_id
  if (!rosidl_runtime_c__String__copy(
      &(input->sensor_id), &(output->sensor_id)))
  {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // temperature
  output->temperature = input->temperature;
  // conductivity
  output->conductivity = input->conductivity;
  // pressure
  output->pressure = input->pressure;
  // turbidity
  output->turbidity = input->turbidity;
  // valid
  output->valid = input->valid;
  // raw_line
  if (!rosidl_runtime_c__String__copy(
      &(input->raw_line), &(output->raw_line)))
  {
    return false;
  }
  return true;
}

ctd_interfaces__msg__CtdMeasurement *
ctd_interfaces__msg__CtdMeasurement__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ctd_interfaces__msg__CtdMeasurement * msg = (ctd_interfaces__msg__CtdMeasurement *)allocator.allocate(sizeof(ctd_interfaces__msg__CtdMeasurement), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ctd_interfaces__msg__CtdMeasurement));
  bool success = ctd_interfaces__msg__CtdMeasurement__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ctd_interfaces__msg__CtdMeasurement__destroy(ctd_interfaces__msg__CtdMeasurement * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ctd_interfaces__msg__CtdMeasurement__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ctd_interfaces__msg__CtdMeasurement__Sequence__init(ctd_interfaces__msg__CtdMeasurement__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ctd_interfaces__msg__CtdMeasurement * data = NULL;

  if (size) {
    data = (ctd_interfaces__msg__CtdMeasurement *)allocator.zero_allocate(size, sizeof(ctd_interfaces__msg__CtdMeasurement), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ctd_interfaces__msg__CtdMeasurement__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ctd_interfaces__msg__CtdMeasurement__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ctd_interfaces__msg__CtdMeasurement__Sequence__fini(ctd_interfaces__msg__CtdMeasurement__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ctd_interfaces__msg__CtdMeasurement__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ctd_interfaces__msg__CtdMeasurement__Sequence *
ctd_interfaces__msg__CtdMeasurement__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ctd_interfaces__msg__CtdMeasurement__Sequence * array = (ctd_interfaces__msg__CtdMeasurement__Sequence *)allocator.allocate(sizeof(ctd_interfaces__msg__CtdMeasurement__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ctd_interfaces__msg__CtdMeasurement__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ctd_interfaces__msg__CtdMeasurement__Sequence__destroy(ctd_interfaces__msg__CtdMeasurement__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ctd_interfaces__msg__CtdMeasurement__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ctd_interfaces__msg__CtdMeasurement__Sequence__are_equal(const ctd_interfaces__msg__CtdMeasurement__Sequence * lhs, const ctd_interfaces__msg__CtdMeasurement__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ctd_interfaces__msg__CtdMeasurement__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ctd_interfaces__msg__CtdMeasurement__Sequence__copy(
  const ctd_interfaces__msg__CtdMeasurement__Sequence * input,
  ctd_interfaces__msg__CtdMeasurement__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ctd_interfaces__msg__CtdMeasurement);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ctd_interfaces__msg__CtdMeasurement * data =
      (ctd_interfaces__msg__CtdMeasurement *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ctd_interfaces__msg__CtdMeasurement__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ctd_interfaces__msg__CtdMeasurement__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ctd_interfaces__msg__CtdMeasurement__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
