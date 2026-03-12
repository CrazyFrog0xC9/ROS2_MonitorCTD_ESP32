// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ctd_interfaces:action/AcquireData.idl
// generated code does not contain a copyright notice

#ifndef CTD_INTERFACES__ACTION__DETAIL__ACQUIRE_DATA__STRUCT_H_
#define CTD_INTERFACES__ACTION__DETAIL__ACQUIRE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/AcquireData in the package ctd_interfaces.
typedef struct ctd_interfaces__action__AcquireData_Goal
{
  rosidl_runtime_c__String target;
  int32_t duration_sec;
} ctd_interfaces__action__AcquireData_Goal;

// Struct for a sequence of ctd_interfaces__action__AcquireData_Goal.
typedef struct ctd_interfaces__action__AcquireData_Goal__Sequence
{
  ctd_interfaces__action__AcquireData_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ctd_interfaces__action__AcquireData_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'summary'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/AcquireData in the package ctd_interfaces.
typedef struct ctd_interfaces__action__AcquireData_Result
{
  bool success;
  rosidl_runtime_c__String summary;
} ctd_interfaces__action__AcquireData_Result;

// Struct for a sequence of ctd_interfaces__action__AcquireData_Result.
typedef struct ctd_interfaces__action__AcquireData_Result__Sequence
{
  ctd_interfaces__action__AcquireData_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ctd_interfaces__action__AcquireData_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/AcquireData in the package ctd_interfaces.
typedef struct ctd_interfaces__action__AcquireData_Feedback
{
  float progress;
  rosidl_runtime_c__String status;
} ctd_interfaces__action__AcquireData_Feedback;

// Struct for a sequence of ctd_interfaces__action__AcquireData_Feedback.
typedef struct ctd_interfaces__action__AcquireData_Feedback__Sequence
{
  ctd_interfaces__action__AcquireData_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ctd_interfaces__action__AcquireData_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ctd_interfaces/action/detail/acquire_data__struct.h"

/// Struct defined in action/AcquireData in the package ctd_interfaces.
typedef struct ctd_interfaces__action__AcquireData_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ctd_interfaces__action__AcquireData_Goal goal;
} ctd_interfaces__action__AcquireData_SendGoal_Request;

// Struct for a sequence of ctd_interfaces__action__AcquireData_SendGoal_Request.
typedef struct ctd_interfaces__action__AcquireData_SendGoal_Request__Sequence
{
  ctd_interfaces__action__AcquireData_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ctd_interfaces__action__AcquireData_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AcquireData in the package ctd_interfaces.
typedef struct ctd_interfaces__action__AcquireData_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ctd_interfaces__action__AcquireData_SendGoal_Response;

// Struct for a sequence of ctd_interfaces__action__AcquireData_SendGoal_Response.
typedef struct ctd_interfaces__action__AcquireData_SendGoal_Response__Sequence
{
  ctd_interfaces__action__AcquireData_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ctd_interfaces__action__AcquireData_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AcquireData in the package ctd_interfaces.
typedef struct ctd_interfaces__action__AcquireData_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ctd_interfaces__action__AcquireData_GetResult_Request;

// Struct for a sequence of ctd_interfaces__action__AcquireData_GetResult_Request.
typedef struct ctd_interfaces__action__AcquireData_GetResult_Request__Sequence
{
  ctd_interfaces__action__AcquireData_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ctd_interfaces__action__AcquireData_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ctd_interfaces/action/detail/acquire_data__struct.h"

/// Struct defined in action/AcquireData in the package ctd_interfaces.
typedef struct ctd_interfaces__action__AcquireData_GetResult_Response
{
  int8_t status;
  ctd_interfaces__action__AcquireData_Result result;
} ctd_interfaces__action__AcquireData_GetResult_Response;

// Struct for a sequence of ctd_interfaces__action__AcquireData_GetResult_Response.
typedef struct ctd_interfaces__action__AcquireData_GetResult_Response__Sequence
{
  ctd_interfaces__action__AcquireData_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ctd_interfaces__action__AcquireData_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ctd_interfaces/action/detail/acquire_data__struct.h"

/// Struct defined in action/AcquireData in the package ctd_interfaces.
typedef struct ctd_interfaces__action__AcquireData_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ctd_interfaces__action__AcquireData_Feedback feedback;
} ctd_interfaces__action__AcquireData_FeedbackMessage;

// Struct for a sequence of ctd_interfaces__action__AcquireData_FeedbackMessage.
typedef struct ctd_interfaces__action__AcquireData_FeedbackMessage__Sequence
{
  ctd_interfaces__action__AcquireData_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ctd_interfaces__action__AcquireData_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CTD_INTERFACES__ACTION__DETAIL__ACQUIRE_DATA__STRUCT_H_
