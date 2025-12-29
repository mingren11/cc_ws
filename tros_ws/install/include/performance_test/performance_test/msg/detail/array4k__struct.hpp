// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from performance_test:msg/Array4k.idl
// generated code does not contain a copyright notice

#ifndef PERFORMANCE_TEST__MSG__DETAIL__ARRAY4K__STRUCT_HPP_
#define PERFORMANCE_TEST__MSG__DETAIL__ARRAY4K__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__performance_test__msg__Array4k __attribute__((deprecated))
#else
# define DEPRECATED__performance_test__msg__Array4k __declspec(deprecated)
#endif

namespace performance_test
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Array4k_
{
  using Type = Array4k_<ContainerAllocator>;

  explicit Array4k_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<unsigned char, 4096>::iterator, unsigned char>(this->array.begin(), this->array.end(), 0);
      this->time = 0ll;
      this->id = 0ull;
    }
  }

  explicit Array4k_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : array(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<unsigned char, 4096>::iterator, unsigned char>(this->array.begin(), this->array.end(), 0);
      this->time = 0ll;
      this->id = 0ull;
    }
  }

  // field types and members
  using _array_type =
    std::array<unsigned char, 4096>;
  _array_type array;
  using _time_type =
    int64_t;
  _time_type time;
  using _id_type =
    uint64_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__array(
    const std::array<unsigned char, 4096> & _arg)
  {
    this->array = _arg;
    return *this;
  }
  Type & set__time(
    const int64_t & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    performance_test::msg::Array4k_<ContainerAllocator> *;
  using ConstRawPtr =
    const performance_test::msg::Array4k_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<performance_test::msg::Array4k_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<performance_test::msg::Array4k_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      performance_test::msg::Array4k_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<performance_test::msg::Array4k_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      performance_test::msg::Array4k_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<performance_test::msg::Array4k_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<performance_test::msg::Array4k_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<performance_test::msg::Array4k_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__performance_test__msg__Array4k
    std::shared_ptr<performance_test::msg::Array4k_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__performance_test__msg__Array4k
    std::shared_ptr<performance_test::msg::Array4k_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Array4k_ & other) const
  {
    if (this->array != other.array) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Array4k_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Array4k_

// alias to use template instance with default allocator
using Array4k =
  performance_test::msg::Array4k_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace performance_test

#endif  // PERFORMANCE_TEST__MSG__DETAIL__ARRAY4K__STRUCT_HPP_
