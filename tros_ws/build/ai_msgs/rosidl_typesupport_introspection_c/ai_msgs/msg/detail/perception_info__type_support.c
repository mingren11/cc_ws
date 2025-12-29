// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ai_msgs:msg/PerceptionInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ai_msgs/msg/detail/perception_info__rosidl_typesupport_introspection_c.h"
#include "ai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ai_msgs/msg/detail/perception_info__functions.h"
#include "ai_msgs/msg/detail/perception_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `class_names`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__PerceptionInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ai_msgs__msg__PerceptionInfo__init(message_memory);
}

void ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__PerceptionInfo_fini_function(void * message_memory)
{
  ai_msgs__msg__PerceptionInfo__fini(message_memory);
}

size_t ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__size_function__PerceptionInfo__class_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__get_const_function__PerceptionInfo__class_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__get_function__PerceptionInfo__class_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__fetch_function__PerceptionInfo__class_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__get_const_function__PerceptionInfo__class_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__assign_function__PerceptionInfo__class_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__get_function__PerceptionInfo__class_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__resize_function__PerceptionInfo__class_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__PerceptionInfo_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_msgs__msg__PerceptionInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_msgs__msg__PerceptionInfo, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_msgs__msg__PerceptionInfo, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_msgs__msg__PerceptionInfo, class_names),  // bytes offset in struct
    NULL,  // default value
    ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__size_function__PerceptionInfo__class_names,  // size() function pointer
    ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__get_const_function__PerceptionInfo__class_names,  // get_const(index) function pointer
    ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__get_function__PerceptionInfo__class_names,  // get(index) function pointer
    ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__fetch_function__PerceptionInfo__class_names,  // fetch(index, &value) function pointer
    ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__assign_function__PerceptionInfo__class_names,  // assign(index, value) function pointer
    ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__resize_function__PerceptionInfo__class_names  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__PerceptionInfo_message_members = {
  "ai_msgs__msg",  // message namespace
  "PerceptionInfo",  // message name
  4,  // number of fields
  sizeof(ai_msgs__msg__PerceptionInfo),
  ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__PerceptionInfo_message_member_array,  // message members
  ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__PerceptionInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__PerceptionInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__PerceptionInfo_message_type_support_handle = {
  0,
  &ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__PerceptionInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_msgs, msg, PerceptionInfo)() {
  ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__PerceptionInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__PerceptionInfo_message_type_support_handle.typesupport_identifier) {
    ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__PerceptionInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ai_msgs__msg__PerceptionInfo__rosidl_typesupport_introspection_c__PerceptionInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
