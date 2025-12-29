// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audio_msg:msg/AudioFrame.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__STRUCT_HPP_
#define AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pts'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'frame_type'
#include "audio_msg/msg/detail/audio_frame_type__struct.hpp"
// Member 'smart_audio'
#include "audio_msg/msg/detail/smart_audio_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audio_msg__msg__AudioFrame __attribute__((deprecated))
#else
# define DEPRECATED__audio_msg__msg__AudioFrame __declspec(deprecated)
#endif

namespace audio_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioFrame_
{
  using Type = AudioFrame_<ContainerAllocator>;

  explicit AudioFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pts(_init),
    frame_type(_init),
    smart_audio(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0ul;
    }
  }

  explicit AudioFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pts(_alloc, _init),
    frame_type(_alloc, _init),
    smart_audio(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0ul;
    }
  }

  // field types and members
  using _index_type =
    uint32_t;
  _index_type index;
  using _pts_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _pts_type pts;
  using _frame_type_type =
    audio_msg::msg::AudioFrameType_<ContainerAllocator>;
  _frame_type_type frame_type;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;
  using _smart_audio_type =
    audio_msg::msg::SmartAudioData_<ContainerAllocator>;
  _smart_audio_type smart_audio;

  // setters for named parameter idiom
  Type & set__index(
    const uint32_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__pts(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->pts = _arg;
    return *this;
  }
  Type & set__frame_type(
    const audio_msg::msg::AudioFrameType_<ContainerAllocator> & _arg)
  {
    this->frame_type = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__smart_audio(
    const audio_msg::msg::SmartAudioData_<ContainerAllocator> & _arg)
  {
    this->smart_audio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audio_msg::msg::AudioFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_msg::msg::AudioFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_msg::msg::AudioFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_msg::msg::AudioFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_msg::msg::AudioFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_msg::msg::AudioFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_msg::msg::AudioFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_msg::msg::AudioFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_msg::msg::AudioFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_msg::msg::AudioFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_msg__msg__AudioFrame
    std::shared_ptr<audio_msg::msg::AudioFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_msg__msg__AudioFrame
    std::shared_ptr<audio_msg::msg::AudioFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioFrame_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    if (this->pts != other.pts) {
      return false;
    }
    if (this->frame_type != other.frame_type) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->smart_audio != other.smart_audio) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioFrame_

// alias to use template instance with default allocator
using AudioFrame =
  audio_msg::msg::AudioFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace audio_msg

#endif  // AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__STRUCT_HPP_
