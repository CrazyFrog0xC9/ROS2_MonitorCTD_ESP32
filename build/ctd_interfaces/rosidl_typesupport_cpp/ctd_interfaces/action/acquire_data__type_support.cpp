// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ctd_interfaces:action/AcquireData.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ctd_interfaces/action/detail/acquire_data__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ctd_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AcquireData_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AcquireData_Goal_type_support_ids_t;

static const _AcquireData_Goal_type_support_ids_t _AcquireData_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AcquireData_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AcquireData_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AcquireData_Goal_type_support_symbol_names_t _AcquireData_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ctd_interfaces, action, AcquireData_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ctd_interfaces, action, AcquireData_Goal)),
  }
};

typedef struct _AcquireData_Goal_type_support_data_t
{
  void * data[2];
} _AcquireData_Goal_type_support_data_t;

static _AcquireData_Goal_type_support_data_t _AcquireData_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AcquireData_Goal_message_typesupport_map = {
  2,
  "ctd_interfaces",
  &_AcquireData_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_AcquireData_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_AcquireData_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AcquireData_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AcquireData_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ctd_interfaces::action::AcquireData_Goal>()
{
  return &::ctd_interfaces::action::rosidl_typesupport_cpp::AcquireData_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ctd_interfaces, action, AcquireData_Goal)() {
  return get_message_type_support_handle<ctd_interfaces::action::AcquireData_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ctd_interfaces/action/detail/acquire_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ctd_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AcquireData_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AcquireData_Result_type_support_ids_t;

static const _AcquireData_Result_type_support_ids_t _AcquireData_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AcquireData_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AcquireData_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AcquireData_Result_type_support_symbol_names_t _AcquireData_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ctd_interfaces, action, AcquireData_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ctd_interfaces, action, AcquireData_Result)),
  }
};

typedef struct _AcquireData_Result_type_support_data_t
{
  void * data[2];
} _AcquireData_Result_type_support_data_t;

static _AcquireData_Result_type_support_data_t _AcquireData_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AcquireData_Result_message_typesupport_map = {
  2,
  "ctd_interfaces",
  &_AcquireData_Result_message_typesupport_ids.typesupport_identifier[0],
  &_AcquireData_Result_message_typesupport_symbol_names.symbol_name[0],
  &_AcquireData_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AcquireData_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AcquireData_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ctd_interfaces::action::AcquireData_Result>()
{
  return &::ctd_interfaces::action::rosidl_typesupport_cpp::AcquireData_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ctd_interfaces, action, AcquireData_Result)() {
  return get_message_type_support_handle<ctd_interfaces::action::AcquireData_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ctd_interfaces/action/detail/acquire_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ctd_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AcquireData_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AcquireData_Feedback_type_support_ids_t;

static const _AcquireData_Feedback_type_support_ids_t _AcquireData_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AcquireData_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AcquireData_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AcquireData_Feedback_type_support_symbol_names_t _AcquireData_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ctd_interfaces, action, AcquireData_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ctd_interfaces, action, AcquireData_Feedback)),
  }
};

typedef struct _AcquireData_Feedback_type_support_data_t
{
  void * data[2];
} _AcquireData_Feedback_type_support_data_t;

static _AcquireData_Feedback_type_support_data_t _AcquireData_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AcquireData_Feedback_message_typesupport_map = {
  2,
  "ctd_interfaces",
  &_AcquireData_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_AcquireData_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_AcquireData_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AcquireData_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AcquireData_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ctd_interfaces::action::AcquireData_Feedback>()
{
  return &::ctd_interfaces::action::rosidl_typesupport_cpp::AcquireData_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ctd_interfaces, action, AcquireData_Feedback)() {
  return get_message_type_support_handle<ctd_interfaces::action::AcquireData_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ctd_interfaces/action/detail/acquire_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ctd_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AcquireData_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AcquireData_SendGoal_Request_type_support_ids_t;

static const _AcquireData_SendGoal_Request_type_support_ids_t _AcquireData_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AcquireData_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AcquireData_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AcquireData_SendGoal_Request_type_support_symbol_names_t _AcquireData_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ctd_interfaces, action, AcquireData_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ctd_interfaces, action, AcquireData_SendGoal_Request)),
  }
};

typedef struct _AcquireData_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _AcquireData_SendGoal_Request_type_support_data_t;

static _AcquireData_SendGoal_Request_type_support_data_t _AcquireData_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AcquireData_SendGoal_Request_message_typesupport_map = {
  2,
  "ctd_interfaces",
  &_AcquireData_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AcquireData_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AcquireData_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AcquireData_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AcquireData_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ctd_interfaces::action::AcquireData_SendGoal_Request>()
{
  return &::ctd_interfaces::action::rosidl_typesupport_cpp::AcquireData_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ctd_interfaces, action, AcquireData_SendGoal_Request)() {
  return get_message_type_support_handle<ctd_interfaces::action::AcquireData_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ctd_interfaces/action/detail/acquire_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ctd_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AcquireData_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AcquireData_SendGoal_Response_type_support_ids_t;

static const _AcquireData_SendGoal_Response_type_support_ids_t _AcquireData_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AcquireData_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AcquireData_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AcquireData_SendGoal_Response_type_support_symbol_names_t _AcquireData_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ctd_interfaces, action, AcquireData_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ctd_interfaces, action, AcquireData_SendGoal_Response)),
  }
};

typedef struct _AcquireData_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _AcquireData_SendGoal_Response_type_support_data_t;

static _AcquireData_SendGoal_Response_type_support_data_t _AcquireData_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AcquireData_SendGoal_Response_message_typesupport_map = {
  2,
  "ctd_interfaces",
  &_AcquireData_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AcquireData_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AcquireData_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AcquireData_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AcquireData_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ctd_interfaces::action::AcquireData_SendGoal_Response>()
{
  return &::ctd_interfaces::action::rosidl_typesupport_cpp::AcquireData_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ctd_interfaces, action, AcquireData_SendGoal_Response)() {
  return get_message_type_support_handle<ctd_interfaces::action::AcquireData_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ctd_interfaces/action/detail/acquire_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ctd_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AcquireData_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AcquireData_SendGoal_type_support_ids_t;

static const _AcquireData_SendGoal_type_support_ids_t _AcquireData_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AcquireData_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AcquireData_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AcquireData_SendGoal_type_support_symbol_names_t _AcquireData_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ctd_interfaces, action, AcquireData_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ctd_interfaces, action, AcquireData_SendGoal)),
  }
};

typedef struct _AcquireData_SendGoal_type_support_data_t
{
  void * data[2];
} _AcquireData_SendGoal_type_support_data_t;

static _AcquireData_SendGoal_type_support_data_t _AcquireData_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AcquireData_SendGoal_service_typesupport_map = {
  2,
  "ctd_interfaces",
  &_AcquireData_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_AcquireData_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_AcquireData_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AcquireData_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AcquireData_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ctd_interfaces::action::AcquireData_SendGoal>()
{
  return &::ctd_interfaces::action::rosidl_typesupport_cpp::AcquireData_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ctd_interfaces, action, AcquireData_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ctd_interfaces::action::AcquireData_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ctd_interfaces/action/detail/acquire_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ctd_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AcquireData_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AcquireData_GetResult_Request_type_support_ids_t;

static const _AcquireData_GetResult_Request_type_support_ids_t _AcquireData_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AcquireData_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AcquireData_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AcquireData_GetResult_Request_type_support_symbol_names_t _AcquireData_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ctd_interfaces, action, AcquireData_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ctd_interfaces, action, AcquireData_GetResult_Request)),
  }
};

typedef struct _AcquireData_GetResult_Request_type_support_data_t
{
  void * data[2];
} _AcquireData_GetResult_Request_type_support_data_t;

static _AcquireData_GetResult_Request_type_support_data_t _AcquireData_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AcquireData_GetResult_Request_message_typesupport_map = {
  2,
  "ctd_interfaces",
  &_AcquireData_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AcquireData_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AcquireData_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AcquireData_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AcquireData_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ctd_interfaces::action::AcquireData_GetResult_Request>()
{
  return &::ctd_interfaces::action::rosidl_typesupport_cpp::AcquireData_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ctd_interfaces, action, AcquireData_GetResult_Request)() {
  return get_message_type_support_handle<ctd_interfaces::action::AcquireData_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ctd_interfaces/action/detail/acquire_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ctd_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AcquireData_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AcquireData_GetResult_Response_type_support_ids_t;

static const _AcquireData_GetResult_Response_type_support_ids_t _AcquireData_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AcquireData_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AcquireData_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AcquireData_GetResult_Response_type_support_symbol_names_t _AcquireData_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ctd_interfaces, action, AcquireData_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ctd_interfaces, action, AcquireData_GetResult_Response)),
  }
};

typedef struct _AcquireData_GetResult_Response_type_support_data_t
{
  void * data[2];
} _AcquireData_GetResult_Response_type_support_data_t;

static _AcquireData_GetResult_Response_type_support_data_t _AcquireData_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AcquireData_GetResult_Response_message_typesupport_map = {
  2,
  "ctd_interfaces",
  &_AcquireData_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AcquireData_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AcquireData_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AcquireData_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AcquireData_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ctd_interfaces::action::AcquireData_GetResult_Response>()
{
  return &::ctd_interfaces::action::rosidl_typesupport_cpp::AcquireData_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ctd_interfaces, action, AcquireData_GetResult_Response)() {
  return get_message_type_support_handle<ctd_interfaces::action::AcquireData_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ctd_interfaces/action/detail/acquire_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ctd_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AcquireData_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AcquireData_GetResult_type_support_ids_t;

static const _AcquireData_GetResult_type_support_ids_t _AcquireData_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AcquireData_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AcquireData_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AcquireData_GetResult_type_support_symbol_names_t _AcquireData_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ctd_interfaces, action, AcquireData_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ctd_interfaces, action, AcquireData_GetResult)),
  }
};

typedef struct _AcquireData_GetResult_type_support_data_t
{
  void * data[2];
} _AcquireData_GetResult_type_support_data_t;

static _AcquireData_GetResult_type_support_data_t _AcquireData_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AcquireData_GetResult_service_typesupport_map = {
  2,
  "ctd_interfaces",
  &_AcquireData_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_AcquireData_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_AcquireData_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AcquireData_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AcquireData_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ctd_interfaces::action::AcquireData_GetResult>()
{
  return &::ctd_interfaces::action::rosidl_typesupport_cpp::AcquireData_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ctd_interfaces, action, AcquireData_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ctd_interfaces::action::AcquireData_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ctd_interfaces/action/detail/acquire_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ctd_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AcquireData_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AcquireData_FeedbackMessage_type_support_ids_t;

static const _AcquireData_FeedbackMessage_type_support_ids_t _AcquireData_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AcquireData_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AcquireData_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AcquireData_FeedbackMessage_type_support_symbol_names_t _AcquireData_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ctd_interfaces, action, AcquireData_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ctd_interfaces, action, AcquireData_FeedbackMessage)),
  }
};

typedef struct _AcquireData_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _AcquireData_FeedbackMessage_type_support_data_t;

static _AcquireData_FeedbackMessage_type_support_data_t _AcquireData_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AcquireData_FeedbackMessage_message_typesupport_map = {
  2,
  "ctd_interfaces",
  &_AcquireData_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_AcquireData_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_AcquireData_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AcquireData_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AcquireData_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ctd_interfaces::action::AcquireData_FeedbackMessage>()
{
  return &::ctd_interfaces::action::rosidl_typesupport_cpp::AcquireData_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ctd_interfaces, action, AcquireData_FeedbackMessage)() {
  return get_message_type_support_handle<ctd_interfaces::action::AcquireData_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "ctd_interfaces/action/detail/acquire_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace ctd_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t AcquireData_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ctd_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<ctd_interfaces::action::AcquireData>()
{
  using ::ctd_interfaces::action::rosidl_typesupport_cpp::AcquireData_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  AcquireData_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::ctd_interfaces::action::AcquireData::Impl::SendGoalService>();
  AcquireData_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::ctd_interfaces::action::AcquireData::Impl::GetResultService>();
  AcquireData_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::ctd_interfaces::action::AcquireData::Impl::CancelGoalService>();
  AcquireData_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::ctd_interfaces::action::AcquireData::Impl::FeedbackMessage>();
  AcquireData_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::ctd_interfaces::action::AcquireData::Impl::GoalStatusMessage>();
  return &AcquireData_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, ctd_interfaces, action, AcquireData)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<ctd_interfaces::action::AcquireData>();
}

#ifdef __cplusplus
}
#endif
