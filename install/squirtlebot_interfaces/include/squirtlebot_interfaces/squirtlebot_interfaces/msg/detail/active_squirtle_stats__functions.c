// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from squirtlebot_interfaces:msg/ActiveSquirtleStats.idl
// generated code does not contain a copyright notice
#include "squirtlebot_interfaces/msg/detail/active_squirtle_stats__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
squirtlebot_interfaces__msg__ActiveSquirtleStats__init(squirtlebot_interfaces__msg__ActiveSquirtleStats * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    squirtlebot_interfaces__msg__ActiveSquirtleStats__fini(msg);
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
squirtlebot_interfaces__msg__ActiveSquirtleStats__fini(squirtlebot_interfaces__msg__ActiveSquirtleStats * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // x
  // y
  // theta
}

bool
squirtlebot_interfaces__msg__ActiveSquirtleStats__are_equal(const squirtlebot_interfaces__msg__ActiveSquirtleStats * lhs, const squirtlebot_interfaces__msg__ActiveSquirtleStats * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__msg__ActiveSquirtleStats__copy(
  const squirtlebot_interfaces__msg__ActiveSquirtleStats * input,
  squirtlebot_interfaces__msg__ActiveSquirtleStats * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  return true;
}

squirtlebot_interfaces__msg__ActiveSquirtleStats *
squirtlebot_interfaces__msg__ActiveSquirtleStats__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__msg__ActiveSquirtleStats * msg = (squirtlebot_interfaces__msg__ActiveSquirtleStats *)allocator.allocate(sizeof(squirtlebot_interfaces__msg__ActiveSquirtleStats), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__msg__ActiveSquirtleStats));
  bool success = squirtlebot_interfaces__msg__ActiveSquirtleStats__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__msg__ActiveSquirtleStats__destroy(squirtlebot_interfaces__msg__ActiveSquirtleStats * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__msg__ActiveSquirtleStats__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence__init(squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__msg__ActiveSquirtleStats * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__msg__ActiveSquirtleStats *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__msg__ActiveSquirtleStats), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__msg__ActiveSquirtleStats__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__msg__ActiveSquirtleStats__fini(&data[i - 1]);
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
squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence__fini(squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence * array)
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
      squirtlebot_interfaces__msg__ActiveSquirtleStats__fini(&array->data[i]);
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

squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence *
squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence * array = (squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence__destroy(squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence__are_equal(const squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence * lhs, const squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__msg__ActiveSquirtleStats__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence__copy(
  const squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence * input,
  squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__msg__ActiveSquirtleStats);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__msg__ActiveSquirtleStats * data =
      (squirtlebot_interfaces__msg__ActiveSquirtleStats *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__msg__ActiveSquirtleStats__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__msg__ActiveSquirtleStats__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__msg__ActiveSquirtleStats__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
