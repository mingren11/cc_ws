// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audio_msg:msg/SmartAudioData.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_DATA__BUILDER_HPP_
#define AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "audio_msg/msg/detail/smart_audio_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace audio_msg
{

namespace msg
{

namespace builder
{

class Init_SmartAudioData_doa_theta
{
public:
  explicit Init_SmartAudioData_doa_theta(::audio_msg::msg::SmartAudioData & msg)
  : msg_(msg)
  {}
  ::audio_msg::msg::SmartAudioData doa_theta(::audio_msg::msg::SmartAudioData::_doa_theta_type arg)
  {
    msg_.doa_theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_msg::msg::SmartAudioData msg_;
};

class Init_SmartAudioData_data
{
public:
  explicit Init_SmartAudioData_data(::audio_msg::msg::SmartAudioData & msg)
  : msg_(msg)
  {}
  Init_SmartAudioData_doa_theta data(::audio_msg::msg::SmartAudioData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_SmartAudioData_doa_theta(msg_);
  }

private:
  ::audio_msg::msg::SmartAudioData msg_;
};

class Init_SmartAudioData_cmd_word
{
public:
  explicit Init_SmartAudioData_cmd_word(::audio_msg::msg::SmartAudioData & msg)
  : msg_(msg)
  {}
  Init_SmartAudioData_data cmd_word(::audio_msg::msg::SmartAudioData::_cmd_word_type arg)
  {
    msg_.cmd_word = std::move(arg);
    return Init_SmartAudioData_data(msg_);
  }

private:
  ::audio_msg::msg::SmartAudioData msg_;
};

class Init_SmartAudioData_event_type
{
public:
  explicit Init_SmartAudioData_event_type(::audio_msg::msg::SmartAudioData & msg)
  : msg_(msg)
  {}
  Init_SmartAudioData_cmd_word event_type(::audio_msg::msg::SmartAudioData::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return Init_SmartAudioData_cmd_word(msg_);
  }

private:
  ::audio_msg::msg::SmartAudioData msg_;
};

class Init_SmartAudioData_frame_type
{
public:
  Init_SmartAudioData_frame_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SmartAudioData_event_type frame_type(::audio_msg::msg::SmartAudioData::_frame_type_type arg)
  {
    msg_.frame_type = std::move(arg);
    return Init_SmartAudioData_event_type(msg_);
  }

private:
  ::audio_msg::msg::SmartAudioData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_msg::msg::SmartAudioData>()
{
  return audio_msg::msg::builder::Init_SmartAudioData_frame_type();
}

}  // namespace audio_msg

#endif  // AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_DATA__BUILDER_HPP_
