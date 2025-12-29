// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ai_msgs:msg/Point.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ai_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
#include "ai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ai_msgs/msg/detail/point__functions.h"
#include "ai_msgs/msg/detail/point__struct.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `point`
#include "geometry_msgs/msg/point32.h"
// Member `point`
#include "geometry_msgs/msg/detail/point32__rosidl_typesupport_introspection_c.h"
// Member `confidence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ai_msgs__msg__Point__rosidl_typesupport_introspection_c__Point_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ai_msgs__msg__Point__init(message_memory);
}

void ai_msgs__msg__Point__rosidl_typesupport_introspection_c__Point_fini_function(void * message_memory)
{
  ai_msgs__msg__Point__fini(message_memory);
}

size_t ai_msgs__msg__Point__rosidl_typesupport_introspection_c__size_function__Point__point(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point32__Sequence * member =
    (const geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return member->size;
}

const void * ai_msgs__msg__Point__rosidl_typesupport_introspection_c__get_const_function__Point__point(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point32__Sequence * member =
    (const geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ai_msgs__msg__Point__rosidl_typesupport_introspection_c__get_function__Point__point(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point32__Sequence * member =
    (geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return &member->data[index];
}

void ai_msgs__msg__Point__rosidl_typesupport_introspection_c__fetch_function__Point__point(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point32 * item =
    ((const geometry_msgs__msg__Point32 *)
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__get_const_function__Point__point(untyped_member, index));
  geometry_msgs__msg__Point32 * value =
    (geometry_msgs__msg__Point32 *)(untyped_value);
  *value = *item;
}

void ai_msgs__msg__Point__rosidl_typesupport_introspection_c__assign_function__Point__point(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point32 * item =
    ((geometry_msgs__msg__Point32 *)
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__get_function__Point__point(untyped_member, index));
  const geometry_msgs__msg__Point32 * value =
    (const geometry_msgs__msg__Point32 *)(untyped_value);
  *item = *value;
}

bool ai_msgs__msg__Point__rosidl_typesupport_introspection_c__resize_function__Point__point(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point32__Sequence * member =
    (geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  geometry_msgs__msg__Point32__Sequence__fini(member);
  return geometry_msgs__msg__Point32__Sequence__init(member, size);
}

size_t ai_msgs__msg__Point__rosidl_typesupport_introspection_c__size_function__Point__confidence(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * ai_msgs__msg__Point__rosidl_typesupport_introspection_c__get_const_function__Point__confidence(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ai_msgs__msg__Point__rosidl_typesupport_introspection_c__get_function__Point__confidence(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void ai_msgs__msg__Point__rosidl_typesupport_introspection_c__fetch_function__Point__confidence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__get_const_function__Point__confidence(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void ai_msgs__msg__Point__rosidl_typesupport_introspection_c__assign_function__Point__confidence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__get_function__Point__confidence(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool ai_msgs__msg__Point__rosidl_typesupport_introspection_c__resize_function__Point__confidence(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ai_msgs__msg__Point__rosidl_typesupport_introspection_c__Point_message_member_array[3] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_msgs__msg__Point, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_msgs__msg__Point, point),  // bytes offset in struct
    NULL,  // default value
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__size_function__Point__point,  // size() function pointer
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__get_const_function__Point__point,  // get_const(index) function pointer
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__get_function__Point__point,  // get(index) function pointer
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__fetch_function__Point__point,  // fetch(index, &value) function pointer
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__assign_function__Point__point,  // assign(index, value) function pointer
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__resize_function__Point__point  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_msgs__msg__Point, confidence),  // bytes offset in struct
    NULL,  // default value
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__size_function__Point__confidence,  // size() function pointer
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__get_const_function__Point__confidence,  // get_const(index) function pointer
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__get_function__Point__confidence,  // get(index) function pointer
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__fetch_function__Point__confidence,  // fetch(index, &value) function pointer
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__assign_function__Point__confidence,  // assign(index, value) function pointer
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__resize_function__Point__confidence  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ai_msgs__msg__Point__rosidl_typesupport_introspection_c__Point_message_members = {
  "ai_msgs__msg",  // message namespace
  "Point",  // message name
  3,  // number of fields
  sizeof(ai_msgs__msg__Point),
  ai_msgs__msg__Point__rosidl_typesupport_introspection_c__Point_message_member_array,  // message members
  ai_msgs__msg__Point__rosidl_typesupport_introspection_c__Point_init_function,  // function to initialize message memory (memory has to be allocated)
  ai_msgs__msg__Point__rosidl_typesupport_introspection_c__Point_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ai_msgs__msg__Point__rosidl_typesupport_introspection_c__Point_message_type_support_handle = {
  0,
  &ai_msgs__msg__Point__rosidl_typesupport_introspection_c__Point_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_msgs, msg, Point)() {
  ai_msgs__msg__Point__rosidl_typesupport_introspection_c__Point_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  if (!ai_msgs__msg__Point__rosidl_typesupport_introspection_c__Point_message_type_support_handle.typesupport_identifier) {
    ai_msgs__msg__Point__rosidl_typesupport_introspection_c__Point_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ai_msgs__msg__Point__rosidl_typesupport_introspection_c__Point_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
