// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from performance_test:msg/Array60k.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "performance_test/msg/detail/array60k__rosidl_typesupport_introspection_c.h"
#include "performance_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "performance_test/msg/detail/array60k__functions.h"
#include "performance_test/msg/detail/array60k__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void performance_test__msg__Array60k__rosidl_typesupport_introspection_c__Array60k_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  performance_test__msg__Array60k__init(message_memory);
}

void performance_test__msg__Array60k__rosidl_typesupport_introspection_c__Array60k_fini_function(void * message_memory)
{
  performance_test__msg__Array60k__fini(message_memory);
}

size_t performance_test__msg__Array60k__rosidl_typesupport_introspection_c__size_function__Array60k__array(
  const void * untyped_member)
{
  (void)untyped_member;
  return 61440;
}

const void * performance_test__msg__Array60k__rosidl_typesupport_introspection_c__get_const_function__Array60k__array(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * performance_test__msg__Array60k__rosidl_typesupport_introspection_c__get_function__Array60k__array(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void performance_test__msg__Array60k__rosidl_typesupport_introspection_c__fetch_function__Array60k__array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    performance_test__msg__Array60k__rosidl_typesupport_introspection_c__get_const_function__Array60k__array(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void performance_test__msg__Array60k__rosidl_typesupport_introspection_c__assign_function__Array60k__array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    performance_test__msg__Array60k__rosidl_typesupport_introspection_c__get_function__Array60k__array(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember performance_test__msg__Array60k__rosidl_typesupport_introspection_c__Array60k_message_member_array[3] = {
  {
    "array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    61440,  // array size
    false,  // is upper bound
    offsetof(performance_test__msg__Array60k, array),  // bytes offset in struct
    NULL,  // default value
    performance_test__msg__Array60k__rosidl_typesupport_introspection_c__size_function__Array60k__array,  // size() function pointer
    performance_test__msg__Array60k__rosidl_typesupport_introspection_c__get_const_function__Array60k__array,  // get_const(index) function pointer
    performance_test__msg__Array60k__rosidl_typesupport_introspection_c__get_function__Array60k__array,  // get(index) function pointer
    performance_test__msg__Array60k__rosidl_typesupport_introspection_c__fetch_function__Array60k__array,  // fetch(index, &value) function pointer
    performance_test__msg__Array60k__rosidl_typesupport_introspection_c__assign_function__Array60k__array,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(performance_test__msg__Array60k, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(performance_test__msg__Array60k, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers performance_test__msg__Array60k__rosidl_typesupport_introspection_c__Array60k_message_members = {
  "performance_test__msg",  // message namespace
  "Array60k",  // message name
  3,  // number of fields
  sizeof(performance_test__msg__Array60k),
  performance_test__msg__Array60k__rosidl_typesupport_introspection_c__Array60k_message_member_array,  // message members
  performance_test__msg__Array60k__rosidl_typesupport_introspection_c__Array60k_init_function,  // function to initialize message memory (memory has to be allocated)
  performance_test__msg__Array60k__rosidl_typesupport_introspection_c__Array60k_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t performance_test__msg__Array60k__rosidl_typesupport_introspection_c__Array60k_message_type_support_handle = {
  0,
  &performance_test__msg__Array60k__rosidl_typesupport_introspection_c__Array60k_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_performance_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, performance_test, msg, Array60k)() {
  if (!performance_test__msg__Array60k__rosidl_typesupport_introspection_c__Array60k_message_type_support_handle.typesupport_identifier) {
    performance_test__msg__Array60k__rosidl_typesupport_introspection_c__Array60k_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &performance_test__msg__Array60k__rosidl_typesupport_introspection_c__Array60k_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
