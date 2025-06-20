// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from squirtlebot_interfaces:msg/KillSpawnSquirtle.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__struct.h"
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool squirtlebot_interfaces__msg__kill_spawn_squirtle__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("squirtlebot_interfaces.msg._kill_spawn_squirtle.KillSpawnSquirtle", full_classname_dest, 65) == 0);
  }
  squirtlebot_interfaces__msg__KillSpawnSquirtle * ros_message = _ros_message;
  {  // kill_or_spawn
    PyObject * field = PyObject_GetAttrString(_pymsg, "kill_or_spawn");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->kill_or_spawn, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * squirtlebot_interfaces__msg__kill_spawn_squirtle__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of KillSpawnSquirtle */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("squirtlebot_interfaces.msg._kill_spawn_squirtle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "KillSpawnSquirtle");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  squirtlebot_interfaces__msg__KillSpawnSquirtle * ros_message = (squirtlebot_interfaces__msg__KillSpawnSquirtle *)raw_ros_message;
  {  // kill_or_spawn
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->kill_or_spawn.data,
      strlen(ros_message->kill_or_spawn.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "kill_or_spawn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
