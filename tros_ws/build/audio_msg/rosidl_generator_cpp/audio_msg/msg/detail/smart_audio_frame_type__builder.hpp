// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audio_msg:msg/SmartAudioFrameType.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_FRAME_TYPE__BUILDER_HPP_
#define AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_FRAME_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "audio_msg/msg/detail/smart_audio_frame_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace audio_msg
{

namespace msg
{

namespace builder
{

class Init_SmartAudioFrameType_value
{
public:
  Init_SmartAudioFrameType_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::audio_msg::msg::SmartAudioFrameType value(::audio_msg::msg::SmartAudioFrameType::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_msg::msg::SmartAudioFrameType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_msg::msg::SmartAudioFrameType>()
{
  return audio_msg::msg::builder::Init_SmartAudioFrameType_value();
}

}  // namespace audio_msg

#endif  // AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_FRAME_TYPE__BUILDER_HPP_
