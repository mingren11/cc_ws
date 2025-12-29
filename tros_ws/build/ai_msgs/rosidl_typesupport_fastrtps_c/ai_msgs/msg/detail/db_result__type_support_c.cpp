// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ai_msgs:msg/DBResult.idl
// generated code does not contain a copyright notice
#include "ai_msgs/msg/detail/db_result__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ai_msgs/msg/detail/db_result__struct.h"
#include "ai_msgs/msg/detail/db_result__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // db_type, match_id
#include "rosidl_runtime_c/string_functions.h"  // db_type, match_id

// forward declare type support functions


using _DBResult__ros_msg_type = ai_msgs__msg__DBResult;

static bool _DBResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DBResult__ros_msg_type * ros_message = static_cast<const _DBResult__ros_msg_type *>(untyped_ros_message);
  // Field name: db_type
  {
    const rosidl_runtime_c__String * str = &ros_message->db_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: match_id
  {
    const rosidl_runtime_c__String * str = &ros_message->match_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  // Field name: similarity
  {
    cdr << ros_message->similarity;
  }

  return true;
}

static bool _DBResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DBResult__ros_msg_type * ros_message = static_cast<_DBResult__ros_msg_type *>(untyped_ros_message);
  // Field name: db_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->db_type.data) {
      rosidl_runtime_c__String__init(&ros_message->db_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->db_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'db_type'\n");
      return false;
    }
  }

  // Field name: match_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->match_id.data) {
      rosidl_runtime_c__String__init(&ros_message->match_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->match_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'match_id'\n");
      return false;
    }
  }

  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  // Field name: similarity
  {
    cdr >> ros_message->similarity;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ai_msgs
size_t get_serialized_size_ai_msgs__msg__DBResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DBResult__ros_msg_type * ros_message = static_cast<const _DBResult__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name db_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->db_type.size + 1);
  // field.name match_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->match_id.size + 1);
  // field.name distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name similarity
  {
    size_t item_size = sizeof(ros_message->similarity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DBResult__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ai_msgs__msg__DBResult(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ai_msgs
size_t max_serialized_size_ai_msgs__msg__DBResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: db_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: match_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: similarity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ai_msgs__msg__DBResult;
    is_plain =
      (
      offsetof(DataType, similarity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DBResult__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ai_msgs__msg__DBResult(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DBResult = {
  "ai_msgs::msg",
  "DBResult",
  _DBResult__cdr_serialize,
  _DBResult__cdr_deserialize,
  _DBResult__get_serialized_size,
  _DBResult__max_serialized_size
};

static rosidl_message_type_support_t _DBResult__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DBResult,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ai_msgs, msg, DBResult)() {
  return &_DBResult__type_support;
}

#if defined(__cplusplus)
}
#endif
