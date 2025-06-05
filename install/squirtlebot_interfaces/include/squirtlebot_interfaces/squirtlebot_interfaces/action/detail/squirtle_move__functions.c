// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from squirtlebot_interfaces:action/SquirtleMove.idl
// generated code does not contain a copyright notice
#include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
squirtlebot_interfaces__action__SquirtleMove_Goal__init(squirtlebot_interfaces__action__SquirtleMove_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // linear_x
  // angular_z
  // duration
  return true;
}

void
squirtlebot_interfaces__action__SquirtleMove_Goal__fini(squirtlebot_interfaces__action__SquirtleMove_Goal * msg)
{
  if (!msg) {
    return;
  }
  // linear_x
  // angular_z
  // duration
}

bool
squirtlebot_interfaces__action__SquirtleMove_Goal__are_equal(const squirtlebot_interfaces__action__SquirtleMove_Goal * lhs, const squirtlebot_interfaces__action__SquirtleMove_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear_x
  if (lhs->linear_x != rhs->linear_x) {
    return false;
  }
  // angular_z
  if (lhs->angular_z != rhs->angular_z) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_Goal__copy(
  const squirtlebot_interfaces__action__SquirtleMove_Goal * input,
  squirtlebot_interfaces__action__SquirtleMove_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // linear_x
  output->linear_x = input->linear_x;
  // angular_z
  output->angular_z = input->angular_z;
  // duration
  output->duration = input->duration;
  return true;
}

squirtlebot_interfaces__action__SquirtleMove_Goal *
squirtlebot_interfaces__action__SquirtleMove_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_Goal * msg = (squirtlebot_interfaces__action__SquirtleMove_Goal *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__action__SquirtleMove_Goal));
  bool success = squirtlebot_interfaces__action__SquirtleMove_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__action__SquirtleMove_Goal__destroy(squirtlebot_interfaces__action__SquirtleMove_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__action__SquirtleMove_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence__init(squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_Goal * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__action__SquirtleMove_Goal *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__action__SquirtleMove_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__action__SquirtleMove_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__action__SquirtleMove_Goal__fini(&data[i - 1]);
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
squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence__fini(squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence * array)
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
      squirtlebot_interfaces__action__SquirtleMove_Goal__fini(&array->data[i]);
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

squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence *
squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence * array = (squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence__destroy(squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence__are_equal(const squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence * lhs, const squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence__copy(
  const squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence * input,
  squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__action__SquirtleMove_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__action__SquirtleMove_Goal * data =
      (squirtlebot_interfaces__action__SquirtleMove_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__action__SquirtleMove_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__action__SquirtleMove_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result_message`
#include "rosidl_runtime_c/string_functions.h"

bool
squirtlebot_interfaces__action__SquirtleMove_Result__init(squirtlebot_interfaces__action__SquirtleMove_Result * msg)
{
  if (!msg) {
    return false;
  }
  // final_position_x
  // final_position_y
  // final_theta_angle
  // result_message
  if (!rosidl_runtime_c__String__init(&msg->result_message)) {
    squirtlebot_interfaces__action__SquirtleMove_Result__fini(msg);
    return false;
  }
  return true;
}

void
squirtlebot_interfaces__action__SquirtleMove_Result__fini(squirtlebot_interfaces__action__SquirtleMove_Result * msg)
{
  if (!msg) {
    return;
  }
  // final_position_x
  // final_position_y
  // final_theta_angle
  // result_message
  rosidl_runtime_c__String__fini(&msg->result_message);
}

bool
squirtlebot_interfaces__action__SquirtleMove_Result__are_equal(const squirtlebot_interfaces__action__SquirtleMove_Result * lhs, const squirtlebot_interfaces__action__SquirtleMove_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // final_position_x
  if (lhs->final_position_x != rhs->final_position_x) {
    return false;
  }
  // final_position_y
  if (lhs->final_position_y != rhs->final_position_y) {
    return false;
  }
  // final_theta_angle
  if (lhs->final_theta_angle != rhs->final_theta_angle) {
    return false;
  }
  // result_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_message), &(rhs->result_message)))
  {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_Result__copy(
  const squirtlebot_interfaces__action__SquirtleMove_Result * input,
  squirtlebot_interfaces__action__SquirtleMove_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // final_position_x
  output->final_position_x = input->final_position_x;
  // final_position_y
  output->final_position_y = input->final_position_y;
  // final_theta_angle
  output->final_theta_angle = input->final_theta_angle;
  // result_message
  if (!rosidl_runtime_c__String__copy(
      &(input->result_message), &(output->result_message)))
  {
    return false;
  }
  return true;
}

squirtlebot_interfaces__action__SquirtleMove_Result *
squirtlebot_interfaces__action__SquirtleMove_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_Result * msg = (squirtlebot_interfaces__action__SquirtleMove_Result *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__action__SquirtleMove_Result));
  bool success = squirtlebot_interfaces__action__SquirtleMove_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__action__SquirtleMove_Result__destroy(squirtlebot_interfaces__action__SquirtleMove_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__action__SquirtleMove_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__action__SquirtleMove_Result__Sequence__init(squirtlebot_interfaces__action__SquirtleMove_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_Result * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__action__SquirtleMove_Result *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__action__SquirtleMove_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__action__SquirtleMove_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__action__SquirtleMove_Result__fini(&data[i - 1]);
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
squirtlebot_interfaces__action__SquirtleMove_Result__Sequence__fini(squirtlebot_interfaces__action__SquirtleMove_Result__Sequence * array)
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
      squirtlebot_interfaces__action__SquirtleMove_Result__fini(&array->data[i]);
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

squirtlebot_interfaces__action__SquirtleMove_Result__Sequence *
squirtlebot_interfaces__action__SquirtleMove_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_Result__Sequence * array = (squirtlebot_interfaces__action__SquirtleMove_Result__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__action__SquirtleMove_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__action__SquirtleMove_Result__Sequence__destroy(squirtlebot_interfaces__action__SquirtleMove_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__action__SquirtleMove_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__action__SquirtleMove_Result__Sequence__are_equal(const squirtlebot_interfaces__action__SquirtleMove_Result__Sequence * lhs, const squirtlebot_interfaces__action__SquirtleMove_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_Result__Sequence__copy(
  const squirtlebot_interfaces__action__SquirtleMove_Result__Sequence * input,
  squirtlebot_interfaces__action__SquirtleMove_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__action__SquirtleMove_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__action__SquirtleMove_Result * data =
      (squirtlebot_interfaces__action__SquirtleMove_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__action__SquirtleMove_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__action__SquirtleMove_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
squirtlebot_interfaces__action__SquirtleMove_Feedback__init(squirtlebot_interfaces__action__SquirtleMove_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_position_x
  // current_position_y
  // current_theta_angle
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    squirtlebot_interfaces__action__SquirtleMove_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
squirtlebot_interfaces__action__SquirtleMove_Feedback__fini(squirtlebot_interfaces__action__SquirtleMove_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_position_x
  // current_position_y
  // current_theta_angle
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
squirtlebot_interfaces__action__SquirtleMove_Feedback__are_equal(const squirtlebot_interfaces__action__SquirtleMove_Feedback * lhs, const squirtlebot_interfaces__action__SquirtleMove_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_position_x
  if (lhs->current_position_x != rhs->current_position_x) {
    return false;
  }
  // current_position_y
  if (lhs->current_position_y != rhs->current_position_y) {
    return false;
  }
  // current_theta_angle
  if (lhs->current_theta_angle != rhs->current_theta_angle) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_Feedback__copy(
  const squirtlebot_interfaces__action__SquirtleMove_Feedback * input,
  squirtlebot_interfaces__action__SquirtleMove_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_position_x
  output->current_position_x = input->current_position_x;
  // current_position_y
  output->current_position_y = input->current_position_y;
  // current_theta_angle
  output->current_theta_angle = input->current_theta_angle;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

squirtlebot_interfaces__action__SquirtleMove_Feedback *
squirtlebot_interfaces__action__SquirtleMove_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_Feedback * msg = (squirtlebot_interfaces__action__SquirtleMove_Feedback *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__action__SquirtleMove_Feedback));
  bool success = squirtlebot_interfaces__action__SquirtleMove_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__action__SquirtleMove_Feedback__destroy(squirtlebot_interfaces__action__SquirtleMove_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__action__SquirtleMove_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence__init(squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_Feedback * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__action__SquirtleMove_Feedback *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__action__SquirtleMove_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__action__SquirtleMove_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__action__SquirtleMove_Feedback__fini(&data[i - 1]);
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
squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence__fini(squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence * array)
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
      squirtlebot_interfaces__action__SquirtleMove_Feedback__fini(&array->data[i]);
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

squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence *
squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence * array = (squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence__destroy(squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence__are_equal(const squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence * lhs, const squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence__copy(
  const squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence * input,
  squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__action__SquirtleMove_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__action__SquirtleMove_Feedback * data =
      (squirtlebot_interfaces__action__SquirtleMove_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__action__SquirtleMove_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__action__SquirtleMove_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__init(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!squirtlebot_interfaces__action__SquirtleMove_Goal__init(&msg->goal)) {
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__fini(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  squirtlebot_interfaces__action__SquirtleMove_Goal__fini(&msg->goal);
}

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__are_equal(const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request * lhs, const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!squirtlebot_interfaces__action__SquirtleMove_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__copy(
  const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request * input,
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!squirtlebot_interfaces__action__SquirtleMove_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request *
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request * msg = (squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request));
  bool success = squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__destroy(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence__init(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__fini(&data[i - 1]);
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
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence__fini(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence * array)
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
      squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__fini(&array->data[i]);
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

squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence *
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence * array = (squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence__destroy(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence__are_equal(const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence * lhs, const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence__copy(
  const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence * input,
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request * data =
      (squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__init(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__fini(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__are_equal(const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response * lhs, const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__copy(
  const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response * input,
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response *
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response * msg = (squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response));
  bool success = squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__destroy(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence__init(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__fini(&data[i - 1]);
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
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence__fini(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence * array)
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
      squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__fini(&array->data[i]);
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

squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence *
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence * array = (squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence__destroy(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence__are_equal(const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence * lhs, const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence__copy(
  const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence * input,
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response * data =
      (squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__init(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__fini(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__are_equal(const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event * lhs, const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__copy(
  const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event * input,
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event *
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event * msg = (squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event));
  bool success = squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__destroy(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence__init(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__fini(&data[i - 1]);
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
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence__fini(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence * array)
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
      squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__fini(&array->data[i]);
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

squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence *
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence * array = (squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence__destroy(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence__are_equal(const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence * lhs, const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence__copy(
  const squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence * input,
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event * data =
      (squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__init(squirtlebot_interfaces__action__SquirtleMove_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__fini(squirtlebot_interfaces__action__SquirtleMove_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__are_equal(const squirtlebot_interfaces__action__SquirtleMove_GetResult_Request * lhs, const squirtlebot_interfaces__action__SquirtleMove_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__copy(
  const squirtlebot_interfaces__action__SquirtleMove_GetResult_Request * input,
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

squirtlebot_interfaces__action__SquirtleMove_GetResult_Request *
squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Request * msg = (squirtlebot_interfaces__action__SquirtleMove_GetResult_Request *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Request));
  bool success = squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__destroy(squirtlebot_interfaces__action__SquirtleMove_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence__init(squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Request * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__action__SquirtleMove_GetResult_Request *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__fini(&data[i - 1]);
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
squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence__fini(squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence * array)
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
      squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__fini(&array->data[i]);
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

squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence *
squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence * array = (squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence__destroy(squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence__are_equal(const squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence * lhs, const squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence__copy(
  const squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence * input,
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__action__SquirtleMove_GetResult_Request * data =
      (squirtlebot_interfaces__action__SquirtleMove_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__init(squirtlebot_interfaces__action__SquirtleMove_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!squirtlebot_interfaces__action__SquirtleMove_Result__init(&msg->result)) {
    squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__fini(squirtlebot_interfaces__action__SquirtleMove_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  squirtlebot_interfaces__action__SquirtleMove_Result__fini(&msg->result);
}

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__are_equal(const squirtlebot_interfaces__action__SquirtleMove_GetResult_Response * lhs, const squirtlebot_interfaces__action__SquirtleMove_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!squirtlebot_interfaces__action__SquirtleMove_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__copy(
  const squirtlebot_interfaces__action__SquirtleMove_GetResult_Response * input,
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!squirtlebot_interfaces__action__SquirtleMove_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

squirtlebot_interfaces__action__SquirtleMove_GetResult_Response *
squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Response * msg = (squirtlebot_interfaces__action__SquirtleMove_GetResult_Response *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Response));
  bool success = squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__destroy(squirtlebot_interfaces__action__SquirtleMove_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence__init(squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Response * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__action__SquirtleMove_GetResult_Response *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__fini(&data[i - 1]);
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
squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence__fini(squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence * array)
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
      squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__fini(&array->data[i]);
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

squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence *
squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence * array = (squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence__destroy(squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence__are_equal(const squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence * lhs, const squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence__copy(
  const squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence * input,
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__action__SquirtleMove_GetResult_Response * data =
      (squirtlebot_interfaces__action__SquirtleMove_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__init(squirtlebot_interfaces__action__SquirtleMove_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence__init(&msg->request, 0)) {
    squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence__init(&msg->response, 0)) {
    squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__fini(squirtlebot_interfaces__action__SquirtleMove_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence__fini(&msg->request);
  // response
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence__fini(&msg->response);
}

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__are_equal(const squirtlebot_interfaces__action__SquirtleMove_GetResult_Event * lhs, const squirtlebot_interfaces__action__SquirtleMove_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__copy(
  const squirtlebot_interfaces__action__SquirtleMove_GetResult_Event * input,
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

squirtlebot_interfaces__action__SquirtleMove_GetResult_Event *
squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Event * msg = (squirtlebot_interfaces__action__SquirtleMove_GetResult_Event *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Event));
  bool success = squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__destroy(squirtlebot_interfaces__action__SquirtleMove_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence__init(squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Event * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__action__SquirtleMove_GetResult_Event *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__fini(&data[i - 1]);
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
squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence__fini(squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence * array)
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
      squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__fini(&array->data[i]);
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

squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence *
squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence * array = (squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence__destroy(squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence__are_equal(const squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence * lhs, const squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence__copy(
  const squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence * input,
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__action__SquirtleMove_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__action__SquirtleMove_GetResult_Event * data =
      (squirtlebot_interfaces__action__SquirtleMove_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"

bool
squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__init(squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!squirtlebot_interfaces__action__SquirtleMove_Feedback__init(&msg->feedback)) {
    squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__fini(squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  squirtlebot_interfaces__action__SquirtleMove_Feedback__fini(&msg->feedback);
}

bool
squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__are_equal(const squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage * lhs, const squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!squirtlebot_interfaces__action__SquirtleMove_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__copy(
  const squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage * input,
  squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!squirtlebot_interfaces__action__SquirtleMove_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage *
squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage * msg = (squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage));
  bool success = squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__destroy(squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence__init(squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__fini(&data[i - 1]);
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
squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence__fini(squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence * array)
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
      squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__fini(&array->data[i]);
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

squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence *
squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence * array = (squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence__destroy(squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence__are_equal(const squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence * lhs, const squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence__copy(
  const squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence * input,
  squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage * data =
      (squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
