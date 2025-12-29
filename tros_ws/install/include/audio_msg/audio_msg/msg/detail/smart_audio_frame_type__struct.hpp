// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audio_msg:msg/SmartAudioFrameType.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_FRAME_TYPE__STRUCT_HPP_
#define AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_FRAME_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__audio_msg__msg__SmartAudioFrameType __attribute__((deprecated))
#else
# define DEPRECATED__audio_msg__msg__SmartAudioFrameType __declspec(deprecated)
#endif

namespace audio_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SmartAudioFrameType_
{
  using Type = SmartAudioFrameType_<ContainerAllocator>;

  explicit SmartAudioFrameType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit SmartAudioFrameType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t SMART_AUDIO_TYPE_VOIP =
    1u;
  static constexpr uint8_t SMART_AUDIO_TYPE_EVENT =
    2u;
  static constexpr uint8_t SMART_AUDIO_TYPE_CMD_WORD =
    3u;
  static constexpr uint8_t SMART_AUDIO_TYPE_WAKEUP_DATA =
    4u;
  static constexpr uint8_t SMART_AUDIO_TYPE_DOA =
    5u;
  static constexpr uint8_t SMART_AUDIO_TYPE_ASR_DATA =
    6u;

  // pointer types
  using RawPtr =
    audio_msg::msg::SmartAudioFrameType_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_msg::msg::SmartAudioFrameType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_msg::msg::SmartAudioFrameType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_msg::msg::SmartAudioFrameType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_msg::msg::SmartAudioFrameType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_msg::msg::SmartAudioFrameType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_msg::msg::SmartAudioFrameType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_msg::msg::SmartAudioFrameType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_msg::msg::SmartAudioFrameType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_msg::msg::SmartAudioFrameType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_msg__msg__SmartAudioFrameType
    std::shared_ptr<audio_msg::msg::SmartAudioFrameType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_msg__msg__SmartAudioFrameType
    std::shared_ptr<audio_msg::msg::SmartAudioFrameType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SmartAudioFrameType_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SmartAudioFrameType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SmartAudioFrameType_

// alias to use template instance with default allocator
using SmartAudioFrameType =
  audio_msg::msg::SmartAudioFrameType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SmartAudioFrameType_<ContainerAllocator>::SMART_AUDIO_TYPE_VOIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SmartAudioFrameType_<ContainerAllocator>::SMART_AUDIO_TYPE_EVENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SmartAudioFrameType_<ContainerAllocator>::SMART_AUDIO_TYPE_CMD_WORD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SmartAudioFrameType_<ContainerAllocator>::SMART_AUDIO_TYPE_WAKEUP_DATA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SmartAudioFrameType_<ContainerAllocator>::SMART_AUDIO_TYPE_DOA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SmartAudioFrameType_<ContainerAllocator>::SMART_AUDIO_TYPE_ASR_DATA;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace audio_msg

#endif  // AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_FRAME_TYPE__STRUCT_HPP_
