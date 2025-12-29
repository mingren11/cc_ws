// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audio_msg:msg/AudioEventType.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__AUDIO_EVENT_TYPE__STRUCT_HPP_
#define AUDIO_MSG__MSG__DETAIL__AUDIO_EVENT_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__audio_msg__msg__AudioEventType __attribute__((deprecated))
#else
# define DEPRECATED__audio_msg__msg__AudioEventType __declspec(deprecated)
#endif

namespace audio_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioEventType_
{
  using Type = AudioEventType_<ContainerAllocator>;

  explicit AudioEventType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit AudioEventType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t EVENT_WKPNORMAL =
    1u;
  static constexpr uint8_t EVENT_WKPONESHOT =
    2u;
  static constexpr uint8_t EVENT_WAITASRTIMEOUT =
    3u;
  static constexpr uint8_t EVENT_VADBEGIN =
    4u;
  static constexpr uint8_t EVENT_VADMID =
    5u;
  static constexpr uint8_t EVENT_VADEND =
    6u;

  // pointer types
  using RawPtr =
    audio_msg::msg::AudioEventType_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_msg::msg::AudioEventType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_msg::msg::AudioEventType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_msg::msg::AudioEventType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_msg::msg::AudioEventType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_msg::msg::AudioEventType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_msg::msg::AudioEventType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_msg::msg::AudioEventType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_msg::msg::AudioEventType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_msg::msg::AudioEventType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_msg__msg__AudioEventType
    std::shared_ptr<audio_msg::msg::AudioEventType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_msg__msg__AudioEventType
    std::shared_ptr<audio_msg::msg::AudioEventType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioEventType_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioEventType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioEventType_

// alias to use template instance with default allocator
using AudioEventType =
  audio_msg::msg::AudioEventType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioEventType_<ContainerAllocator>::EVENT_WKPNORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioEventType_<ContainerAllocator>::EVENT_WKPONESHOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioEventType_<ContainerAllocator>::EVENT_WAITASRTIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioEventType_<ContainerAllocator>::EVENT_VADBEGIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioEventType_<ContainerAllocator>::EVENT_VADMID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioEventType_<ContainerAllocator>::EVENT_VADEND;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace audio_msg

#endif  // AUDIO_MSG__MSG__DETAIL__AUDIO_EVENT_TYPE__STRUCT_HPP_
