// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cartesian_trajectory_msgs:action/CartesianComplianceTrajectory.idl
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
#include "rosidl_generator_c/visibility_control.h"
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"

bool cartesian_trajectory_msgs__msg__cartesian_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cartesian_trajectory_msgs__msg__cartesian_trajectory__convert_to_py(void * raw_ros_message);
bool cartesian_trajectory_msgs__msg__cartesian_tolerance__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cartesian_trajectory_msgs__msg__cartesian_tolerance__convert_to_py(void * raw_ros_message);
bool cartesian_trajectory_msgs__msg__cartesian_tolerance__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cartesian_trajectory_msgs__msg__cartesian_tolerance__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__wrench__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__wrench__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__goal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[101];
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
    assert(strncmp(
        "cartesian_trajectory_msgs.action._cartesian_compliance_trajectory.CartesianComplianceTrajectory_Goal",
        full_classname_dest, 100) == 0);
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal * ros_message = _ros_message;
  {  // trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory");
    if (!field) {
      return false;
    }
    if (!cartesian_trajectory_msgs__msg__cartesian_trajectory__convert_from_py(field, &ros_message->trajectory)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // path_tolerance
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_tolerance");
    if (!field) {
      return false;
    }
    if (!cartesian_trajectory_msgs__msg__cartesian_tolerance__convert_from_py(field, &ros_message->path_tolerance)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // goal_tolerance
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_tolerance");
    if (!field) {
      return false;
    }
    if (!cartesian_trajectory_msgs__msg__cartesian_tolerance__convert_from_py(field, &ros_message->goal_tolerance)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // force
    PyObject * field = PyObject_GetAttrString(_pymsg, "force");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__wrench__convert_from_py(field, &ros_message->force)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__goal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CartesianComplianceTrajectory_Goal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cartesian_trajectory_msgs.action._cartesian_compliance_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CartesianComplianceTrajectory_Goal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal * ros_message = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal *)raw_ros_message;
  {  // trajectory
    PyObject * field = NULL;
    field = cartesian_trajectory_msgs__msg__cartesian_trajectory__convert_to_py(&ros_message->trajectory);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_tolerance
    PyObject * field = NULL;
    field = cartesian_trajectory_msgs__msg__cartesian_tolerance__convert_to_py(&ros_message->path_tolerance);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_tolerance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_tolerance
    PyObject * field = NULL;
    field = cartesian_trajectory_msgs__msg__cartesian_tolerance__convert_to_py(&ros_message->goal_tolerance);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_tolerance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force
    PyObject * field = NULL;
    field = geometry_msgs__msg__wrench__convert_to_py(&ros_message->force);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_generator_c/visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"

#include "rosidl_generator_c/string.h"
#include "rosidl_generator_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__result__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[103];
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
    assert(strncmp(
        "cartesian_trajectory_msgs.action._cartesian_compliance_trajectory.CartesianComplianceTrajectory_Result",
        full_classname_dest, 102) == 0);
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_msg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String__assign(&ros_message->err_msg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CartesianComplianceTrajectory_Result */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cartesian_trajectory_msgs.action._cartesian_compliance_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CartesianComplianceTrajectory_Result");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result * ros_message = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_msg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->err_msg.data,
      strlen(ros_message->err_msg.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_generator_c/visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"

// already included above
// #include "rosidl_generator_c/string.h"
// already included above
// #include "rosidl_generator_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_to_py(void * raw_ros_message);
bool cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_to_py(void * raw_ros_message);
bool cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_to_py(void * raw_ros_message);
bool cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[105];
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
    assert(strncmp(
        "cartesian_trajectory_msgs.action._cartesian_compliance_trajectory.CartesianComplianceTrajectory_Feedback",
        full_classname_dest, 104) == 0);
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tcp_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "tcp_frame");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String__assign(&ros_message->tcp_frame, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // desired
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired");
    if (!field) {
      return false;
    }
    if (!cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_from_py(field, &ros_message->desired)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // virtual_desired
    PyObject * field = PyObject_GetAttrString(_pymsg, "virtual_desired");
    if (!field) {
      return false;
    }
    if (!cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_from_py(field, &ros_message->virtual_desired)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // actual
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual");
    if (!field) {
      return false;
    }
    if (!cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_from_py(field, &ros_message->actual)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // error
    PyObject * field = PyObject_GetAttrString(_pymsg, "error");
    if (!field) {
      return false;
    }
    if (!cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_from_py(field, &ros_message->error)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__feedback__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CartesianComplianceTrajectory_Feedback */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cartesian_trajectory_msgs.action._cartesian_compliance_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CartesianComplianceTrajectory_Feedback");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback * ros_message = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tcp_frame
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->tcp_frame.data,
      strlen(ros_message->tcp_frame.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tcp_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // desired
    PyObject * field = NULL;
    field = cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_to_py(&ros_message->desired);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // virtual_desired
    PyObject * field = NULL;
    field = cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_to_py(&ros_message->virtual_desired);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "virtual_desired", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actual
    PyObject * field = NULL;
    field = cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_to_py(&ros_message->actual);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error
    PyObject * field = NULL;
    field = cartesian_trajectory_msgs__msg__cartesian_trajectory_point__convert_to_py(&ros_message->error);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_generator_c/visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__goal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__goal__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__send_goal__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[113];
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
    assert(strncmp(
        "cartesian_trajectory_msgs.action._cartesian_compliance_trajectory.CartesianComplianceTrajectory_SendGoal_Request",
        full_classname_dest, 112) == 0);
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal");
    if (!field) {
      return false;
    }
    if (!cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__goal__convert_from_py(field, &ros_message->goal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__send_goal__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CartesianComplianceTrajectory_SendGoal_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cartesian_trajectory_msgs.action._cartesian_compliance_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CartesianComplianceTrajectory_SendGoal_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request * ros_message = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal
    PyObject * field = NULL;
    field = cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__goal__convert_to_py(&ros_message->goal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_generator_c/visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__send_goal__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[114];
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
    assert(strncmp(
        "cartesian_trajectory_msgs.action._cartesian_compliance_trajectory.CartesianComplianceTrajectory_SendGoal_Response",
        full_classname_dest, 113) == 0);
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response * ros_message = _ros_message;
  {  // accepted
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepted = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__send_goal__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CartesianComplianceTrajectory_SendGoal_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cartesian_trajectory_msgs.action._cartesian_compliance_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CartesianComplianceTrajectory_SendGoal_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response * ros_message = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response *)raw_ros_message;
  {  // accepted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_generator_c/visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__get_result__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[114];
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
    assert(strncmp(
        "cartesian_trajectory_msgs.action._cartesian_compliance_trajectory.CartesianComplianceTrajectory_GetResult_Request",
        full_classname_dest, 113) == 0);
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__get_result__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CartesianComplianceTrajectory_GetResult_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cartesian_trajectory_msgs.action._cartesian_compliance_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CartesianComplianceTrajectory_GetResult_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request * ros_message = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_generator_c/visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"

bool cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__result__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__get_result__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[115];
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
    assert(strncmp(
        "cartesian_trajectory_msgs.action._cartesian_compliance_trajectory.CartesianComplianceTrajectory_GetResult_Response",
        full_classname_dest, 114) == 0);
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    if (!cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__result__convert_from_py(field, &ros_message->result)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__get_result__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CartesianComplianceTrajectory_GetResult_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cartesian_trajectory_msgs.action._cartesian_compliance_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CartesianComplianceTrajectory_GetResult_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response * ros_message = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result
    PyObject * field = NULL;
    field = cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__result__convert_to_py(&ros_message->result);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_generator_c/visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__feedback__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__feedback_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[112];
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
    assert(strncmp(
        "cartesian_trajectory_msgs.action._cartesian_compliance_trajectory.CartesianComplianceTrajectory_FeedbackMessage",
        full_classname_dest, 111) == 0);
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback");
    if (!field) {
      return false;
    }
    if (!cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__feedback__convert_from_py(field, &ros_message->feedback)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__feedback_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CartesianComplianceTrajectory_FeedbackMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cartesian_trajectory_msgs.action._cartesian_compliance_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CartesianComplianceTrajectory_FeedbackMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage * ros_message = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback
    PyObject * field = NULL;
    field = cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__feedback__convert_to_py(&ros_message->feedback);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
