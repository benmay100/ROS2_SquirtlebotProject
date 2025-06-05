// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from squirtlebot_interfaces:msg/KillSpawnSquirtle.idl
// generated code does not contain a copyright notice
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `kill_or_spawn`
#include "rosidl_runtime_c/string_functions.h"

bool
squirtlebot_interfaces__msg__KillSpawnSquirtle__init(squirtlebot_interfaces__msg__KillSpawnSquirtle * msg)
{
  if (!msg) {
    return false;
  }
  // kill_or_spawn
  if (!rosidl_runtime_c__String__init(&msg->kill_or_spawn)) {
    squirtlebot_interfaces__msg__KillSpawnSquirtle__fini(msg);
    return false;
  }
  return true;
}

void
squirtlebot_interfaces__msg__KillSpawnSquirtle__fini(squirtlebot_interfaces__msg__KillSpawnSquirtle * msg)
{
  if (!msg) {
    return;
  }
  // kill_or_spawn
  rosidl_runtime_c__String__fini(&msg->kill_or_spawn);
}

bool
squirtlebot_interfaces__msg__KillSpawnSquirtle__are_equal(const squirtlebot_interfaces__msg__KillSpawnSquirtle * lhs, const squirtlebot_interfaces__msg__KillSpawnSquirtle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kill_or_spawn
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->kill_or_spawn), &(rhs->kill_or_spawn)))
  {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__msg__KillSpawnSquirtle__copy(
  const squirtlebot_interfaces__msg__KillSpawnSquirtle * input,
  squirtlebot_interfaces__msg__KillSpawnSquirtle * output)
{
  if (!input || !output) {
    return false;
  }
  // kill_or_spawn
  if (!rosidl_runtime_c__String__copy(
      &(input->kill_or_spawn), &(output->kill_or_spawn)))
  {
    return false;
  }
  return true;
}

squirtlebot_interfaces__msg__KillSpawnSquirtle *
squirtlebot_interfaces__msg__KillSpawnSquirtle__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__msg__KillSpawnSquirtle * msg = (squirtlebot_interfaces__msg__KillSpawnSquirtle *)allocator.allocate(sizeof(squirtlebot_interfaces__msg__KillSpawnSquirtle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__msg__KillSpawnSquirtle));
  bool success = squirtlebot_interfaces__msg__KillSpawnSquirtle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__msg__KillSpawnSquirtle__destroy(squirtlebot_interfaces__msg__KillSpawnSquirtle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__msg__KillSpawnSquirtle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence__init(squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__msg__KillSpawnSquirtle * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__msg__KillSpawnSquirtle *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__msg__KillSpawnSquirtle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__msg__KillSpawnSquirtle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__msg__KillSpawnSquirtle__fini(&data[i - 1]);
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
squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence__fini(squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence * array)
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
      squirtlebot_interfaces__msg__KillSpawnSquirtle__fini(&array->data[i]);
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

squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence *
squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence * array = (squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence__destroy(squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence__are_equal(const squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence * lhs, const squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__msg__KillSpawnSquirtle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence__copy(
  const squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence * input,
  squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__msg__KillSpawnSquirtle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__msg__KillSpawnSquirtle * data =
      (squirtlebot_interfaces__msg__KillSpawnSquirtle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__msg__KillSpawnSquirtle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__msg__KillSpawnSquirtle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__msg__KillSpawnSquirtle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
