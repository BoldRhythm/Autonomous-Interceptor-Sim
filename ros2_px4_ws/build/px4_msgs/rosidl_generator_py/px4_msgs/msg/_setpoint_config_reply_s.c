// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/SetpointConfigReply.idl
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
#include "px4_msgs/msg/detail/setpoint_config_reply__struct.h"
#include "px4_msgs/msg/detail/setpoint_config_reply__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__setpoint_config_reply__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("px4_msgs.msg._setpoint_config_reply.SetpointConfigReply", full_classname_dest, 55) == 0);
  }
  px4_msgs__msg__SetpointConfigReply * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // source_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->result = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_angular_velocity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_req_angular_velocity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mode_req_attitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_attitude");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_req_attitude = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mode_req_local_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_local_alt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_req_local_alt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mode_req_local_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_local_position");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_req_local_position = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__setpoint_config_reply__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetpointConfigReply */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._setpoint_config_reply");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetpointConfigReply");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__SetpointConfigReply * ros_message = (px4_msgs__msg__SetpointConfigReply *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->source_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->result);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_angular_velocity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_req_angular_velocity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_attitude
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_req_attitude ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_attitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_local_alt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_req_local_alt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_local_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_local_position
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_req_local_position ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_local_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
