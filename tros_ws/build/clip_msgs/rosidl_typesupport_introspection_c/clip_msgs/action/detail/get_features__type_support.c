// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from clip_msgs:action/GetFeatures.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "clip_msgs/action/detail/get_features__rosidl_typesupport_introspection_c.h"
#include "clip_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "clip_msgs/action/detail/get_features__functions.h"
#include "clip_msgs/action/detail/get_features__struct.h"


// Include directives for member types
// Member `urls`
// Member `texts`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__GetFeatures_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clip_msgs__action__GetFeatures_Goal__init(message_memory);
}

void clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__GetFeatures_Goal_fini_function(void * message_memory)
{
  clip_msgs__action__GetFeatures_Goal__fini(message_memory);
}

size_t clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__size_function__GetFeatures_Goal__urls(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__get_const_function__GetFeatures_Goal__urls(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__get_function__GetFeatures_Goal__urls(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__fetch_function__GetFeatures_Goal__urls(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__get_const_function__GetFeatures_Goal__urls(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__assign_function__GetFeatures_Goal__urls(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__get_function__GetFeatures_Goal__urls(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__resize_function__GetFeatures_Goal__urls(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__size_function__GetFeatures_Goal__texts(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__get_const_function__GetFeatures_Goal__texts(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__get_function__GetFeatures_Goal__texts(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__fetch_function__GetFeatures_Goal__texts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__get_const_function__GetFeatures_Goal__texts(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__assign_function__GetFeatures_Goal__texts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__get_function__GetFeatures_Goal__texts(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__resize_function__GetFeatures_Goal__texts(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__GetFeatures_Goal_message_member_array[3] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_Goal, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "urls",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_Goal, urls),  // bytes offset in struct
    NULL,  // default value
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__size_function__GetFeatures_Goal__urls,  // size() function pointer
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__get_const_function__GetFeatures_Goal__urls,  // get_const(index) function pointer
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__get_function__GetFeatures_Goal__urls,  // get(index) function pointer
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__fetch_function__GetFeatures_Goal__urls,  // fetch(index, &value) function pointer
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__assign_function__GetFeatures_Goal__urls,  // assign(index, value) function pointer
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__resize_function__GetFeatures_Goal__urls  // resize(index) function pointer
  },
  {
    "texts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_Goal, texts),  // bytes offset in struct
    NULL,  // default value
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__size_function__GetFeatures_Goal__texts,  // size() function pointer
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__get_const_function__GetFeatures_Goal__texts,  // get_const(index) function pointer
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__get_function__GetFeatures_Goal__texts,  // get(index) function pointer
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__fetch_function__GetFeatures_Goal__texts,  // fetch(index, &value) function pointer
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__assign_function__GetFeatures_Goal__texts,  // assign(index, value) function pointer
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__resize_function__GetFeatures_Goal__texts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__GetFeatures_Goal_message_members = {
  "clip_msgs__action",  // message namespace
  "GetFeatures_Goal",  // message name
  3,  // number of fields
  sizeof(clip_msgs__action__GetFeatures_Goal),
  clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__GetFeatures_Goal_message_member_array,  // message members
  clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__GetFeatures_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__GetFeatures_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__GetFeatures_Goal_message_type_support_handle = {
  0,
  &clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__GetFeatures_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clip_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_Goal)() {
  if (!clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__GetFeatures_Goal_message_type_support_handle.typesupport_identifier) {
    clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__GetFeatures_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clip_msgs__action__GetFeatures_Goal__rosidl_typesupport_introspection_c__GetFeatures_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "clip_msgs/action/detail/get_features__rosidl_typesupport_introspection_c.h"
// already included above
// #include "clip_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "clip_msgs/action/detail/get_features__functions.h"
// already included above
// #include "clip_msgs/action/detail/get_features__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void clip_msgs__action__GetFeatures_Result__rosidl_typesupport_introspection_c__GetFeatures_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clip_msgs__action__GetFeatures_Result__init(message_memory);
}

void clip_msgs__action__GetFeatures_Result__rosidl_typesupport_introspection_c__GetFeatures_Result_fini_function(void * message_memory)
{
  clip_msgs__action__GetFeatures_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember clip_msgs__action__GetFeatures_Result__rosidl_typesupport_introspection_c__GetFeatures_Result_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clip_msgs__action__GetFeatures_Result__rosidl_typesupport_introspection_c__GetFeatures_Result_message_members = {
  "clip_msgs__action",  // message namespace
  "GetFeatures_Result",  // message name
  2,  // number of fields
  sizeof(clip_msgs__action__GetFeatures_Result),
  clip_msgs__action__GetFeatures_Result__rosidl_typesupport_introspection_c__GetFeatures_Result_message_member_array,  // message members
  clip_msgs__action__GetFeatures_Result__rosidl_typesupport_introspection_c__GetFeatures_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  clip_msgs__action__GetFeatures_Result__rosidl_typesupport_introspection_c__GetFeatures_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clip_msgs__action__GetFeatures_Result__rosidl_typesupport_introspection_c__GetFeatures_Result_message_type_support_handle = {
  0,
  &clip_msgs__action__GetFeatures_Result__rosidl_typesupport_introspection_c__GetFeatures_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clip_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_Result)() {
  if (!clip_msgs__action__GetFeatures_Result__rosidl_typesupport_introspection_c__GetFeatures_Result_message_type_support_handle.typesupport_identifier) {
    clip_msgs__action__GetFeatures_Result__rosidl_typesupport_introspection_c__GetFeatures_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clip_msgs__action__GetFeatures_Result__rosidl_typesupport_introspection_c__GetFeatures_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "clip_msgs/action/detail/get_features__rosidl_typesupport_introspection_c.h"
// already included above
// #include "clip_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "clip_msgs/action/detail/get_features__functions.h"
// already included above
// #include "clip_msgs/action/detail/get_features__struct.h"


// Include directives for member types
// Member `item`
#include "clip_msgs/msg/clip_item.h"
// Member `item`
#include "clip_msgs/msg/detail/clip_item__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void clip_msgs__action__GetFeatures_Feedback__rosidl_typesupport_introspection_c__GetFeatures_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clip_msgs__action__GetFeatures_Feedback__init(message_memory);
}

void clip_msgs__action__GetFeatures_Feedback__rosidl_typesupport_introspection_c__GetFeatures_Feedback_fini_function(void * message_memory)
{
  clip_msgs__action__GetFeatures_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember clip_msgs__action__GetFeatures_Feedback__rosidl_typesupport_introspection_c__GetFeatures_Feedback_message_member_array[2] = {
  {
    "current_progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_Feedback, current_progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "item",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_Feedback, item),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clip_msgs__action__GetFeatures_Feedback__rosidl_typesupport_introspection_c__GetFeatures_Feedback_message_members = {
  "clip_msgs__action",  // message namespace
  "GetFeatures_Feedback",  // message name
  2,  // number of fields
  sizeof(clip_msgs__action__GetFeatures_Feedback),
  clip_msgs__action__GetFeatures_Feedback__rosidl_typesupport_introspection_c__GetFeatures_Feedback_message_member_array,  // message members
  clip_msgs__action__GetFeatures_Feedback__rosidl_typesupport_introspection_c__GetFeatures_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  clip_msgs__action__GetFeatures_Feedback__rosidl_typesupport_introspection_c__GetFeatures_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clip_msgs__action__GetFeatures_Feedback__rosidl_typesupport_introspection_c__GetFeatures_Feedback_message_type_support_handle = {
  0,
  &clip_msgs__action__GetFeatures_Feedback__rosidl_typesupport_introspection_c__GetFeatures_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clip_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_Feedback)() {
  clip_msgs__action__GetFeatures_Feedback__rosidl_typesupport_introspection_c__GetFeatures_Feedback_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, msg, ClipItem)();
  if (!clip_msgs__action__GetFeatures_Feedback__rosidl_typesupport_introspection_c__GetFeatures_Feedback_message_type_support_handle.typesupport_identifier) {
    clip_msgs__action__GetFeatures_Feedback__rosidl_typesupport_introspection_c__GetFeatures_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clip_msgs__action__GetFeatures_Feedback__rosidl_typesupport_introspection_c__GetFeatures_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "clip_msgs/action/detail/get_features__rosidl_typesupport_introspection_c.h"
// already included above
// #include "clip_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "clip_msgs/action/detail/get_features__functions.h"
// already included above
// #include "clip_msgs/action/detail/get_features__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "clip_msgs/action/get_features.h"
// Member `goal`
// already included above
// #include "clip_msgs/action/detail/get_features__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void clip_msgs__action__GetFeatures_SendGoal_Request__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clip_msgs__action__GetFeatures_SendGoal_Request__init(message_memory);
}

void clip_msgs__action__GetFeatures_SendGoal_Request__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_fini_function(void * message_memory)
{
  clip_msgs__action__GetFeatures_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember clip_msgs__action__GetFeatures_SendGoal_Request__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clip_msgs__action__GetFeatures_SendGoal_Request__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_message_members = {
  "clip_msgs__action",  // message namespace
  "GetFeatures_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(clip_msgs__action__GetFeatures_SendGoal_Request),
  clip_msgs__action__GetFeatures_SendGoal_Request__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_message_member_array,  // message members
  clip_msgs__action__GetFeatures_SendGoal_Request__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  clip_msgs__action__GetFeatures_SendGoal_Request__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clip_msgs__action__GetFeatures_SendGoal_Request__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_message_type_support_handle = {
  0,
  &clip_msgs__action__GetFeatures_SendGoal_Request__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clip_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_SendGoal_Request)() {
  clip_msgs__action__GetFeatures_SendGoal_Request__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  clip_msgs__action__GetFeatures_SendGoal_Request__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_Goal)();
  if (!clip_msgs__action__GetFeatures_SendGoal_Request__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    clip_msgs__action__GetFeatures_SendGoal_Request__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clip_msgs__action__GetFeatures_SendGoal_Request__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "clip_msgs/action/detail/get_features__rosidl_typesupport_introspection_c.h"
// already included above
// #include "clip_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "clip_msgs/action/detail/get_features__functions.h"
// already included above
// #include "clip_msgs/action/detail/get_features__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void clip_msgs__action__GetFeatures_SendGoal_Response__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clip_msgs__action__GetFeatures_SendGoal_Response__init(message_memory);
}

void clip_msgs__action__GetFeatures_SendGoal_Response__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Response_fini_function(void * message_memory)
{
  clip_msgs__action__GetFeatures_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember clip_msgs__action__GetFeatures_SendGoal_Response__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clip_msgs__action__GetFeatures_SendGoal_Response__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Response_message_members = {
  "clip_msgs__action",  // message namespace
  "GetFeatures_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(clip_msgs__action__GetFeatures_SendGoal_Response),
  clip_msgs__action__GetFeatures_SendGoal_Response__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Response_message_member_array,  // message members
  clip_msgs__action__GetFeatures_SendGoal_Response__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  clip_msgs__action__GetFeatures_SendGoal_Response__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clip_msgs__action__GetFeatures_SendGoal_Response__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Response_message_type_support_handle = {
  0,
  &clip_msgs__action__GetFeatures_SendGoal_Response__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clip_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_SendGoal_Response)() {
  clip_msgs__action__GetFeatures_SendGoal_Response__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!clip_msgs__action__GetFeatures_SendGoal_Response__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    clip_msgs__action__GetFeatures_SendGoal_Response__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clip_msgs__action__GetFeatures_SendGoal_Response__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "clip_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "clip_msgs/action/detail/get_features__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_service_members = {
  "clip_msgs__action",  // service namespace
  "GetFeatures_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_service_type_support_handle = {
  0,
  &clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clip_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_SendGoal)() {
  if (!clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_service_type_support_handle.typesupport_identifier) {
    clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_SendGoal_Response)()->data;
  }

  return &clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "clip_msgs/action/detail/get_features__rosidl_typesupport_introspection_c.h"
// already included above
// #include "clip_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "clip_msgs/action/detail/get_features__functions.h"
// already included above
// #include "clip_msgs/action/detail/get_features__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void clip_msgs__action__GetFeatures_GetResult_Request__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clip_msgs__action__GetFeatures_GetResult_Request__init(message_memory);
}

void clip_msgs__action__GetFeatures_GetResult_Request__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Request_fini_function(void * message_memory)
{
  clip_msgs__action__GetFeatures_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember clip_msgs__action__GetFeatures_GetResult_Request__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clip_msgs__action__GetFeatures_GetResult_Request__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Request_message_members = {
  "clip_msgs__action",  // message namespace
  "GetFeatures_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(clip_msgs__action__GetFeatures_GetResult_Request),
  clip_msgs__action__GetFeatures_GetResult_Request__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Request_message_member_array,  // message members
  clip_msgs__action__GetFeatures_GetResult_Request__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  clip_msgs__action__GetFeatures_GetResult_Request__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clip_msgs__action__GetFeatures_GetResult_Request__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Request_message_type_support_handle = {
  0,
  &clip_msgs__action__GetFeatures_GetResult_Request__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clip_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_GetResult_Request)() {
  clip_msgs__action__GetFeatures_GetResult_Request__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!clip_msgs__action__GetFeatures_GetResult_Request__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    clip_msgs__action__GetFeatures_GetResult_Request__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clip_msgs__action__GetFeatures_GetResult_Request__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "clip_msgs/action/detail/get_features__rosidl_typesupport_introspection_c.h"
// already included above
// #include "clip_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "clip_msgs/action/detail/get_features__functions.h"
// already included above
// #include "clip_msgs/action/detail/get_features__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "clip_msgs/action/get_features.h"
// Member `result`
// already included above
// #include "clip_msgs/action/detail/get_features__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void clip_msgs__action__GetFeatures_GetResult_Response__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clip_msgs__action__GetFeatures_GetResult_Response__init(message_memory);
}

void clip_msgs__action__GetFeatures_GetResult_Response__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Response_fini_function(void * message_memory)
{
  clip_msgs__action__GetFeatures_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember clip_msgs__action__GetFeatures_GetResult_Response__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clip_msgs__action__GetFeatures_GetResult_Response__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Response_message_members = {
  "clip_msgs__action",  // message namespace
  "GetFeatures_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(clip_msgs__action__GetFeatures_GetResult_Response),
  clip_msgs__action__GetFeatures_GetResult_Response__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Response_message_member_array,  // message members
  clip_msgs__action__GetFeatures_GetResult_Response__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  clip_msgs__action__GetFeatures_GetResult_Response__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clip_msgs__action__GetFeatures_GetResult_Response__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Response_message_type_support_handle = {
  0,
  &clip_msgs__action__GetFeatures_GetResult_Response__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clip_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_GetResult_Response)() {
  clip_msgs__action__GetFeatures_GetResult_Response__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_Result)();
  if (!clip_msgs__action__GetFeatures_GetResult_Response__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    clip_msgs__action__GetFeatures_GetResult_Response__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clip_msgs__action__GetFeatures_GetResult_Response__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "clip_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "clip_msgs/action/detail/get_features__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_GetResult_service_members = {
  "clip_msgs__action",  // service namespace
  "GetFeatures_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_GetResult_service_type_support_handle = {
  0,
  &clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clip_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_GetResult)() {
  if (!clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_GetResult_service_type_support_handle.typesupport_identifier) {
    clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_GetResult_Response)()->data;
  }

  return &clip_msgs__action__detail__get_features__rosidl_typesupport_introspection_c__GetFeatures_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "clip_msgs/action/detail/get_features__rosidl_typesupport_introspection_c.h"
// already included above
// #include "clip_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "clip_msgs/action/detail/get_features__functions.h"
// already included above
// #include "clip_msgs/action/detail/get_features__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "clip_msgs/action/get_features.h"
// Member `feedback`
// already included above
// #include "clip_msgs/action/detail/get_features__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void clip_msgs__action__GetFeatures_FeedbackMessage__rosidl_typesupport_introspection_c__GetFeatures_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clip_msgs__action__GetFeatures_FeedbackMessage__init(message_memory);
}

void clip_msgs__action__GetFeatures_FeedbackMessage__rosidl_typesupport_introspection_c__GetFeatures_FeedbackMessage_fini_function(void * message_memory)
{
  clip_msgs__action__GetFeatures_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember clip_msgs__action__GetFeatures_FeedbackMessage__rosidl_typesupport_introspection_c__GetFeatures_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__action__GetFeatures_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clip_msgs__action__GetFeatures_FeedbackMessage__rosidl_typesupport_introspection_c__GetFeatures_FeedbackMessage_message_members = {
  "clip_msgs__action",  // message namespace
  "GetFeatures_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(clip_msgs__action__GetFeatures_FeedbackMessage),
  clip_msgs__action__GetFeatures_FeedbackMessage__rosidl_typesupport_introspection_c__GetFeatures_FeedbackMessage_message_member_array,  // message members
  clip_msgs__action__GetFeatures_FeedbackMessage__rosidl_typesupport_introspection_c__GetFeatures_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  clip_msgs__action__GetFeatures_FeedbackMessage__rosidl_typesupport_introspection_c__GetFeatures_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clip_msgs__action__GetFeatures_FeedbackMessage__rosidl_typesupport_introspection_c__GetFeatures_FeedbackMessage_message_type_support_handle = {
  0,
  &clip_msgs__action__GetFeatures_FeedbackMessage__rosidl_typesupport_introspection_c__GetFeatures_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clip_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_FeedbackMessage)() {
  clip_msgs__action__GetFeatures_FeedbackMessage__rosidl_typesupport_introspection_c__GetFeatures_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  clip_msgs__action__GetFeatures_FeedbackMessage__rosidl_typesupport_introspection_c__GetFeatures_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, action, GetFeatures_Feedback)();
  if (!clip_msgs__action__GetFeatures_FeedbackMessage__rosidl_typesupport_introspection_c__GetFeatures_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    clip_msgs__action__GetFeatures_FeedbackMessage__rosidl_typesupport_introspection_c__GetFeatures_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clip_msgs__action__GetFeatures_FeedbackMessage__rosidl_typesupport_introspection_c__GetFeatures_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
