// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audio_msg:msg/AudioFrameType.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME_TYPE__STRUCT_HPP_
#define AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__audio_msg__msg__AudioFrameType __attribute__((deprecated))
#else
# define DEPRECATED__audio_msg__msg__AudioFrameType __declspec(deprecated)
#endif

namespace audio_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioFrameType_
{
  using Type = AudioFrameType_<ContainerAllocator>;

  explicit AudioFrameType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit AudioFrameType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  // field types and members
  using _value_type =
    uint8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const uint8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FRAME_TYPE_UNKNOW =
    0u;
  static constexpr uint8_t FRAME_TYPE_AUDIO =
    1u;
  static constexpr uint8_t FRAME_TYPE_SMART_AUDIO =
    2u;

  // pointer types
  using RawPtr =
    audio_msg::msg::AudioFrameType_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_msg::msg::AudioFrameType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_msg::msg::AudioFrameType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_msg::msg::AudioFrameType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_msg::msg::AudioFrameType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_msg::msg::AudioFrameType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_msg::msg::AudioFrameType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_msg::msg::AudioFrameType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_msg::msg::AudioFrameType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_msg::msg::AudioFrameType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_msg__msg__AudioFrameType
    std::shared_ptr<audio_msg::msg::AudioFrameType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_msg__msg__AudioFrameType
    std::shared_ptr<audio_msg::msg::AudioFrameType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioFrameType_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioFrameType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioFrameType_

// alias to use template instance with default allocator
using AudioFrameType =
  audio_msg::msg::AudioFrameType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioFrameType_<ContainerAllocator>::FRAME_TYPE_UNKNOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioFrameType_<ContainerAllocator>::FRAME_TYPE_AUDIO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioFrameType_<ContainerAllocator>::FRAME_TYPE_SMART_AUDIO;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace audio_msg

#endif  // AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME_TYPE__STRUCT_HPP_
