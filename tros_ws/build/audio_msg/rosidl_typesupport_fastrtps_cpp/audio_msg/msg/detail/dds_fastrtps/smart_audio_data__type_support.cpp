// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from audio_msg:msg/SmartAudioData.idl
// generated code does not contain a copyright notice
#include "audio_msg/msg/detail/smart_audio_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "audio_msg/msg/detail/smart_audio_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace audio_msg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const audio_msg::msg::SmartAudioFrameType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  audio_msg::msg::SmartAudioFrameType &);
size_t get_serialized_size(
  const audio_msg::msg::SmartAudioFrameType &,
  size_t current_alignment);
size_t
max_serialized_size_SmartAudioFrameType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace audio_msg

namespace audio_msg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const audio_msg::msg::AudioEventType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  audio_msg::msg::AudioEventType &);
size_t get_serialized_size(
  const audio_msg::msg::AudioEventType &,
  size_t current_alignment);
size_t
max_serialized_size_AudioEventType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace audio_msg


namespace audio_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audio_msg
cdr_serialize(
  const audio_msg::msg::SmartAudioData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: frame_type
  audio_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.frame_type,
    cdr);
  // Member: event_type
  audio_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.event_type,
    cdr);
  // Member: cmd_word
  cdr << ros_message.cmd_word;
  // Member: data
  {
    cdr << ros_message.data;
  }
  // Member: doa_theta
  cdr << ros_message.doa_theta;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audio_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  audio_msg::msg::SmartAudioData & ros_message)
{
  // Member: frame_type
  audio_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.frame_type);

  // Member: event_type
  audio_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.event_type);

  // Member: cmd_word
  cdr >> ros_message.cmd_word;

  // Member: data
  {
    cdr >> ros_message.data;
  }

  // Member: doa_theta
  cdr >> ros_message.doa_theta;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audio_msg
get_serialized_size(
  const audio_msg::msg::SmartAudioData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: frame_type

  current_alignment +=
    audio_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.frame_type, current_alignment);
  // Member: event_type

  current_alignment +=
    audio_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.event_type, current_alignment);
  // Member: cmd_word
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.cmd_word.size() + 1);
  // Member: data
  {
    size_t array_size = ros_message.data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: doa_theta
  {
    size_t item_size = sizeof(ros_message.doa_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audio_msg
max_serialized_size_SmartAudioData(
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


  // Member: frame_type
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        audio_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_SmartAudioFrameType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: event_type
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        audio_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_AudioEventType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: cmd_word
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

  // Member: data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: doa_theta
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
    using DataType = audio_msg::msg::SmartAudioData;
    is_plain =
      (
      offsetof(DataType, doa_theta) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SmartAudioData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const audio_msg::msg::SmartAudioData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SmartAudioData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<audio_msg::msg::SmartAudioData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SmartAudioData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const audio_msg::msg::SmartAudioData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SmartAudioData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SmartAudioData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SmartAudioData__callbacks = {
  "audio_msg::msg",
  "SmartAudioData",
  _SmartAudioData__cdr_serialize,
  _SmartAudioData__cdr_deserialize,
  _SmartAudioData__get_serialized_size,
  _SmartAudioData__max_serialized_size
};

static rosidl_message_type_support_t _SmartAudioData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SmartAudioData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace audio_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_audio_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<audio_msg::msg::SmartAudioData>()
{
  return &audio_msg::msg::typesupport_fastrtps_cpp::_SmartAudioData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, audio_msg, msg, SmartAudioData)() {
  return &audio_msg::msg::typesupport_fastrtps_cpp::_SmartAudioData__handle;
}

#ifdef __cplusplus
}
#endif
