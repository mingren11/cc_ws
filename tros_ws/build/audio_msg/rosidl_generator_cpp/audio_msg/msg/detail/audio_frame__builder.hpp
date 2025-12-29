// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audio_msg:msg/AudioFrame.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__BUILDER_HPP_
#define AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "audio_msg/msg/detail/audio_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace audio_msg
{

namespace msg
{

namespace builder
{

class Init_AudioFrame_smart_audio
{
public:
  explicit Init_AudioFrame_smart_audio(::audio_msg::msg::AudioFrame & msg)
  : msg_(msg)
  {}
  ::audio_msg::msg::AudioFrame smart_audio(::audio_msg::msg::AudioFrame::_smart_audio_type arg)
  {
    msg_.smart_audio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_msg::msg::AudioFrame msg_;
};

class Init_AudioFrame_data
{
public:
  explicit Init_AudioFrame_data(::audio_msg::msg::AudioFrame & msg)
  : msg_(msg)
  {}
  Init_AudioFrame_smart_audio data(::audio_msg::msg::AudioFrame::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_AudioFrame_smart_audio(msg_);
  }

private:
  ::audio_msg::msg::AudioFrame msg_;
};

class Init_AudioFrame_frame_type
{
public:
  explicit Init_AudioFrame_frame_type(::audio_msg::msg::AudioFrame & msg)
  : msg_(msg)
  {}
  Init_AudioFrame_data frame_type(::audio_msg::msg::AudioFrame::_frame_type_type arg)
  {
    msg_.frame_type = std::move(arg);
    return Init_AudioFrame_data(msg_);
  }

private:
  ::audio_msg::msg::AudioFrame msg_;
};

class Init_AudioFrame_pts
{
public:
  explicit Init_AudioFrame_pts(::audio_msg::msg::AudioFrame & msg)
  : msg_(msg)
  {}
  Init_AudioFrame_frame_type pts(::audio_msg::msg::AudioFrame::_pts_type arg)
  {
    msg_.pts = std::move(arg);
    return Init_AudioFrame_frame_type(msg_);
  }

private:
  ::audio_msg::msg::AudioFrame msg_;
};

class Init_AudioFrame_index
{
public:
  Init_AudioFrame_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioFrame_pts index(::audio_msg::msg::AudioFrame::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_AudioFrame_pts(msg_);
  }

private:
  ::audio_msg::msg::AudioFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_msg::msg::AudioFrame>()
{
  return audio_msg::msg::builder::Init_AudioFrame_index();
}

}  // namespace audio_msg

#endif  // AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__BUILDER_HPP_
