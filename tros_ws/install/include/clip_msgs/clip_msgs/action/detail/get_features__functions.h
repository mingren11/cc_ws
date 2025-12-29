// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from clip_msgs:action/GetFeatures.idl
// generated code does not contain a copyright notice

#ifndef CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__FUNCTIONS_H_
#define CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "clip_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "clip_msgs/action/detail/get_features__struct.h"

/// Initialize action/GetFeatures message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * clip_msgs__action__GetFeatures_Goal
 * )) before or use
 * clip_msgs__action__GetFeatures_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Goal__init(clip_msgs__action__GetFeatures_Goal * msg);

/// Finalize action/GetFeatures message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_Goal__fini(clip_msgs__action__GetFeatures_Goal * msg);

/// Create action/GetFeatures message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * clip_msgs__action__GetFeatures_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_Goal *
clip_msgs__action__GetFeatures_Goal__create();

/// Destroy action/GetFeatures message.
/**
 * It calls
 * clip_msgs__action__GetFeatures_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_Goal__destroy(clip_msgs__action__GetFeatures_Goal * msg);

/// Check for action/GetFeatures message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Goal__are_equal(const clip_msgs__action__GetFeatures_Goal * lhs, const clip_msgs__action__GetFeatures_Goal * rhs);

/// Copy a action/GetFeatures message.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Goal__copy(
  const clip_msgs__action__GetFeatures_Goal * input,
  clip_msgs__action__GetFeatures_Goal * output);

/// Initialize array of action/GetFeatures messages.
/**
 * It allocates the memory for the number of elements and calls
 * clip_msgs__action__GetFeatures_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Goal__Sequence__init(clip_msgs__action__GetFeatures_Goal__Sequence * array, size_t size);

/// Finalize array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_Goal__Sequence__fini(clip_msgs__action__GetFeatures_Goal__Sequence * array);

/// Create array of action/GetFeatures messages.
/**
 * It allocates the memory for the array and calls
 * clip_msgs__action__GetFeatures_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_Goal__Sequence *
clip_msgs__action__GetFeatures_Goal__Sequence__create(size_t size);

/// Destroy array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_Goal__Sequence__destroy(clip_msgs__action__GetFeatures_Goal__Sequence * array);

/// Check for action/GetFeatures message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Goal__Sequence__are_equal(const clip_msgs__action__GetFeatures_Goal__Sequence * lhs, const clip_msgs__action__GetFeatures_Goal__Sequence * rhs);

/// Copy an array of action/GetFeatures messages.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Goal__Sequence__copy(
  const clip_msgs__action__GetFeatures_Goal__Sequence * input,
  clip_msgs__action__GetFeatures_Goal__Sequence * output);

/// Initialize action/GetFeatures message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * clip_msgs__action__GetFeatures_Result
 * )) before or use
 * clip_msgs__action__GetFeatures_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Result__init(clip_msgs__action__GetFeatures_Result * msg);

/// Finalize action/GetFeatures message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_Result__fini(clip_msgs__action__GetFeatures_Result * msg);

/// Create action/GetFeatures message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * clip_msgs__action__GetFeatures_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_Result *
clip_msgs__action__GetFeatures_Result__create();

/// Destroy action/GetFeatures message.
/**
 * It calls
 * clip_msgs__action__GetFeatures_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_Result__destroy(clip_msgs__action__GetFeatures_Result * msg);

/// Check for action/GetFeatures message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Result__are_equal(const clip_msgs__action__GetFeatures_Result * lhs, const clip_msgs__action__GetFeatures_Result * rhs);

/// Copy a action/GetFeatures message.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Result__copy(
  const clip_msgs__action__GetFeatures_Result * input,
  clip_msgs__action__GetFeatures_Result * output);

/// Initialize array of action/GetFeatures messages.
/**
 * It allocates the memory for the number of elements and calls
 * clip_msgs__action__GetFeatures_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Result__Sequence__init(clip_msgs__action__GetFeatures_Result__Sequence * array, size_t size);

/// Finalize array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_Result__Sequence__fini(clip_msgs__action__GetFeatures_Result__Sequence * array);

/// Create array of action/GetFeatures messages.
/**
 * It allocates the memory for the array and calls
 * clip_msgs__action__GetFeatures_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_Result__Sequence *
clip_msgs__action__GetFeatures_Result__Sequence__create(size_t size);

/// Destroy array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_Result__Sequence__destroy(clip_msgs__action__GetFeatures_Result__Sequence * array);

/// Check for action/GetFeatures message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Result__Sequence__are_equal(const clip_msgs__action__GetFeatures_Result__Sequence * lhs, const clip_msgs__action__GetFeatures_Result__Sequence * rhs);

/// Copy an array of action/GetFeatures messages.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Result__Sequence__copy(
  const clip_msgs__action__GetFeatures_Result__Sequence * input,
  clip_msgs__action__GetFeatures_Result__Sequence * output);

/// Initialize action/GetFeatures message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * clip_msgs__action__GetFeatures_Feedback
 * )) before or use
 * clip_msgs__action__GetFeatures_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Feedback__init(clip_msgs__action__GetFeatures_Feedback * msg);

/// Finalize action/GetFeatures message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_Feedback__fini(clip_msgs__action__GetFeatures_Feedback * msg);

/// Create action/GetFeatures message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * clip_msgs__action__GetFeatures_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_Feedback *
clip_msgs__action__GetFeatures_Feedback__create();

/// Destroy action/GetFeatures message.
/**
 * It calls
 * clip_msgs__action__GetFeatures_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_Feedback__destroy(clip_msgs__action__GetFeatures_Feedback * msg);

/// Check for action/GetFeatures message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Feedback__are_equal(const clip_msgs__action__GetFeatures_Feedback * lhs, const clip_msgs__action__GetFeatures_Feedback * rhs);

/// Copy a action/GetFeatures message.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Feedback__copy(
  const clip_msgs__action__GetFeatures_Feedback * input,
  clip_msgs__action__GetFeatures_Feedback * output);

/// Initialize array of action/GetFeatures messages.
/**
 * It allocates the memory for the number of elements and calls
 * clip_msgs__action__GetFeatures_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Feedback__Sequence__init(clip_msgs__action__GetFeatures_Feedback__Sequence * array, size_t size);

/// Finalize array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_Feedback__Sequence__fini(clip_msgs__action__GetFeatures_Feedback__Sequence * array);

/// Create array of action/GetFeatures messages.
/**
 * It allocates the memory for the array and calls
 * clip_msgs__action__GetFeatures_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_Feedback__Sequence *
clip_msgs__action__GetFeatures_Feedback__Sequence__create(size_t size);

/// Destroy array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_Feedback__Sequence__destroy(clip_msgs__action__GetFeatures_Feedback__Sequence * array);

/// Check for action/GetFeatures message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Feedback__Sequence__are_equal(const clip_msgs__action__GetFeatures_Feedback__Sequence * lhs, const clip_msgs__action__GetFeatures_Feedback__Sequence * rhs);

/// Copy an array of action/GetFeatures messages.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_Feedback__Sequence__copy(
  const clip_msgs__action__GetFeatures_Feedback__Sequence * input,
  clip_msgs__action__GetFeatures_Feedback__Sequence * output);

/// Initialize action/GetFeatures message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * clip_msgs__action__GetFeatures_SendGoal_Request
 * )) before or use
 * clip_msgs__action__GetFeatures_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_SendGoal_Request__init(clip_msgs__action__GetFeatures_SendGoal_Request * msg);

/// Finalize action/GetFeatures message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_SendGoal_Request__fini(clip_msgs__action__GetFeatures_SendGoal_Request * msg);

/// Create action/GetFeatures message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * clip_msgs__action__GetFeatures_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_SendGoal_Request *
clip_msgs__action__GetFeatures_SendGoal_Request__create();

/// Destroy action/GetFeatures message.
/**
 * It calls
 * clip_msgs__action__GetFeatures_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_SendGoal_Request__destroy(clip_msgs__action__GetFeatures_SendGoal_Request * msg);

/// Check for action/GetFeatures message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_SendGoal_Request__are_equal(const clip_msgs__action__GetFeatures_SendGoal_Request * lhs, const clip_msgs__action__GetFeatures_SendGoal_Request * rhs);

/// Copy a action/GetFeatures message.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_SendGoal_Request__copy(
  const clip_msgs__action__GetFeatures_SendGoal_Request * input,
  clip_msgs__action__GetFeatures_SendGoal_Request * output);

/// Initialize array of action/GetFeatures messages.
/**
 * It allocates the memory for the number of elements and calls
 * clip_msgs__action__GetFeatures_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_SendGoal_Request__Sequence__init(clip_msgs__action__GetFeatures_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_SendGoal_Request__Sequence__fini(clip_msgs__action__GetFeatures_SendGoal_Request__Sequence * array);

/// Create array of action/GetFeatures messages.
/**
 * It allocates the memory for the array and calls
 * clip_msgs__action__GetFeatures_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_SendGoal_Request__Sequence *
clip_msgs__action__GetFeatures_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_SendGoal_Request__Sequence__destroy(clip_msgs__action__GetFeatures_SendGoal_Request__Sequence * array);

/// Check for action/GetFeatures message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_SendGoal_Request__Sequence__are_equal(const clip_msgs__action__GetFeatures_SendGoal_Request__Sequence * lhs, const clip_msgs__action__GetFeatures_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/GetFeatures messages.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_SendGoal_Request__Sequence__copy(
  const clip_msgs__action__GetFeatures_SendGoal_Request__Sequence * input,
  clip_msgs__action__GetFeatures_SendGoal_Request__Sequence * output);

/// Initialize action/GetFeatures message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * clip_msgs__action__GetFeatures_SendGoal_Response
 * )) before or use
 * clip_msgs__action__GetFeatures_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_SendGoal_Response__init(clip_msgs__action__GetFeatures_SendGoal_Response * msg);

/// Finalize action/GetFeatures message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_SendGoal_Response__fini(clip_msgs__action__GetFeatures_SendGoal_Response * msg);

/// Create action/GetFeatures message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * clip_msgs__action__GetFeatures_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_SendGoal_Response *
clip_msgs__action__GetFeatures_SendGoal_Response__create();

/// Destroy action/GetFeatures message.
/**
 * It calls
 * clip_msgs__action__GetFeatures_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_SendGoal_Response__destroy(clip_msgs__action__GetFeatures_SendGoal_Response * msg);

/// Check for action/GetFeatures message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_SendGoal_Response__are_equal(const clip_msgs__action__GetFeatures_SendGoal_Response * lhs, const clip_msgs__action__GetFeatures_SendGoal_Response * rhs);

/// Copy a action/GetFeatures message.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_SendGoal_Response__copy(
  const clip_msgs__action__GetFeatures_SendGoal_Response * input,
  clip_msgs__action__GetFeatures_SendGoal_Response * output);

/// Initialize array of action/GetFeatures messages.
/**
 * It allocates the memory for the number of elements and calls
 * clip_msgs__action__GetFeatures_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_SendGoal_Response__Sequence__init(clip_msgs__action__GetFeatures_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_SendGoal_Response__Sequence__fini(clip_msgs__action__GetFeatures_SendGoal_Response__Sequence * array);

/// Create array of action/GetFeatures messages.
/**
 * It allocates the memory for the array and calls
 * clip_msgs__action__GetFeatures_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_SendGoal_Response__Sequence *
clip_msgs__action__GetFeatures_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_SendGoal_Response__Sequence__destroy(clip_msgs__action__GetFeatures_SendGoal_Response__Sequence * array);

/// Check for action/GetFeatures message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_SendGoal_Response__Sequence__are_equal(const clip_msgs__action__GetFeatures_SendGoal_Response__Sequence * lhs, const clip_msgs__action__GetFeatures_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/GetFeatures messages.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_SendGoal_Response__Sequence__copy(
  const clip_msgs__action__GetFeatures_SendGoal_Response__Sequence * input,
  clip_msgs__action__GetFeatures_SendGoal_Response__Sequence * output);

/// Initialize action/GetFeatures message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * clip_msgs__action__GetFeatures_GetResult_Request
 * )) before or use
 * clip_msgs__action__GetFeatures_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_GetResult_Request__init(clip_msgs__action__GetFeatures_GetResult_Request * msg);

/// Finalize action/GetFeatures message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_GetResult_Request__fini(clip_msgs__action__GetFeatures_GetResult_Request * msg);

/// Create action/GetFeatures message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * clip_msgs__action__GetFeatures_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_GetResult_Request *
clip_msgs__action__GetFeatures_GetResult_Request__create();

/// Destroy action/GetFeatures message.
/**
 * It calls
 * clip_msgs__action__GetFeatures_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_GetResult_Request__destroy(clip_msgs__action__GetFeatures_GetResult_Request * msg);

/// Check for action/GetFeatures message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_GetResult_Request__are_equal(const clip_msgs__action__GetFeatures_GetResult_Request * lhs, const clip_msgs__action__GetFeatures_GetResult_Request * rhs);

/// Copy a action/GetFeatures message.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_GetResult_Request__copy(
  const clip_msgs__action__GetFeatures_GetResult_Request * input,
  clip_msgs__action__GetFeatures_GetResult_Request * output);

/// Initialize array of action/GetFeatures messages.
/**
 * It allocates the memory for the number of elements and calls
 * clip_msgs__action__GetFeatures_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_GetResult_Request__Sequence__init(clip_msgs__action__GetFeatures_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_GetResult_Request__Sequence__fini(clip_msgs__action__GetFeatures_GetResult_Request__Sequence * array);

/// Create array of action/GetFeatures messages.
/**
 * It allocates the memory for the array and calls
 * clip_msgs__action__GetFeatures_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_GetResult_Request__Sequence *
clip_msgs__action__GetFeatures_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_GetResult_Request__Sequence__destroy(clip_msgs__action__GetFeatures_GetResult_Request__Sequence * array);

/// Check for action/GetFeatures message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_GetResult_Request__Sequence__are_equal(const clip_msgs__action__GetFeatures_GetResult_Request__Sequence * lhs, const clip_msgs__action__GetFeatures_GetResult_Request__Sequence * rhs);

/// Copy an array of action/GetFeatures messages.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_GetResult_Request__Sequence__copy(
  const clip_msgs__action__GetFeatures_GetResult_Request__Sequence * input,
  clip_msgs__action__GetFeatures_GetResult_Request__Sequence * output);

/// Initialize action/GetFeatures message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * clip_msgs__action__GetFeatures_GetResult_Response
 * )) before or use
 * clip_msgs__action__GetFeatures_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_GetResult_Response__init(clip_msgs__action__GetFeatures_GetResult_Response * msg);

/// Finalize action/GetFeatures message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_GetResult_Response__fini(clip_msgs__action__GetFeatures_GetResult_Response * msg);

/// Create action/GetFeatures message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * clip_msgs__action__GetFeatures_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_GetResult_Response *
clip_msgs__action__GetFeatures_GetResult_Response__create();

/// Destroy action/GetFeatures message.
/**
 * It calls
 * clip_msgs__action__GetFeatures_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_GetResult_Response__destroy(clip_msgs__action__GetFeatures_GetResult_Response * msg);

/// Check for action/GetFeatures message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_GetResult_Response__are_equal(const clip_msgs__action__GetFeatures_GetResult_Response * lhs, const clip_msgs__action__GetFeatures_GetResult_Response * rhs);

/// Copy a action/GetFeatures message.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_GetResult_Response__copy(
  const clip_msgs__action__GetFeatures_GetResult_Response * input,
  clip_msgs__action__GetFeatures_GetResult_Response * output);

/// Initialize array of action/GetFeatures messages.
/**
 * It allocates the memory for the number of elements and calls
 * clip_msgs__action__GetFeatures_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_GetResult_Response__Sequence__init(clip_msgs__action__GetFeatures_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_GetResult_Response__Sequence__fini(clip_msgs__action__GetFeatures_GetResult_Response__Sequence * array);

/// Create array of action/GetFeatures messages.
/**
 * It allocates the memory for the array and calls
 * clip_msgs__action__GetFeatures_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_GetResult_Response__Sequence *
clip_msgs__action__GetFeatures_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_GetResult_Response__Sequence__destroy(clip_msgs__action__GetFeatures_GetResult_Response__Sequence * array);

/// Check for action/GetFeatures message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_GetResult_Response__Sequence__are_equal(const clip_msgs__action__GetFeatures_GetResult_Response__Sequence * lhs, const clip_msgs__action__GetFeatures_GetResult_Response__Sequence * rhs);

/// Copy an array of action/GetFeatures messages.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_GetResult_Response__Sequence__copy(
  const clip_msgs__action__GetFeatures_GetResult_Response__Sequence * input,
  clip_msgs__action__GetFeatures_GetResult_Response__Sequence * output);

/// Initialize action/GetFeatures message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * clip_msgs__action__GetFeatures_FeedbackMessage
 * )) before or use
 * clip_msgs__action__GetFeatures_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_FeedbackMessage__init(clip_msgs__action__GetFeatures_FeedbackMessage * msg);

/// Finalize action/GetFeatures message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_FeedbackMessage__fini(clip_msgs__action__GetFeatures_FeedbackMessage * msg);

/// Create action/GetFeatures message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * clip_msgs__action__GetFeatures_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_FeedbackMessage *
clip_msgs__action__GetFeatures_FeedbackMessage__create();

/// Destroy action/GetFeatures message.
/**
 * It calls
 * clip_msgs__action__GetFeatures_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_FeedbackMessage__destroy(clip_msgs__action__GetFeatures_FeedbackMessage * msg);

/// Check for action/GetFeatures message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_FeedbackMessage__are_equal(const clip_msgs__action__GetFeatures_FeedbackMessage * lhs, const clip_msgs__action__GetFeatures_FeedbackMessage * rhs);

/// Copy a action/GetFeatures message.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_FeedbackMessage__copy(
  const clip_msgs__action__GetFeatures_FeedbackMessage * input,
  clip_msgs__action__GetFeatures_FeedbackMessage * output);

/// Initialize array of action/GetFeatures messages.
/**
 * It allocates the memory for the number of elements and calls
 * clip_msgs__action__GetFeatures_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_FeedbackMessage__Sequence__init(clip_msgs__action__GetFeatures_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_FeedbackMessage__Sequence__fini(clip_msgs__action__GetFeatures_FeedbackMessage__Sequence * array);

/// Create array of action/GetFeatures messages.
/**
 * It allocates the memory for the array and calls
 * clip_msgs__action__GetFeatures_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
clip_msgs__action__GetFeatures_FeedbackMessage__Sequence *
clip_msgs__action__GetFeatures_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/GetFeatures messages.
/**
 * It calls
 * clip_msgs__action__GetFeatures_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
void
clip_msgs__action__GetFeatures_FeedbackMessage__Sequence__destroy(clip_msgs__action__GetFeatures_FeedbackMessage__Sequence * array);

/// Check for action/GetFeatures message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_FeedbackMessage__Sequence__are_equal(const clip_msgs__action__GetFeatures_FeedbackMessage__Sequence * lhs, const clip_msgs__action__GetFeatures_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/GetFeatures messages.
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
ROSIDL_GENERATOR_C_PUBLIC_clip_msgs
bool
clip_msgs__action__GetFeatures_FeedbackMessage__Sequence__copy(
  const clip_msgs__action__GetFeatures_FeedbackMessage__Sequence * input,
  clip_msgs__action__GetFeatures_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__FUNCTIONS_H_
