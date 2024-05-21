// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4:msg/DebugKeyValue.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4/msg/detail/debug_key_value__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DebugKeyValue_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4::msg::DebugKeyValue(_init);
}

void DebugKeyValue_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4::msg::DebugKeyValue *>(message_memory);
  typed_message->~DebugKeyValue();
}

size_t size_function__DebugKeyValue__key(const void * untyped_member)
{
  (void)untyped_member;
  return 10;
}

const void * get_const_function__DebugKeyValue__key(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 10> *>(untyped_member);
  return &member[index];
}

void * get_function__DebugKeyValue__key(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 10> *>(untyped_member);
  return &member[index];
}

void fetch_function__DebugKeyValue__key(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__DebugKeyValue__key(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__DebugKeyValue__key(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__DebugKeyValue__key(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DebugKeyValue_message_member_array[3] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4::msg::DebugKeyValue, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "key",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    10,  // array size
    false,  // is upper bound
    offsetof(px4::msg::DebugKeyValue, key),  // bytes offset in struct
    nullptr,  // default value
    size_function__DebugKeyValue__key,  // size() function pointer
    get_const_function__DebugKeyValue__key,  // get_const(index) function pointer
    get_function__DebugKeyValue__key,  // get(index) function pointer
    fetch_function__DebugKeyValue__key,  // fetch(index, &value) function pointer
    assign_function__DebugKeyValue__key,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4::msg::DebugKeyValue, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DebugKeyValue_message_members = {
  "px4::msg",  // message namespace
  "DebugKeyValue",  // message name
  3,  // number of fields
  sizeof(px4::msg::DebugKeyValue),
  DebugKeyValue_message_member_array,  // message members
  DebugKeyValue_init_function,  // function to initialize message memory (memory has to be allocated)
  DebugKeyValue_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DebugKeyValue_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DebugKeyValue_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4::msg::DebugKeyValue>()
{
  return &::px4::msg::rosidl_typesupport_introspection_cpp::DebugKeyValue_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4, msg, DebugKeyValue)() {
  return &::px4::msg::rosidl_typesupport_introspection_cpp::DebugKeyValue_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
