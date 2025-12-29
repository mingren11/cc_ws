// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from performance_test:msg/Array8m.idl
// generated code does not contain a copyright notice

#ifndef PERFORMANCE_TEST__MSG__DETAIL__ARRAY8M__STRUCT_H_
#define PERFORMANCE_TEST__MSG__DETAIL__ARRAY8M__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Array8m in the package performance_test.
typedef struct performance_test__msg__Array8m
{
  uint8_t array[8388608];
  int64_t time;
  uint64_t id;
} performance_test__msg__Array8m;

// Struct for a sequence of performance_test__msg__Array8m.
typedef struct performance_test__msg__Array8m__Sequence
{
  performance_test__msg__Array8m * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} performance_test__msg__Array8m__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERFORMANCE_TEST__MSG__DETAIL__ARRAY8M__STRUCT_H_
