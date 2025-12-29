// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from audio_msg:msg/SmartAudioData.idl
// generated code does not contain a copyright notice
#include "audio_msg/msg/detail/smart_audio_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "audio_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "audio_msg/msg/detail/smart_audio_data__struct.h"
#include "audio_msg/msg/detail/smart_audio_data__functions.h"
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

#include "audio_msg/msg/detail/audio_event_type__functions.h"  // event_type
#include "audio_msg/msg/detail/smart_audio_frame_type__functions.h"  // frame_type
#include "rosidl_runtime_c/primitives_sequence.h"  // data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // data
#include "rosidl_runtime_c/string.h"  // cmd_word
#include "rosidl_runtime_c/string_functions.h"  // cmd_word

// forward declare type support functions
size_t get_serialized_size_audio_msg__msg__AudioEventType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_audio_msg__msg__AudioEventType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audio_msg, msg, AudioEventType)();
size_t get_serialized_size_audio_msg__msg__SmartAudioFrameType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_audio_msg__msg__SmartAudioFrameType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audio_msg, msg, SmartAudioFrameType)();


using _SmartAudioData__ros_msg_type = audio_msg__msg__SmartAudioData;

static bool _SmartAudioData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SmartAudioData__ros_msg_type * ros_message = static_cast<const _SmartAudioData__ros_msg_type *>(untyped_ros_message);
  // Field name: frame_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, audio_msg, msg, SmartAudioFrameType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->frame_type, cdr))
    {
      return false;
    }
  }

  // Field name: event_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, audio_msg, msg, AudioEventType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->event_type, cdr))
    {
      return false;
    }
  }

  // Field name: cmd_word
  {
    const rosidl_runtime_c__String * str = &ros_message->cmd_word;
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

  // Field name: data
  {
    size_t size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: doa_theta
  {
    cdr << ros_message->doa_theta;
  }

  return true;
}

static bool _SmartAudioData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SmartAudioData__ros_msg_type * ros_message = static_cast<_SmartAudioData__ros_msg_type *>(untyped_ros_message);
  // Field name: frame_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, audio_msg, msg, SmartAudioFrameType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->frame_type))
    {
      return false;
    }
  }

  // Field name: event_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, audio_msg, msg, AudioEventType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->event_type))
    {
      return false;
    }
  }

  // Field name: cmd_word
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->cmd_word.data) {
      rosidl_runtime_c__String__init(&ros_message->cmd_word);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->cmd_word,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'cmd_word'\n");
      return false;
    }
  }

  // Field name: data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->data.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->data);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->data, size)) {
      fprintf(stderr, "failed to create array for field 'data'");
      return false;
    }
    auto array_ptr = ros_message->data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: doa_theta
  {
    cdr >> ros_message->doa_theta;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audio_msg
size_t get_serialized_size_audio_msg__msg__SmartAudioData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SmartAudioData__ros_msg_type * ros_message = static_cast<const _SmartAudioData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name frame_type

  current_alignment += get_serialized_size_audio_msg__msg__SmartAudioFrameType(
    &(ros_message->frame_type), current_alignment);
  // field.name event_type

  current_alignment += get_serialized_size_audio_msg__msg__AudioEventType(
    &(ros_message->event_type), current_alignment);
  // field.name cmd_word
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->cmd_word.size + 1);
  // field.name data
  {
    size_t array_size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name doa_theta
  {
    size_t item_size = sizeof(ros_message->doa_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SmartAudioData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_audio_msg__msg__SmartAudioData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audio_msg
size_t max_serialized_size_audio_msg__msg__SmartAudioData(
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

  // member: frame_type
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_audio_msg__msg__SmartAudioFrameType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: event_type
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_audio_msg__msg__AudioEventType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cmd_word
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
  // member: data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: doa_theta
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
    using DataType = audio_msg__msg__SmartAudioData;
    is_plain =
      (
      offsetof(DataType, doa_theta) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SmartAudioData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_audio_msg__msg__SmartAudioData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SmartAudioData = {
  "audio_msg::msg",
  "SmartAudioData",
  _SmartAudioData__cdr_serialize,
  _SmartAudioData__cdr_deserialize,
  _SmartAudioData__get_serialized_size,
  _SmartAudioData__max_serialized_size
};

static rosidl_message_type_support_t _SmartAudioData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SmartAudioData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audio_msg, msg, SmartAudioData)() {
  return &_SmartAudioData__type_support;
}

#if defined(__cplusplus)
}
#endif
