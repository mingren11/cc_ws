// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from performance_test:msg/Array2m.idl
// generated code does not contain a copyright notice

#ifndef PERFORMANCE_TEST__MSG__DETAIL__ARRAY2M__FUNCTIONS_H_
#define PERFORMANCE_TEST__MSG__DETAIL__ARRAY2M__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "performance_test/msg/rosidl_generator_c__visibility_control.h"

#include "performance_test/msg/detail/array2m__struct.h"

/// Initialize msg/Array2m message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * performance_test__msg__Array2m
 * )) before or use
 * performance_test__msg__Array2m__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
bool
performance_test__msg__Array2m__init(performance_test__msg__Array2m * msg);

/// Finalize msg/Array2m message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
void
performance_test__msg__Array2m__fini(performance_test__msg__Array2m * msg);

/// Create msg/Array2m message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * performance_test__msg__Array2m__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
performance_test__msg__Array2m *
performance_test__msg__Array2m__create();

/// Destroy msg/Array2m message.
/**
 * It calls
 * performance_test__msg__Array2m__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
void
performance_test__msg__Array2m__destroy(performance_test__msg__Array2m * msg);

/// Check for msg/Array2m message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
bool
performance_test__msg__Array2m__are_equal(const performance_test__msg__Array2m * lhs, const performance_test__msg__Array2m * rhs);

/// Copy a msg/Array2m message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
bool
performance_test__msg__Array2m__copy(
  const performance_test__msg__Array2m * input,
  performance_test__msg__Array2m * output);

/// Initialize array of msg/Array2m messages.
/**
 * It allocates the memory for the number of elements and calls
 * performance_test__msg__Array2m__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
bool
performance_test__msg__Array2m__Sequence__init(performance_test__msg__Array2m__Sequence * array, size_t size);

/// Finalize array of msg/Array2m messages.
/**
 * It calls
 * performance_test__msg__Array2m__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
void
performance_test__msg__Array2m__Sequence__fini(performance_test__msg__Array2m__Sequence * array);

/// Create array of msg/Array2m messages.
/**
 * It allocates the memory for the array and calls
 * performance_test__msg__Array2m__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
performance_test__msg__Array2m__Sequence *
performance_test__msg__Array2m__Sequence__create(size_t size);

/// Destroy array of msg/Array2m messages.
/**
 * It calls
 * performance_test__msg__Array2m__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
void
performance_test__msg__Array2m__Sequence__destroy(performance_test__msg__Array2m__Sequence * array);

/// Check for msg/Array2m message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
bool
performance_test__msg__Array2m__Sequence__are_equal(const performance_test__msg__Array2m__Sequence * lhs, const performance_test__msg__Array2m__Sequence * rhs);

/// Copy an array of msg/Array2m messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
bool
performance_test__msg__Array2m__Sequence__copy(
  const performance_test__msg__Array2m__Sequence * input,
  performance_test__msg__Array2m__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PERFORMANCE_TEST__MSG__DETAIL__ARRAY2M__FUNCTIONS_H_
