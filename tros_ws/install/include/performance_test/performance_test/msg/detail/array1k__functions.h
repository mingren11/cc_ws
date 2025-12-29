// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from performance_test:msg/Array1k.idl
// generated code does not contain a copyright notice

#ifndef PERFORMANCE_TEST__MSG__DETAIL__ARRAY1K__FUNCTIONS_H_
#define PERFORMANCE_TEST__MSG__DETAIL__ARRAY1K__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "performance_test/msg/rosidl_generator_c__visibility_control.h"

#include "performance_test/msg/detail/array1k__struct.h"

/// Initialize msg/Array1k message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * performance_test__msg__Array1k
 * )) before or use
 * performance_test__msg__Array1k__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
bool
performance_test__msg__Array1k__init(performance_test__msg__Array1k * msg);

/// Finalize msg/Array1k message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
void
performance_test__msg__Array1k__fini(performance_test__msg__Array1k * msg);

/// Create msg/Array1k message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * performance_test__msg__Array1k__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
performance_test__msg__Array1k *
performance_test__msg__Array1k__create();

/// Destroy msg/Array1k message.
/**
 * It calls
 * performance_test__msg__Array1k__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
void
performance_test__msg__Array1k__destroy(performance_test__msg__Array1k * msg);

/// Check for msg/Array1k message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
bool
performance_test__msg__Array1k__are_equal(const performance_test__msg__Array1k * lhs, const performance_test__msg__Array1k * rhs);

/// Copy a msg/Array1k message.
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
performance_test__msg__Array1k__copy(
  const performance_test__msg__Array1k * input,
  performance_test__msg__Array1k * output);

/// Initialize array of msg/Array1k messages.
/**
 * It allocates the memory for the number of elements and calls
 * performance_test__msg__Array1k__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
bool
performance_test__msg__Array1k__Sequence__init(performance_test__msg__Array1k__Sequence * array, size_t size);

/// Finalize array of msg/Array1k messages.
/**
 * It calls
 * performance_test__msg__Array1k__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
void
performance_test__msg__Array1k__Sequence__fini(performance_test__msg__Array1k__Sequence * array);

/// Create array of msg/Array1k messages.
/**
 * It allocates the memory for the array and calls
 * performance_test__msg__Array1k__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
performance_test__msg__Array1k__Sequence *
performance_test__msg__Array1k__Sequence__create(size_t size);

/// Destroy array of msg/Array1k messages.
/**
 * It calls
 * performance_test__msg__Array1k__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
void
performance_test__msg__Array1k__Sequence__destroy(performance_test__msg__Array1k__Sequence * array);

/// Check for msg/Array1k message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_performance_test
bool
performance_test__msg__Array1k__Sequence__are_equal(const performance_test__msg__Array1k__Sequence * lhs, const performance_test__msg__Array1k__Sequence * rhs);

/// Copy an array of msg/Array1k messages.
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
performance_test__msg__Array1k__Sequence__copy(
  const performance_test__msg__Array1k__Sequence * input,
  performance_test__msg__Array1k__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PERFORMANCE_TEST__MSG__DETAIL__ARRAY1K__FUNCTIONS_H_
