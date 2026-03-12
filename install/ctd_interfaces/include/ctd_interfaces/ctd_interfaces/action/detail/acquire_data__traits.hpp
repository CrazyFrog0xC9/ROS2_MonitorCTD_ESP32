// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ctd_interfaces:action/AcquireData.idl
// generated code does not contain a copyright notice

#ifndef CTD_INTERFACES__ACTION__DETAIL__ACQUIRE_DATA__TRAITS_HPP_
#define CTD_INTERFACES__ACTION__DETAIL__ACQUIRE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ctd_interfaces/action/detail/acquire_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ctd_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const AcquireData_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << ", ";
  }

  // member: duration_sec
  {
    out << "duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AcquireData_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << "\n";
  }

  // member: duration_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcquireData_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ctd_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ctd_interfaces::action::AcquireData_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ctd_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ctd_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ctd_interfaces::action::AcquireData_Goal & msg)
{
  return ctd_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ctd_interfaces::action::AcquireData_Goal>()
{
  return "ctd_interfaces::action::AcquireData_Goal";
}

template<>
inline const char * name<ctd_interfaces::action::AcquireData_Goal>()
{
  return "ctd_interfaces/action/AcquireData_Goal";
}

template<>
struct has_fixed_size<ctd_interfaces::action::AcquireData_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ctd_interfaces::action::AcquireData_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ctd_interfaces::action::AcquireData_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ctd_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const AcquireData_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: summary
  {
    out << "summary: ";
    rosidl_generator_traits::value_to_yaml(msg.summary, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AcquireData_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: summary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "summary: ";
    rosidl_generator_traits::value_to_yaml(msg.summary, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcquireData_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ctd_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ctd_interfaces::action::AcquireData_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ctd_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ctd_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ctd_interfaces::action::AcquireData_Result & msg)
{
  return ctd_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ctd_interfaces::action::AcquireData_Result>()
{
  return "ctd_interfaces::action::AcquireData_Result";
}

template<>
inline const char * name<ctd_interfaces::action::AcquireData_Result>()
{
  return "ctd_interfaces/action/AcquireData_Result";
}

template<>
struct has_fixed_size<ctd_interfaces::action::AcquireData_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ctd_interfaces::action::AcquireData_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ctd_interfaces::action::AcquireData_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ctd_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const AcquireData_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AcquireData_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcquireData_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ctd_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ctd_interfaces::action::AcquireData_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ctd_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ctd_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ctd_interfaces::action::AcquireData_Feedback & msg)
{
  return ctd_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ctd_interfaces::action::AcquireData_Feedback>()
{
  return "ctd_interfaces::action::AcquireData_Feedback";
}

template<>
inline const char * name<ctd_interfaces::action::AcquireData_Feedback>()
{
  return "ctd_interfaces/action/AcquireData_Feedback";
}

template<>
struct has_fixed_size<ctd_interfaces::action::AcquireData_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ctd_interfaces::action::AcquireData_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ctd_interfaces::action::AcquireData_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ctd_interfaces/action/detail/acquire_data__traits.hpp"

namespace ctd_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const AcquireData_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AcquireData_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcquireData_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ctd_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ctd_interfaces::action::AcquireData_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ctd_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ctd_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ctd_interfaces::action::AcquireData_SendGoal_Request & msg)
{
  return ctd_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ctd_interfaces::action::AcquireData_SendGoal_Request>()
{
  return "ctd_interfaces::action::AcquireData_SendGoal_Request";
}

template<>
inline const char * name<ctd_interfaces::action::AcquireData_SendGoal_Request>()
{
  return "ctd_interfaces/action/AcquireData_SendGoal_Request";
}

template<>
struct has_fixed_size<ctd_interfaces::action::AcquireData_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ctd_interfaces::action::AcquireData_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ctd_interfaces::action::AcquireData_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ctd_interfaces::action::AcquireData_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ctd_interfaces::action::AcquireData_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ctd_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const AcquireData_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AcquireData_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcquireData_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ctd_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ctd_interfaces::action::AcquireData_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ctd_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ctd_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ctd_interfaces::action::AcquireData_SendGoal_Response & msg)
{
  return ctd_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ctd_interfaces::action::AcquireData_SendGoal_Response>()
{
  return "ctd_interfaces::action::AcquireData_SendGoal_Response";
}

template<>
inline const char * name<ctd_interfaces::action::AcquireData_SendGoal_Response>()
{
  return "ctd_interfaces/action/AcquireData_SendGoal_Response";
}

template<>
struct has_fixed_size<ctd_interfaces::action::AcquireData_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ctd_interfaces::action::AcquireData_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ctd_interfaces::action::AcquireData_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ctd_interfaces::action::AcquireData_SendGoal>()
{
  return "ctd_interfaces::action::AcquireData_SendGoal";
}

template<>
inline const char * name<ctd_interfaces::action::AcquireData_SendGoal>()
{
  return "ctd_interfaces/action/AcquireData_SendGoal";
}

template<>
struct has_fixed_size<ctd_interfaces::action::AcquireData_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ctd_interfaces::action::AcquireData_SendGoal_Request>::value &&
    has_fixed_size<ctd_interfaces::action::AcquireData_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ctd_interfaces::action::AcquireData_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ctd_interfaces::action::AcquireData_SendGoal_Request>::value &&
    has_bounded_size<ctd_interfaces::action::AcquireData_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ctd_interfaces::action::AcquireData_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ctd_interfaces::action::AcquireData_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ctd_interfaces::action::AcquireData_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace ctd_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const AcquireData_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AcquireData_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcquireData_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ctd_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ctd_interfaces::action::AcquireData_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ctd_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ctd_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ctd_interfaces::action::AcquireData_GetResult_Request & msg)
{
  return ctd_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ctd_interfaces::action::AcquireData_GetResult_Request>()
{
  return "ctd_interfaces::action::AcquireData_GetResult_Request";
}

template<>
inline const char * name<ctd_interfaces::action::AcquireData_GetResult_Request>()
{
  return "ctd_interfaces/action/AcquireData_GetResult_Request";
}

template<>
struct has_fixed_size<ctd_interfaces::action::AcquireData_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ctd_interfaces::action::AcquireData_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ctd_interfaces::action::AcquireData_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ctd_interfaces/action/detail/acquire_data__traits.hpp"

namespace ctd_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const AcquireData_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AcquireData_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcquireData_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ctd_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ctd_interfaces::action::AcquireData_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ctd_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ctd_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ctd_interfaces::action::AcquireData_GetResult_Response & msg)
{
  return ctd_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ctd_interfaces::action::AcquireData_GetResult_Response>()
{
  return "ctd_interfaces::action::AcquireData_GetResult_Response";
}

template<>
inline const char * name<ctd_interfaces::action::AcquireData_GetResult_Response>()
{
  return "ctd_interfaces/action/AcquireData_GetResult_Response";
}

template<>
struct has_fixed_size<ctd_interfaces::action::AcquireData_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ctd_interfaces::action::AcquireData_Result>::value> {};

template<>
struct has_bounded_size<ctd_interfaces::action::AcquireData_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ctd_interfaces::action::AcquireData_Result>::value> {};

template<>
struct is_message<ctd_interfaces::action::AcquireData_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ctd_interfaces::action::AcquireData_GetResult>()
{
  return "ctd_interfaces::action::AcquireData_GetResult";
}

template<>
inline const char * name<ctd_interfaces::action::AcquireData_GetResult>()
{
  return "ctd_interfaces/action/AcquireData_GetResult";
}

template<>
struct has_fixed_size<ctd_interfaces::action::AcquireData_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ctd_interfaces::action::AcquireData_GetResult_Request>::value &&
    has_fixed_size<ctd_interfaces::action::AcquireData_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ctd_interfaces::action::AcquireData_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ctd_interfaces::action::AcquireData_GetResult_Request>::value &&
    has_bounded_size<ctd_interfaces::action::AcquireData_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ctd_interfaces::action::AcquireData_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ctd_interfaces::action::AcquireData_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ctd_interfaces::action::AcquireData_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ctd_interfaces/action/detail/acquire_data__traits.hpp"

namespace ctd_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const AcquireData_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AcquireData_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcquireData_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ctd_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ctd_interfaces::action::AcquireData_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ctd_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ctd_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ctd_interfaces::action::AcquireData_FeedbackMessage & msg)
{
  return ctd_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ctd_interfaces::action::AcquireData_FeedbackMessage>()
{
  return "ctd_interfaces::action::AcquireData_FeedbackMessage";
}

template<>
inline const char * name<ctd_interfaces::action::AcquireData_FeedbackMessage>()
{
  return "ctd_interfaces/action/AcquireData_FeedbackMessage";
}

template<>
struct has_fixed_size<ctd_interfaces::action::AcquireData_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ctd_interfaces::action::AcquireData_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ctd_interfaces::action::AcquireData_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ctd_interfaces::action::AcquireData_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ctd_interfaces::action::AcquireData_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ctd_interfaces::action::AcquireData>
  : std::true_type
{
};

template<>
struct is_action_goal<ctd_interfaces::action::AcquireData_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ctd_interfaces::action::AcquireData_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ctd_interfaces::action::AcquireData_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CTD_INTERFACES__ACTION__DETAIL__ACQUIRE_DATA__TRAITS_HPP_
