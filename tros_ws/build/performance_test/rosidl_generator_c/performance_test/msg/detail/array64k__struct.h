// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from performance_test:msg/Array64k.idl
// generated code does not contain a copyright notice

#ifndef PERFORMANCE_TEST__MSG__DETAIL__ARRAY64K__STRUCT_H_
#define PERFORMANCE_TEST__MSG__DETAIL__ARRAY64K__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Array64k in the package performance_test.
typedef struct performance_test__msg__Array64k
{
  uint8_t array[65536];
  int64_t time;
  uint64_t id;
} performance_test__msg__Array64k;

// Struct for a sequence of performance_test__msg__Array64k.
typedef struct performance_test__msg__Array64k__Sequence
{
  performance_test__msg__Array64k * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} performance_test__msg__Array64k__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERFORMANCE_TEST__MSG__DETAIL__ARRAY64K__STRUCT_H_
