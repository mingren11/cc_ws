// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ai_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ai_msgs/msg/detail/target__rosidl_typesupport_introspection_c.h"
#include "ai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ai_msgs/msg/detail/target__functions.h"
#include "ai_msgs/msg/detail/target__struct.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `rois`
#include "ai_msgs/msg/roi.h"
// Member `rois`
#include "ai_msgs/msg/detail/roi__rosidl_typesupport_introspection_c.h"
// Member `attributes`
#include "ai_msgs/msg/attribute.h"
// Member `attributes`
#include "ai_msgs/msg/detail/attribute__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "ai_msgs/msg/point.h"
// Member `points`
#include "ai_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `captures`
#include "ai_msgs/msg/capture.h"
// Member `captures`
#include "ai_msgs/msg/detail/capture__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ai_msgs__msg__Target__init(message_memory);
}

void ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_fini_function(void * message_memory)
{
  ai_msgs__msg__Target__fini(message_memory);
}

size_t ai_msgs__msg__Target__rosidl_typesupport_introspection_c__size_function__Target__rois(
  const void * untyped_member)
{
  const ai_msgs__msg__Roi__Sequence * member =
    (const ai_msgs__msg__Roi__Sequence *)(untyped_member);
  return member->size;
}

const void * ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__rois(
  const void * untyped_member, size_t index)
{
  const ai_msgs__msg__Roi__Sequence * member =
    (const ai_msgs__msg__Roi__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__rois(
  void * untyped_member, size_t index)
{
  ai_msgs__msg__Roi__Sequence * member =
    (ai_msgs__msg__Roi__Sequence *)(untyped_member);
  return &member->data[index];
}

void ai_msgs__msg__Target__rosidl_typesupport_introspection_c__fetch_function__Target__rois(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ai_msgs__msg__Roi * item =
    ((const ai_msgs__msg__Roi *)
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__rois(untyped_member, index));
  ai_msgs__msg__Roi * value =
    (ai_msgs__msg__Roi *)(untyped_value);
  *value = *item;
}

void ai_msgs__msg__Target__rosidl_typesupport_introspection_c__assign_function__Target__rois(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ai_msgs__msg__Roi * item =
    ((ai_msgs__msg__Roi *)
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__rois(untyped_member, index));
  const ai_msgs__msg__Roi * value =
    (const ai_msgs__msg__Roi *)(untyped_value);
  *item = *value;
}

bool ai_msgs__msg__Target__rosidl_typesupport_introspection_c__resize_function__Target__rois(
  void * untyped_member, size_t size)
{
  ai_msgs__msg__Roi__Sequence * member =
    (ai_msgs__msg__Roi__Sequence *)(untyped_member);
  ai_msgs__msg__Roi__Sequence__fini(member);
  return ai_msgs__msg__Roi__Sequence__init(member, size);
}

size_t ai_msgs__msg__Target__rosidl_typesupport_introspection_c__size_function__Target__attributes(
  const void * untyped_member)
{
  const ai_msgs__msg__Attribute__Sequence * member =
    (const ai_msgs__msg__Attribute__Sequence *)(untyped_member);
  return member->size;
}

const void * ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__attributes(
  const void * untyped_member, size_t index)
{
  const ai_msgs__msg__Attribute__Sequence * member =
    (const ai_msgs__msg__Attribute__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__attributes(
  void * untyped_member, size_t index)
{
  ai_msgs__msg__Attribute__Sequence * member =
    (ai_msgs__msg__Attribute__Sequence *)(untyped_member);
  return &member->data[index];
}

void ai_msgs__msg__Target__rosidl_typesupport_introspection_c__fetch_function__Target__attributes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ai_msgs__msg__Attribute * item =
    ((const ai_msgs__msg__Attribute *)
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__attributes(untyped_member, index));
  ai_msgs__msg__Attribute * value =
    (ai_msgs__msg__Attribute *)(untyped_value);
  *value = *item;
}

void ai_msgs__msg__Target__rosidl_typesupport_introspection_c__assign_function__Target__attributes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ai_msgs__msg__Attribute * item =
    ((ai_msgs__msg__Attribute *)
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__attributes(untyped_member, index));
  const ai_msgs__msg__Attribute * value =
    (const ai_msgs__msg__Attribute *)(untyped_value);
  *item = *value;
}

bool ai_msgs__msg__Target__rosidl_typesupport_introspection_c__resize_function__Target__attributes(
  void * untyped_member, size_t size)
{
  ai_msgs__msg__Attribute__Sequence * member =
    (ai_msgs__msg__Attribute__Sequence *)(untyped_member);
  ai_msgs__msg__Attribute__Sequence__fini(member);
  return ai_msgs__msg__Attribute__Sequence__init(member, size);
}

size_t ai_msgs__msg__Target__rosidl_typesupport_introspection_c__size_function__Target__points(
  const void * untyped_member)
{
  const ai_msgs__msg__Point__Sequence * member =
    (const ai_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__points(
  const void * untyped_member, size_t index)
{
  const ai_msgs__msg__Point__Sequence * member =
    (const ai_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__points(
  void * untyped_member, size_t index)
{
  ai_msgs__msg__Point__Sequence * member =
    (ai_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void ai_msgs__msg__Target__rosidl_typesupport_introspection_c__fetch_function__Target__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ai_msgs__msg__Point * item =
    ((const ai_msgs__msg__Point *)
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__points(untyped_member, index));
  ai_msgs__msg__Point * value =
    (ai_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void ai_msgs__msg__Target__rosidl_typesupport_introspection_c__assign_function__Target__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ai_msgs__msg__Point * item =
    ((ai_msgs__msg__Point *)
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__points(untyped_member, index));
  const ai_msgs__msg__Point * value =
    (const ai_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool ai_msgs__msg__Target__rosidl_typesupport_introspection_c__resize_function__Target__points(
  void * untyped_member, size_t size)
{
  ai_msgs__msg__Point__Sequence * member =
    (ai_msgs__msg__Point__Sequence *)(untyped_member);
  ai_msgs__msg__Point__Sequence__fini(member);
  return ai_msgs__msg__Point__Sequence__init(member, size);
}

size_t ai_msgs__msg__Target__rosidl_typesupport_introspection_c__size_function__Target__captures(
  const void * untyped_member)
{
  const ai_msgs__msg__Capture__Sequence * member =
    (const ai_msgs__msg__Capture__Sequence *)(untyped_member);
  return member->size;
}

const void * ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__captures(
  const void * untyped_member, size_t index)
{
  const ai_msgs__msg__Capture__Sequence * member =
    (const ai_msgs__msg__Capture__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__captures(
  void * untyped_member, size_t index)
{
  ai_msgs__msg__Capture__Sequence * member =
    (ai_msgs__msg__Capture__Sequence *)(untyped_member);
  return &member->data[index];
}

void ai_msgs__msg__Target__rosidl_typesupport_introspection_c__fetch_function__Target__captures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ai_msgs__msg__Capture * item =
    ((const ai_msgs__msg__Capture *)
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__captures(untyped_member, index));
  ai_msgs__msg__Capture * value =
    (ai_msgs__msg__Capture *)(untyped_value);
  *value = *item;
}

void ai_msgs__msg__Target__rosidl_typesupport_introspection_c__assign_function__Target__captures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ai_msgs__msg__Capture * item =
    ((ai_msgs__msg__Capture *)
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__captures(untyped_member, index));
  const ai_msgs__msg__Capture * value =
    (const ai_msgs__msg__Capture *)(untyped_value);
  *item = *value;
}

bool ai_msgs__msg__Target__rosidl_typesupport_introspection_c__resize_function__Target__captures(
  void * untyped_member, size_t size)
{
  ai_msgs__msg__Capture__Sequence * member =
    (ai_msgs__msg__Capture__Sequence *)(untyped_member);
  ai_msgs__msg__Capture__Sequence__fini(member);
  return ai_msgs__msg__Capture__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_member_array[6] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_msgs__msg__Target, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "track_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_msgs__msg__Target, track_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rois",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_msgs__msg__Target, rois),  // bytes offset in struct
    NULL,  // default value
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__size_function__Target__rois,  // size() function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__rois,  // get_const(index) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__rois,  // get(index) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__fetch_function__Target__rois,  // fetch(index, &value) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__assign_function__Target__rois,  // assign(index, value) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__resize_function__Target__rois  // resize(index) function pointer
  },
  {
    "attributes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_msgs__msg__Target, attributes),  // bytes offset in struct
    NULL,  // default value
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__size_function__Target__attributes,  // size() function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__attributes,  // get_const(index) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__attributes,  // get(index) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__fetch_function__Target__attributes,  // fetch(index, &value) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__assign_function__Target__attributes,  // assign(index, value) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__resize_function__Target__attributes  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_msgs__msg__Target, points),  // bytes offset in struct
    NULL,  // default value
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__size_function__Target__points,  // size() function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__points,  // get_const(index) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__points,  // get(index) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__fetch_function__Target__points,  // fetch(index, &value) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__assign_function__Target__points,  // assign(index, value) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__resize_function__Target__points  // resize(index) function pointer
  },
  {
    "captures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_msgs__msg__Target, captures),  // bytes offset in struct
    NULL,  // default value
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__size_function__Target__captures,  // size() function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__captures,  // get_const(index) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__captures,  // get(index) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__fetch_function__Target__captures,  // fetch(index, &value) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__assign_function__Target__captures,  // assign(index, value) function pointer
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__resize_function__Target__captures  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_members = {
  "ai_msgs__msg",  // message namespace
  "Target",  // message name
  6,  // number of fields
  sizeof(ai_msgs__msg__Target),
  ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_member_array,  // message members
  ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_init_function,  // function to initialize message memory (memory has to be allocated)
  ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_type_support_handle = {
  0,
  &ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_msgs, msg, Target)() {
  ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_msgs, msg, Roi)();
  ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_msgs, msg, Attribute)();
  ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_msgs, msg, Point)();
  ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_msgs, msg, Capture)();
  if (!ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_type_support_handle.typesupport_identifier) {
    ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ai_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
