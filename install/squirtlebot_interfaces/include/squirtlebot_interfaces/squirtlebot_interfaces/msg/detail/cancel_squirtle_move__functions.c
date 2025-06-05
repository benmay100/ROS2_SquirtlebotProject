// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from squirtlebot_interfaces:msg/CancelSquirtleMove.idl
// generated code does not contain a copyright notice
#include "squirtlebot_interfaces/msg/detail/cancel_squirtle_move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
squirtlebot_interfaces__msg__CancelSquirtleMove__init(squirtlebot_interfaces__msg__CancelSquirtleMove * msg)
{
  if (!msg) {
    return false;
  }
  // cancel_move
  return true;
}

void
squirtlebot_interfaces__msg__CancelSquirtleMove__fini(squirtlebot_interfaces__msg__CancelSquirtleMove * msg)
{
  if (!msg) {
    return;
  }
  // cancel_move
}

bool
squirtlebot_interfaces__msg__CancelSquirtleMove__are_equal(const squirtlebot_interfaces__msg__CancelSquirtleMove * lhs, const squirtlebot_interfaces__msg__CancelSquirtleMove * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cancel_move
  if (lhs->cancel_move != rhs->cancel_move) {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__msg__CancelSquirtleMove__copy(
  const squirtlebot_interfaces__msg__CancelSquirtleMove * input,
  squirtlebot_interfaces__msg__CancelSquirtleMove * output)
{
  if (!input || !output) {
    return false;
  }
  // cancel_move
  output->cancel_move = input->cancel_move;
  return true;
}

squirtlebot_interfaces__msg__CancelSquirtleMove *
squirtlebot_interfaces__msg__CancelSquirtleMove__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__msg__CancelSquirtleMove * msg = (squirtlebot_interfaces__msg__CancelSquirtleMove *)allocator.allocate(sizeof(squirtlebot_interfaces__msg__CancelSquirtleMove), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__msg__CancelSquirtleMove));
  bool success = squirtlebot_interfaces__msg__CancelSquirtleMove__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__msg__CancelSquirtleMove__destroy(squirtlebot_interfaces__msg__CancelSquirtleMove * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__msg__CancelSquirtleMove__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence__init(squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__msg__CancelSquirtleMove * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__msg__CancelSquirtleMove *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__msg__CancelSquirtleMove), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__msg__CancelSquirtleMove__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__msg__CancelSquirtleMove__fini(&data[i - 1]);
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
squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence__fini(squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence * array)
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
      squirtlebot_interfaces__msg__CancelSquirtleMove__fini(&array->data[i]);
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

squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence *
squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence * array = (squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence__destroy(squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence__are_equal(const squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence * lhs, const squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__msg__CancelSquirtleMove__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence__copy(
  const squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence * input,
  squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__msg__CancelSquirtleMove);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__msg__CancelSquirtleMove * data =
      (squirtlebot_interfaces__msg__CancelSquirtleMove *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__msg__CancelSquirtleMove__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__msg__CancelSquirtleMove__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__msg__CancelSquirtleMove__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
