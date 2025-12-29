// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ai_msgs:msg/Target.idl
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
#include "ai_msgs/msg/detail/target__struct.h"
#include "ai_msgs/msg/detail/target__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ai_msgs/msg/detail/attribute__functions.h"
#include "ai_msgs/msg/detail/capture__functions.h"
#include "ai_msgs/msg/detail/point__functions.h"
#include "ai_msgs/msg/detail/roi__functions.h"
// end nested array functions include
bool ai_msgs__msg__roi__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ai_msgs__msg__roi__convert_to_py(void * raw_ros_message);
bool ai_msgs__msg__attribute__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ai_msgs__msg__attribute__convert_to_py(void * raw_ros_message);
bool ai_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ai_msgs__msg__point__convert_to_py(void * raw_ros_message);
bool ai_msgs__msg__capture__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ai_msgs__msg__capture__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ai_msgs__msg__target__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[27];
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
    assert(strncmp("ai_msgs.msg._target.Target", full_classname_dest, 26) == 0);
  }
  ai_msgs__msg__Target * ros_message = _ros_message;
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // track_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->track_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // rois
    PyObject * field = PyObject_GetAttrString(_pymsg, "rois");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'rois'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ai_msgs__msg__Roi__Sequence__init(&(ros_message->rois), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ai_msgs__msg__Roi__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ai_msgs__msg__Roi * dest = ros_message->rois.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ai_msgs__msg__roi__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // attributes
    PyObject * field = PyObject_GetAttrString(_pymsg, "attributes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'attributes'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ai_msgs__msg__Attribute__Sequence__init(&(ros_message->attributes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ai_msgs__msg__Attribute__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ai_msgs__msg__Attribute * dest = ros_message->attributes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ai_msgs__msg__attribute__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // points
    PyObject * field = PyObject_GetAttrString(_pymsg, "points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'points'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ai_msgs__msg__Point__Sequence__init(&(ros_message->points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ai_msgs__msg__Point__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ai_msgs__msg__Point * dest = ros_message->points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ai_msgs__msg__point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // captures
    PyObject * field = PyObject_GetAttrString(_pymsg, "captures");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'captures'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ai_msgs__msg__Capture__Sequence__init(&(ros_message->captures), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ai_msgs__msg__Capture__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ai_msgs__msg__Capture * dest = ros_message->captures.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ai_msgs__msg__capture__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ai_msgs__msg__target__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Target */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ai_msgs.msg._target");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Target");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ai_msgs__msg__Target * ros_message = (ai_msgs__msg__Target *)raw_ros_message;
  {  // type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->type.data,
      strlen(ros_message->type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->track_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rois
    PyObject * field = NULL;
    size_t size = ros_message->rois.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ai_msgs__msg__Roi * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->rois.data[i]);
      PyObject * pyitem = ai_msgs__msg__roi__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "rois", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attributes
    PyObject * field = NULL;
    size_t size = ros_message->attributes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ai_msgs__msg__Attribute * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->attributes.data[i]);
      PyObject * pyitem = ai_msgs__msg__attribute__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "attributes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // points
    PyObject * field = NULL;
    size_t size = ros_message->points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ai_msgs__msg__Point * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->points.data[i]);
      PyObject * pyitem = ai_msgs__msg__point__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // captures
    PyObject * field = NULL;
    size_t size = ros_message->captures.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ai_msgs__msg__Capture * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->captures.data[i]);
      PyObject * pyitem = ai_msgs__msg__capture__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "captures", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
