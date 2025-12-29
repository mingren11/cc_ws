// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audio_msg:msg/AudioEventType.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__AUDIO_EVENT_TYPE__STRUCT_H_
#define AUDIO_MSG__MSG__DETAIL__AUDIO_EVENT_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EVENT_WKPNORMAL'.
/**
  * smart audio frame event type
  * event type,  1: normal wakeup  2: one shot wakeup  3：asr detect timeout  4: vad begin  5：vad middle  6：vad end
 */
enum
{
  audio_msg__msg__AudioEventType__EVENT_WKPNORMAL = 1
};

/// Constant 'EVENT_WKPONESHOT'.
enum
{
  audio_msg__msg__AudioEventType__EVENT_WKPONESHOT = 2
};

/// Constant 'EVENT_WAITASRTIMEOUT'.
enum
{
  audio_msg__msg__AudioEventType__EVENT_WAITASRTIMEOUT = 3
};

/// Constant 'EVENT_VADBEGIN'.
enum
{
  audio_msg__msg__AudioEventType__EVENT_VADBEGIN = 4
};

/// Constant 'EVENT_VADMID'.
enum
{
  audio_msg__msg__AudioEventType__EVENT_VADMID = 5
};

/// Constant 'EVENT_VADEND'.
enum
{
  audio_msg__msg__AudioEventType__EVENT_VADEND = 6
};

/// Struct defined in msg/AudioEventType in the package audio_msg.
/**
  * Copyright (c) 2024，D-Robotics.
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *     http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
 */
typedef struct audio_msg__msg__AudioEventType
{
  uint8_t value;
} audio_msg__msg__AudioEventType;

// Struct for a sequence of audio_msg__msg__AudioEventType.
typedef struct audio_msg__msg__AudioEventType__Sequence
{
  audio_msg__msg__AudioEventType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_msg__msg__AudioEventType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_MSG__MSG__DETAIL__AUDIO_EVENT_TYPE__STRUCT_H_
