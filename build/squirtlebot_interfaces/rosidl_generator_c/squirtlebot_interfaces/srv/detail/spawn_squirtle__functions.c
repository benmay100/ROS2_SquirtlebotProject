// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from squirtlebot_interfaces:srv/SpawnSquirtle.idl
// generated code does not contain a copyright notice
#include "squirtlebot_interfaces/srv/detail/spawn_squirtle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
squirtlebot_interfaces__srv__SpawnSquirtle_Request__init(squirtlebot_interfaces__srv__SpawnSquirtle_Request * msg)
{
  if (!msg) {
    return false;
  }
  // spawn_new_squirtle
  // x
  msg->x = 5.54f;
  // y
  msg->y = 5.54f;
  // theta
  msg->theta = 0.0f;
  return true;
}

void
squirtlebot_interfaces__srv__SpawnSquirtle_Request__fini(squirtlebot_interfaces__srv__SpawnSquirtle_Request * msg)
{
  if (!msg) {
    return;
  }
  // spawn_new_squirtle
  // x
  // y
  // theta
}

bool
squirtlebot_interfaces__srv__SpawnSquirtle_Request__are_equal(const squirtlebot_interfaces__srv__SpawnSquirtle_Request * lhs, const squirtlebot_interfaces__srv__SpawnSquirtle_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // spawn_new_squirtle
  if (lhs->spawn_new_squirtle != rhs->spawn_new_squirtle) {
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
squirtlebot_interfaces__srv__SpawnSquirtle_Request__copy(
  const squirtlebot_interfaces__srv__SpawnSquirtle_Request * input,
  squirtlebot_interfaces__srv__SpawnSquirtle_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // spawn_new_squirtle
  output->spawn_new_squirtle = input->spawn_new_squirtle;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  return true;
}

squirtlebot_interfaces__srv__SpawnSquirtle_Request *
squirtlebot_interfaces__srv__SpawnSquirtle_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__SpawnSquirtle_Request * msg = (squirtlebot_interfaces__srv__SpawnSquirtle_Request *)allocator.allocate(sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Request));
  bool success = squirtlebot_interfaces__srv__SpawnSquirtle_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__srv__SpawnSquirtle_Request__destroy(squirtlebot_interfaces__srv__SpawnSquirtle_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__srv__SpawnSquirtle_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence__init(squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__SpawnSquirtle_Request * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__srv__SpawnSquirtle_Request *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__srv__SpawnSquirtle_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__srv__SpawnSquirtle_Request__fini(&data[i - 1]);
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
squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence__fini(squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence * array)
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
      squirtlebot_interfaces__srv__SpawnSquirtle_Request__fini(&array->data[i]);
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

squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence *
squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence * array = (squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence__destroy(squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence__are_equal(const squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence * lhs, const squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__srv__SpawnSquirtle_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence__copy(
  const squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence * input,
  squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__srv__SpawnSquirtle_Request * data =
      (squirtlebot_interfaces__srv__SpawnSquirtle_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__srv__SpawnSquirtle_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__srv__SpawnSquirtle_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__srv__SpawnSquirtle_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
squirtlebot_interfaces__srv__SpawnSquirtle_Response__init(squirtlebot_interfaces__srv__SpawnSquirtle_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
squirtlebot_interfaces__srv__SpawnSquirtle_Response__fini(squirtlebot_interfaces__srv__SpawnSquirtle_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
squirtlebot_interfaces__srv__SpawnSquirtle_Response__are_equal(const squirtlebot_interfaces__srv__SpawnSquirtle_Response * lhs, const squirtlebot_interfaces__srv__SpawnSquirtle_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__srv__SpawnSquirtle_Response__copy(
  const squirtlebot_interfaces__srv__SpawnSquirtle_Response * input,
  squirtlebot_interfaces__srv__SpawnSquirtle_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

squirtlebot_interfaces__srv__SpawnSquirtle_Response *
squirtlebot_interfaces__srv__SpawnSquirtle_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__SpawnSquirtle_Response * msg = (squirtlebot_interfaces__srv__SpawnSquirtle_Response *)allocator.allocate(sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Response));
  bool success = squirtlebot_interfaces__srv__SpawnSquirtle_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__srv__SpawnSquirtle_Response__destroy(squirtlebot_interfaces__srv__SpawnSquirtle_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__srv__SpawnSquirtle_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence__init(squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__SpawnSquirtle_Response * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__srv__SpawnSquirtle_Response *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__srv__SpawnSquirtle_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__srv__SpawnSquirtle_Response__fini(&data[i - 1]);
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
squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence__fini(squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence * array)
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
      squirtlebot_interfaces__srv__SpawnSquirtle_Response__fini(&array->data[i]);
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

squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence *
squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence * array = (squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence__destroy(squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence__are_equal(const squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence * lhs, const squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__srv__SpawnSquirtle_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence__copy(
  const squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence * input,
  squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__srv__SpawnSquirtle_Response * data =
      (squirtlebot_interfaces__srv__SpawnSquirtle_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__srv__SpawnSquirtle_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__srv__SpawnSquirtle_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__srv__SpawnSquirtle_Response__copy(
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
// #include "squirtlebot_interfaces/srv/detail/spawn_squirtle__functions.h"

bool
squirtlebot_interfaces__srv__SpawnSquirtle_Event__init(squirtlebot_interfaces__srv__SpawnSquirtle_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    squirtlebot_interfaces__srv__SpawnSquirtle_Event__fini(msg);
    return false;
  }
  // request
  if (!squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence__init(&msg->request, 0)) {
    squirtlebot_interfaces__srv__SpawnSquirtle_Event__fini(msg);
    return false;
  }
  // response
  if (!squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence__init(&msg->response, 0)) {
    squirtlebot_interfaces__srv__SpawnSquirtle_Event__fini(msg);
    return false;
  }
  return true;
}

void
squirtlebot_interfaces__srv__SpawnSquirtle_Event__fini(squirtlebot_interfaces__srv__SpawnSquirtle_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence__fini(&msg->request);
  // response
  squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence__fini(&msg->response);
}

bool
squirtlebot_interfaces__srv__SpawnSquirtle_Event__are_equal(const squirtlebot_interfaces__srv__SpawnSquirtle_Event * lhs, const squirtlebot_interfaces__srv__SpawnSquirtle_Event * rhs)
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
  if (!squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__srv__SpawnSquirtle_Event__copy(
  const squirtlebot_interfaces__srv__SpawnSquirtle_Event * input,
  squirtlebot_interfaces__srv__SpawnSquirtle_Event * output)
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
  if (!squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

squirtlebot_interfaces__srv__SpawnSquirtle_Event *
squirtlebot_interfaces__srv__SpawnSquirtle_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__SpawnSquirtle_Event * msg = (squirtlebot_interfaces__srv__SpawnSquirtle_Event *)allocator.allocate(sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Event));
  bool success = squirtlebot_interfaces__srv__SpawnSquirtle_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__srv__SpawnSquirtle_Event__destroy(squirtlebot_interfaces__srv__SpawnSquirtle_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__srv__SpawnSquirtle_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence__init(squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__SpawnSquirtle_Event * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__srv__SpawnSquirtle_Event *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__srv__SpawnSquirtle_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__srv__SpawnSquirtle_Event__fini(&data[i - 1]);
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
squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence__fini(squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence * array)
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
      squirtlebot_interfaces__srv__SpawnSquirtle_Event__fini(&array->data[i]);
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

squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence *
squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence * array = (squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence__destroy(squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence__are_equal(const squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence * lhs, const squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__srv__SpawnSquirtle_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence__copy(
  const squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence * input,
  squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__srv__SpawnSquirtle_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__srv__SpawnSquirtle_Event * data =
      (squirtlebot_interfaces__srv__SpawnSquirtle_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__srv__SpawnSquirtle_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__srv__SpawnSquirtle_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__srv__SpawnSquirtle_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
