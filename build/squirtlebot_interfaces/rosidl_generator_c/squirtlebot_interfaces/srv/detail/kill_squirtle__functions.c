// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from squirtlebot_interfaces:srv/KillSquirtle.idl
// generated code does not contain a copyright notice
#include "squirtlebot_interfaces/srv/detail/kill_squirtle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
squirtlebot_interfaces__srv__KillSquirtle_Request__init(squirtlebot_interfaces__srv__KillSquirtle_Request * msg)
{
  if (!msg) {
    return false;
  }
  // kill_active_squirtle
  return true;
}

void
squirtlebot_interfaces__srv__KillSquirtle_Request__fini(squirtlebot_interfaces__srv__KillSquirtle_Request * msg)
{
  if (!msg) {
    return;
  }
  // kill_active_squirtle
}

bool
squirtlebot_interfaces__srv__KillSquirtle_Request__are_equal(const squirtlebot_interfaces__srv__KillSquirtle_Request * lhs, const squirtlebot_interfaces__srv__KillSquirtle_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kill_active_squirtle
  if (lhs->kill_active_squirtle != rhs->kill_active_squirtle) {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__srv__KillSquirtle_Request__copy(
  const squirtlebot_interfaces__srv__KillSquirtle_Request * input,
  squirtlebot_interfaces__srv__KillSquirtle_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // kill_active_squirtle
  output->kill_active_squirtle = input->kill_active_squirtle;
  return true;
}

squirtlebot_interfaces__srv__KillSquirtle_Request *
squirtlebot_interfaces__srv__KillSquirtle_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__KillSquirtle_Request * msg = (squirtlebot_interfaces__srv__KillSquirtle_Request *)allocator.allocate(sizeof(squirtlebot_interfaces__srv__KillSquirtle_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__srv__KillSquirtle_Request));
  bool success = squirtlebot_interfaces__srv__KillSquirtle_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__srv__KillSquirtle_Request__destroy(squirtlebot_interfaces__srv__KillSquirtle_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__srv__KillSquirtle_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence__init(squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__KillSquirtle_Request * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__srv__KillSquirtle_Request *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__srv__KillSquirtle_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__srv__KillSquirtle_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__srv__KillSquirtle_Request__fini(&data[i - 1]);
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
squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence__fini(squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence * array)
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
      squirtlebot_interfaces__srv__KillSquirtle_Request__fini(&array->data[i]);
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

squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence *
squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence * array = (squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence__destroy(squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence__are_equal(const squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence * lhs, const squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__srv__KillSquirtle_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence__copy(
  const squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence * input,
  squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__srv__KillSquirtle_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__srv__KillSquirtle_Request * data =
      (squirtlebot_interfaces__srv__KillSquirtle_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__srv__KillSquirtle_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__srv__KillSquirtle_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__srv__KillSquirtle_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
squirtlebot_interfaces__srv__KillSquirtle_Response__init(squirtlebot_interfaces__srv__KillSquirtle_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
squirtlebot_interfaces__srv__KillSquirtle_Response__fini(squirtlebot_interfaces__srv__KillSquirtle_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
squirtlebot_interfaces__srv__KillSquirtle_Response__are_equal(const squirtlebot_interfaces__srv__KillSquirtle_Response * lhs, const squirtlebot_interfaces__srv__KillSquirtle_Response * rhs)
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
squirtlebot_interfaces__srv__KillSquirtle_Response__copy(
  const squirtlebot_interfaces__srv__KillSquirtle_Response * input,
  squirtlebot_interfaces__srv__KillSquirtle_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

squirtlebot_interfaces__srv__KillSquirtle_Response *
squirtlebot_interfaces__srv__KillSquirtle_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__KillSquirtle_Response * msg = (squirtlebot_interfaces__srv__KillSquirtle_Response *)allocator.allocate(sizeof(squirtlebot_interfaces__srv__KillSquirtle_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__srv__KillSquirtle_Response));
  bool success = squirtlebot_interfaces__srv__KillSquirtle_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__srv__KillSquirtle_Response__destroy(squirtlebot_interfaces__srv__KillSquirtle_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__srv__KillSquirtle_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence__init(squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__KillSquirtle_Response * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__srv__KillSquirtle_Response *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__srv__KillSquirtle_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__srv__KillSquirtle_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__srv__KillSquirtle_Response__fini(&data[i - 1]);
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
squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence__fini(squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence * array)
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
      squirtlebot_interfaces__srv__KillSquirtle_Response__fini(&array->data[i]);
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

squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence *
squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence * array = (squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence__destroy(squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence__are_equal(const squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence * lhs, const squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__srv__KillSquirtle_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence__copy(
  const squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence * input,
  squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__srv__KillSquirtle_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__srv__KillSquirtle_Response * data =
      (squirtlebot_interfaces__srv__KillSquirtle_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__srv__KillSquirtle_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__srv__KillSquirtle_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__srv__KillSquirtle_Response__copy(
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
// #include "squirtlebot_interfaces/srv/detail/kill_squirtle__functions.h"

bool
squirtlebot_interfaces__srv__KillSquirtle_Event__init(squirtlebot_interfaces__srv__KillSquirtle_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    squirtlebot_interfaces__srv__KillSquirtle_Event__fini(msg);
    return false;
  }
  // request
  if (!squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence__init(&msg->request, 0)) {
    squirtlebot_interfaces__srv__KillSquirtle_Event__fini(msg);
    return false;
  }
  // response
  if (!squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence__init(&msg->response, 0)) {
    squirtlebot_interfaces__srv__KillSquirtle_Event__fini(msg);
    return false;
  }
  return true;
}

void
squirtlebot_interfaces__srv__KillSquirtle_Event__fini(squirtlebot_interfaces__srv__KillSquirtle_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence__fini(&msg->request);
  // response
  squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence__fini(&msg->response);
}

bool
squirtlebot_interfaces__srv__KillSquirtle_Event__are_equal(const squirtlebot_interfaces__srv__KillSquirtle_Event * lhs, const squirtlebot_interfaces__srv__KillSquirtle_Event * rhs)
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
  if (!squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
squirtlebot_interfaces__srv__KillSquirtle_Event__copy(
  const squirtlebot_interfaces__srv__KillSquirtle_Event * input,
  squirtlebot_interfaces__srv__KillSquirtle_Event * output)
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
  if (!squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

squirtlebot_interfaces__srv__KillSquirtle_Event *
squirtlebot_interfaces__srv__KillSquirtle_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__KillSquirtle_Event * msg = (squirtlebot_interfaces__srv__KillSquirtle_Event *)allocator.allocate(sizeof(squirtlebot_interfaces__srv__KillSquirtle_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(squirtlebot_interfaces__srv__KillSquirtle_Event));
  bool success = squirtlebot_interfaces__srv__KillSquirtle_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
squirtlebot_interfaces__srv__KillSquirtle_Event__destroy(squirtlebot_interfaces__srv__KillSquirtle_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    squirtlebot_interfaces__srv__KillSquirtle_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence__init(squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__KillSquirtle_Event * data = NULL;

  if (size) {
    data = (squirtlebot_interfaces__srv__KillSquirtle_Event *)allocator.zero_allocate(size, sizeof(squirtlebot_interfaces__srv__KillSquirtle_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = squirtlebot_interfaces__srv__KillSquirtle_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        squirtlebot_interfaces__srv__KillSquirtle_Event__fini(&data[i - 1]);
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
squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence__fini(squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence * array)
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
      squirtlebot_interfaces__srv__KillSquirtle_Event__fini(&array->data[i]);
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

squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence *
squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence * array = (squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence *)allocator.allocate(sizeof(squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence__destroy(squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence__are_equal(const squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence * lhs, const squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!squirtlebot_interfaces__srv__KillSquirtle_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence__copy(
  const squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence * input,
  squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(squirtlebot_interfaces__srv__KillSquirtle_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    squirtlebot_interfaces__srv__KillSquirtle_Event * data =
      (squirtlebot_interfaces__srv__KillSquirtle_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!squirtlebot_interfaces__srv__KillSquirtle_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          squirtlebot_interfaces__srv__KillSquirtle_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!squirtlebot_interfaces__srv__KillSquirtle_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
