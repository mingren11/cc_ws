// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audio_msg:msg/SmartAudioData.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_DATA__STRUCT_HPP_
#define AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'frame_type'
#include "audio_msg/msg/detail/smart_audio_frame_type__struct.hpp"
// Member 'event_type'
#include "audio_msg/msg/detail/audio_event_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audio_msg__msg__SmartAudioData __attribute__((deprecated))
#else
# define DEPRECATED__audio_msg__msg__SmartAudioData __declspec(deprecated)
#endif

namespace audio_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SmartAudioData_
{
  using Type = SmartAudioData_<ContainerAllocator>;

  explicit SmartAudioData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_type(_init),
    event_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_word = "";
      this->doa_theta = 0.0f;
    }
  }

  explicit SmartAudioData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_type(_alloc, _init),
    event_type(_alloc, _init),
    cmd_word(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_word = "";
      this->doa_theta = 0.0f;
    }
  }

  // field types and members
  using _frame_type_type =
    audio_msg::msg::SmartAudioFrameType_<ContainerAllocator>;
  _frame_type_type frame_type;
  using _event_type_type =
    audio_msg::msg::AudioEventType_<ContainerAllocator>;
  _event_type_type event_type;
  using _cmd_word_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cmd_word_type cmd_word;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;
  using _doa_theta_type =
    float;
  _doa_theta_type doa_theta;

  // setters for named parameter idiom
  Type & set__frame_type(
    const audio_msg::msg::SmartAudioFrameType_<ContainerAllocator> & _arg)
  {
    this->frame_type = _arg;
    return *this;
  }
  Type & set__event_type(
    const audio_msg::msg::AudioEventType_<ContainerAllocator> & _arg)
  {
    this->event_type = _arg;
    return *this;
  }
  Type & set__cmd_word(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cmd_word = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__doa_theta(
    const float & _arg)
  {
    this->doa_theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audio_msg::msg::SmartAudioData_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_msg::msg::SmartAudioData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_msg::msg::SmartAudioData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_msg::msg::SmartAudioData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_msg::msg::SmartAudioData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_msg::msg::SmartAudioData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_msg::msg::SmartAudioData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_msg::msg::SmartAudioData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_msg::msg::SmartAudioData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_msg::msg::SmartAudioData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_msg__msg__SmartAudioData
    std::shared_ptr<audio_msg::msg::SmartAudioData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_msg__msg__SmartAudioData
    std::shared_ptr<audio_msg::msg::SmartAudioData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SmartAudioData_ & other) const
  {
    if (this->frame_type != other.frame_type) {
      return false;
    }
    if (this->event_type != other.event_type) {
      return false;
    }
    if (this->cmd_word != other.cmd_word) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->doa_theta != other.doa_theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const SmartAudioData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SmartAudioData_

// alias to use template instance with default allocator
using SmartAudioData =
  audio_msg::msg::SmartAudioData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace audio_msg

#endif  // AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_DATA__STRUCT_HPP_
