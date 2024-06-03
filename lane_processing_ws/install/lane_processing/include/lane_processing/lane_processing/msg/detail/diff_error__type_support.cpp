// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lane_processing:msg/DiffError.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lane_processing/msg/detail/diff_error__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lane_processing
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DiffError_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lane_processing::msg::DiffError(_init);
}

void DiffError_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lane_processing::msg::DiffError *>(message_memory);
  typed_message->~DiffError();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DiffError_message_member_array[2] = {
  {
    "error_ang",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_processing::msg::DiffError, error_ang),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_dist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_processing::msg::DiffError, error_dist),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DiffError_message_members = {
  "lane_processing::msg",  // message namespace
  "DiffError",  // message name
  2,  // number of fields
  sizeof(lane_processing::msg::DiffError),
  DiffError_message_member_array,  // message members
  DiffError_init_function,  // function to initialize message memory (memory has to be allocated)
  DiffError_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DiffError_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DiffError_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lane_processing


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lane_processing::msg::DiffError>()
{
  return &::lane_processing::msg::rosidl_typesupport_introspection_cpp::DiffError_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lane_processing, msg, DiffError)() {
  return &::lane_processing::msg::rosidl_typesupport_introspection_cpp::DiffError_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
