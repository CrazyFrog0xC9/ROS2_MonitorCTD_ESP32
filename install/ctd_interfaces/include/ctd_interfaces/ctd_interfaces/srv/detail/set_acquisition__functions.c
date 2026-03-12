// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ctd_interfaces:srv/SetAcquisition.idl
// generated code does not contain a copyright notice
#include "ctd_interfaces/srv/detail/set_acquisition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `target`
#include "rosidl_runtime_c/string_functions.h"

bool
ctd_interfaces__srv__SetAcquisition_Request__init(ctd_interfaces__srv__SetAcquisition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target
  if (!rosidl_runtime_c__String__init(&msg->target)) {
    ctd_interfaces__srv__SetAcquisition_Request__fini(msg);
    return false;
  }
  // enable
  return true;
}

void
ctd_interfaces__srv__SetAcquisition_Request__fini(ctd_interfaces__srv__SetAcquisition_Request * msg)
{
  if (!msg) {
    return;
  }
  // target
  rosidl_runtime_c__String__fini(&msg->target);
  // enable
}

bool
ctd_interfaces__srv__SetAcquisition_Request__are_equal(const ctd_interfaces__srv__SetAcquisition_Request * lhs, const ctd_interfaces__srv__SetAcquisition_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  return true;
}

bool
ctd_interfaces__srv__SetAcquisition_Request__copy(
  const ctd_interfaces__srv__SetAcquisition_Request * input,
  ctd_interfaces__srv__SetAcquisition_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  if (!rosidl_runtime_c__String__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  // enable
  output->enable = input->enable;
  return true;
}

ctd_interfaces__srv__SetAcquisition_Request *
ctd_interfaces__srv__SetAcquisition_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ctd_interfaces__srv__SetAcquisition_Request * msg = (ctd_interfaces__srv__SetAcquisition_Request *)allocator.allocate(sizeof(ctd_interfaces__srv__SetAcquisition_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ctd_interfaces__srv__SetAcquisition_Request));
  bool success = ctd_interfaces__srv__SetAcquisition_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ctd_interfaces__srv__SetAcquisition_Request__destroy(ctd_interfaces__srv__SetAcquisition_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ctd_interfaces__srv__SetAcquisition_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ctd_interfaces__srv__SetAcquisition_Request__Sequence__init(ctd_interfaces__srv__SetAcquisition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ctd_interfaces__srv__SetAcquisition_Request * data = NULL;

  if (size) {
    data = (ctd_interfaces__srv__SetAcquisition_Request *)allocator.zero_allocate(size, sizeof(ctd_interfaces__srv__SetAcquisition_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ctd_interfaces__srv__SetAcquisition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ctd_interfaces__srv__SetAcquisition_Request__fini(&data[i - 1]);
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
ctd_interfaces__srv__SetAcquisition_Request__Sequence__fini(ctd_interfaces__srv__SetAcquisition_Request__Sequence * array)
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
      ctd_interfaces__srv__SetAcquisition_Request__fini(&array->data[i]);
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

ctd_interfaces__srv__SetAcquisition_Request__Sequence *
ctd_interfaces__srv__SetAcquisition_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ctd_interfaces__srv__SetAcquisition_Request__Sequence * array = (ctd_interfaces__srv__SetAcquisition_Request__Sequence *)allocator.allocate(sizeof(ctd_interfaces__srv__SetAcquisition_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ctd_interfaces__srv__SetAcquisition_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ctd_interfaces__srv__SetAcquisition_Request__Sequence__destroy(ctd_interfaces__srv__SetAcquisition_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ctd_interfaces__srv__SetAcquisition_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ctd_interfaces__srv__SetAcquisition_Request__Sequence__are_equal(const ctd_interfaces__srv__SetAcquisition_Request__Sequence * lhs, const ctd_interfaces__srv__SetAcquisition_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ctd_interfaces__srv__SetAcquisition_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ctd_interfaces__srv__SetAcquisition_Request__Sequence__copy(
  const ctd_interfaces__srv__SetAcquisition_Request__Sequence * input,
  ctd_interfaces__srv__SetAcquisition_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ctd_interfaces__srv__SetAcquisition_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ctd_interfaces__srv__SetAcquisition_Request * data =
      (ctd_interfaces__srv__SetAcquisition_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ctd_interfaces__srv__SetAcquisition_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ctd_interfaces__srv__SetAcquisition_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ctd_interfaces__srv__SetAcquisition_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ctd_interfaces__srv__SetAcquisition_Response__init(ctd_interfaces__srv__SetAcquisition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    ctd_interfaces__srv__SetAcquisition_Response__fini(msg);
    return false;
  }
  return true;
}

void
ctd_interfaces__srv__SetAcquisition_Response__fini(ctd_interfaces__srv__SetAcquisition_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
ctd_interfaces__srv__SetAcquisition_Response__are_equal(const ctd_interfaces__srv__SetAcquisition_Response * lhs, const ctd_interfaces__srv__SetAcquisition_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
ctd_interfaces__srv__SetAcquisition_Response__copy(
  const ctd_interfaces__srv__SetAcquisition_Response * input,
  ctd_interfaces__srv__SetAcquisition_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

ctd_interfaces__srv__SetAcquisition_Response *
ctd_interfaces__srv__SetAcquisition_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ctd_interfaces__srv__SetAcquisition_Response * msg = (ctd_interfaces__srv__SetAcquisition_Response *)allocator.allocate(sizeof(ctd_interfaces__srv__SetAcquisition_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ctd_interfaces__srv__SetAcquisition_Response));
  bool success = ctd_interfaces__srv__SetAcquisition_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ctd_interfaces__srv__SetAcquisition_Response__destroy(ctd_interfaces__srv__SetAcquisition_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ctd_interfaces__srv__SetAcquisition_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ctd_interfaces__srv__SetAcquisition_Response__Sequence__init(ctd_interfaces__srv__SetAcquisition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ctd_interfaces__srv__SetAcquisition_Response * data = NULL;

  if (size) {
    data = (ctd_interfaces__srv__SetAcquisition_Response *)allocator.zero_allocate(size, sizeof(ctd_interfaces__srv__SetAcquisition_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ctd_interfaces__srv__SetAcquisition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ctd_interfaces__srv__SetAcquisition_Response__fini(&data[i - 1]);
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
ctd_interfaces__srv__SetAcquisition_Response__Sequence__fini(ctd_interfaces__srv__SetAcquisition_Response__Sequence * array)
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
      ctd_interfaces__srv__SetAcquisition_Response__fini(&array->data[i]);
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

ctd_interfaces__srv__SetAcquisition_Response__Sequence *
ctd_interfaces__srv__SetAcquisition_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ctd_interfaces__srv__SetAcquisition_Response__Sequence * array = (ctd_interfaces__srv__SetAcquisition_Response__Sequence *)allocator.allocate(sizeof(ctd_interfaces__srv__SetAcquisition_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ctd_interfaces__srv__SetAcquisition_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ctd_interfaces__srv__SetAcquisition_Response__Sequence__destroy(ctd_interfaces__srv__SetAcquisition_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ctd_interfaces__srv__SetAcquisition_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ctd_interfaces__srv__SetAcquisition_Response__Sequence__are_equal(const ctd_interfaces__srv__SetAcquisition_Response__Sequence * lhs, const ctd_interfaces__srv__SetAcquisition_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ctd_interfaces__srv__SetAcquisition_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ctd_interfaces__srv__SetAcquisition_Response__Sequence__copy(
  const ctd_interfaces__srv__SetAcquisition_Response__Sequence * input,
  ctd_interfaces__srv__SetAcquisition_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ctd_interfaces__srv__SetAcquisition_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ctd_interfaces__srv__SetAcquisition_Response * data =
      (ctd_interfaces__srv__SetAcquisition_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ctd_interfaces__srv__SetAcquisition_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ctd_interfaces__srv__SetAcquisition_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ctd_interfaces__srv__SetAcquisition_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
