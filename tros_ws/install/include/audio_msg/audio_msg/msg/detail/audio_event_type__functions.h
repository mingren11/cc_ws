// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from audio_msg:msg/AudioEventType.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__AUDIO_EVENT_TYPE__FUNCTIONS_H_
#define AUDIO_MSG__MSG__DETAIL__AUDIO_EVENT_TYPE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "audio_msg/msg/rosidl_generator_c__visibility_control.h"

#include "audio_msg/msg/detail/audio_event_type__struct.h"

/// Initialize msg/AudioEventType message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * audio_msg__msg__AudioEventType
 * )) before or use
 * audio_msg__msg__AudioEventType__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_msg
bool
audio_msg__msg__AudioEventType__init(audio_msg__msg__AudioEventType * msg);

/// Finalize msg/AudioEventType message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_msg
void
audio_msg__msg__AudioEventType__fini(audio_msg__msg__AudioEventType * msg);

/// Create msg/AudioEventType message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * audio_msg__msg__AudioEventType__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_msg
audio_msg__msg__AudioEventType *
audio_msg__msg__AudioEventType__create();

/// Destroy msg/AudioEventType message.
/**
 * It calls
 * audio_msg__msg__AudioEventType__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_msg
void
audio_msg__msg__AudioEventType__destroy(audio_msg__msg__AudioEventType * msg);

/// Check for msg/AudioEventType message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_msg
bool
audio_msg__msg__AudioEventType__are_equal(const audio_msg__msg__AudioEventType * lhs, const audio_msg__msg__AudioEventType * rhs);

/// Copy a msg/AudioEventType message.
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
ROSIDL_GENERATOR_C_PUBLIC_audio_msg
bool
audio_msg__msg__AudioEventType__copy(
  const audio_msg__msg__AudioEventType * input,
  audio_msg__msg__AudioEventType * output);

/// Initialize array of msg/AudioEventType messages.
/**
 * It allocates the memory for the number of elements and calls
 * audio_msg__msg__AudioEventType__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_msg
bool
audio_msg__msg__AudioEventType__Sequence__init(audio_msg__msg__AudioEventType__Sequence * array, size_t size);

/// Finalize array of msg/AudioEventType messages.
/**
 * It calls
 * audio_msg__msg__AudioEventType__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_msg
void
audio_msg__msg__AudioEventType__Sequence__fini(audio_msg__msg__AudioEventType__Sequence * array);

/// Create array of msg/AudioEventType messages.
/**
 * It allocates the memory for the array and calls
 * audio_msg__msg__AudioEventType__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_msg
audio_msg__msg__AudioEventType__Sequence *
audio_msg__msg__AudioEventType__Sequence__create(size_t size);

/// Destroy array of msg/AudioEventType messages.
/**
 * It calls
 * audio_msg__msg__AudioEventType__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_msg
void
audio_msg__msg__AudioEventType__Sequence__destroy(audio_msg__msg__AudioEventType__Sequence * array);

/// Check for msg/AudioEventType message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_msg
bool
audio_msg__msg__AudioEventType__Sequence__are_equal(const audio_msg__msg__AudioEventType__Sequence * lhs, const audio_msg__msg__AudioEventType__Sequence * rhs);

/// Copy an array of msg/AudioEventType messages.
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
ROSIDL_GENERATOR_C_PUBLIC_audio_msg
bool
audio_msg__msg__AudioEventType__Sequence__copy(
  const audio_msg__msg__AudioEventType__Sequence * input,
  audio_msg__msg__AudioEventType__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_MSG__MSG__DETAIL__AUDIO_EVENT_TYPE__FUNCTIONS_H_
