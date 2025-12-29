// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hbm_img_msgs:msg/HbmH26XFrame.idl
// generated code does not contain a copyright notice

#ifndef HBM_IMG_MSGS__MSG__DETAIL__HBM_H26_X_FRAME__FUNCTIONS_H_
#define HBM_IMG_MSGS__MSG__DETAIL__HBM_H26_X_FRAME__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hbm_img_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hbm_img_msgs/msg/detail/hbm_h26_x_frame__struct.h"

/// Initialize msg/HbmH26XFrame message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hbm_img_msgs__msg__HbmH26XFrame
 * )) before or use
 * hbm_img_msgs__msg__HbmH26XFrame__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hbm_img_msgs
bool
hbm_img_msgs__msg__HbmH26XFrame__init(hbm_img_msgs__msg__HbmH26XFrame * msg);

/// Finalize msg/HbmH26XFrame message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hbm_img_msgs
void
hbm_img_msgs__msg__HbmH26XFrame__fini(hbm_img_msgs__msg__HbmH26XFrame * msg);

/// Create msg/HbmH26XFrame message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hbm_img_msgs__msg__HbmH26XFrame__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hbm_img_msgs
hbm_img_msgs__msg__HbmH26XFrame *
hbm_img_msgs__msg__HbmH26XFrame__create();

/// Destroy msg/HbmH26XFrame message.
/**
 * It calls
 * hbm_img_msgs__msg__HbmH26XFrame__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hbm_img_msgs
void
hbm_img_msgs__msg__HbmH26XFrame__destroy(hbm_img_msgs__msg__HbmH26XFrame * msg);

/// Check for msg/HbmH26XFrame message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hbm_img_msgs
bool
hbm_img_msgs__msg__HbmH26XFrame__are_equal(const hbm_img_msgs__msg__HbmH26XFrame * lhs, const hbm_img_msgs__msg__HbmH26XFrame * rhs);

/// Copy a msg/HbmH26XFrame message.
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
ROSIDL_GENERATOR_C_PUBLIC_hbm_img_msgs
bool
hbm_img_msgs__msg__HbmH26XFrame__copy(
  const hbm_img_msgs__msg__HbmH26XFrame * input,
  hbm_img_msgs__msg__HbmH26XFrame * output);

/// Initialize array of msg/HbmH26XFrame messages.
/**
 * It allocates the memory for the number of elements and calls
 * hbm_img_msgs__msg__HbmH26XFrame__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hbm_img_msgs
bool
hbm_img_msgs__msg__HbmH26XFrame__Sequence__init(hbm_img_msgs__msg__HbmH26XFrame__Sequence * array, size_t size);

/// Finalize array of msg/HbmH26XFrame messages.
/**
 * It calls
 * hbm_img_msgs__msg__HbmH26XFrame__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hbm_img_msgs
void
hbm_img_msgs__msg__HbmH26XFrame__Sequence__fini(hbm_img_msgs__msg__HbmH26XFrame__Sequence * array);

/// Create array of msg/HbmH26XFrame messages.
/**
 * It allocates the memory for the array and calls
 * hbm_img_msgs__msg__HbmH26XFrame__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hbm_img_msgs
hbm_img_msgs__msg__HbmH26XFrame__Sequence *
hbm_img_msgs__msg__HbmH26XFrame__Sequence__create(size_t size);

/// Destroy array of msg/HbmH26XFrame messages.
/**
 * It calls
 * hbm_img_msgs__msg__HbmH26XFrame__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hbm_img_msgs
void
hbm_img_msgs__msg__HbmH26XFrame__Sequence__destroy(hbm_img_msgs__msg__HbmH26XFrame__Sequence * array);

/// Check for msg/HbmH26XFrame message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hbm_img_msgs
bool
hbm_img_msgs__msg__HbmH26XFrame__Sequence__are_equal(const hbm_img_msgs__msg__HbmH26XFrame__Sequence * lhs, const hbm_img_msgs__msg__HbmH26XFrame__Sequence * rhs);

/// Copy an array of msg/HbmH26XFrame messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hbm_img_msgs
bool
hbm_img_msgs__msg__HbmH26XFrame__Sequence__copy(
  const hbm_img_msgs__msg__HbmH26XFrame__Sequence * input,
  hbm_img_msgs__msg__HbmH26XFrame__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HBM_IMG_MSGS__MSG__DETAIL__HBM_H26_X_FRAME__FUNCTIONS_H_
