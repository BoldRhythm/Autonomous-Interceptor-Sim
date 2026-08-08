// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/FailureInjection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/failure_injection__functions.h"
#include "px4_msgs/msg/detail/failure_injection__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FailureInjection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::FailureInjection(_init);
}

void FailureInjection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::FailureInjection *>(message_memory);
  typed_message->~FailureInjection();
}

size_t size_function__FailureInjection__unit(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__FailureInjection__unit(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__FailureInjection__unit(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__FailureInjection__unit(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__FailureInjection__unit(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__FailureInjection__unit(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__FailureInjection__unit(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__FailureInjection__instance_mask(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__FailureInjection__instance_mask(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__FailureInjection__instance_mask(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__FailureInjection__instance_mask(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__FailureInjection__instance_mask(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__FailureInjection__instance_mask(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__FailureInjection__instance_mask(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

size_t size_function__FailureInjection__failure_type(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__FailureInjection__failure_type(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__FailureInjection__failure_type(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__FailureInjection__failure_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__FailureInjection__failure_type(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__FailureInjection__failure_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__FailureInjection__failure_type(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FailureInjection_message_member_array[5] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::FailureInjection, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::FailureInjection, count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "unit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::FailureInjection, unit),  // bytes offset in struct
    nullptr,  // default value
    size_function__FailureInjection__unit,  // size() function pointer
    get_const_function__FailureInjection__unit,  // get_const(index) function pointer
    get_function__FailureInjection__unit,  // get(index) function pointer
    fetch_function__FailureInjection__unit,  // fetch(index, &value) function pointer
    assign_function__FailureInjection__unit,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "instance_mask",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::FailureInjection, instance_mask),  // bytes offset in struct
    nullptr,  // default value
    size_function__FailureInjection__instance_mask,  // size() function pointer
    get_const_function__FailureInjection__instance_mask,  // get_const(index) function pointer
    get_function__FailureInjection__instance_mask,  // get(index) function pointer
    fetch_function__FailureInjection__instance_mask,  // fetch(index, &value) function pointer
    assign_function__FailureInjection__instance_mask,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "failure_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::FailureInjection, failure_type),  // bytes offset in struct
    nullptr,  // default value
    size_function__FailureInjection__failure_type,  // size() function pointer
    get_const_function__FailureInjection__failure_type,  // get_const(index) function pointer
    get_function__FailureInjection__failure_type,  // get(index) function pointer
    fetch_function__FailureInjection__failure_type,  // fetch(index, &value) function pointer
    assign_function__FailureInjection__failure_type,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FailureInjection_message_members = {
  "px4_msgs::msg",  // message namespace
  "FailureInjection",  // message name
  5,  // number of fields
  sizeof(px4_msgs::msg::FailureInjection),
  false,  // has_any_key_member_
  FailureInjection_message_member_array,  // message members
  FailureInjection_init_function,  // function to initialize message memory (memory has to be allocated)
  FailureInjection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FailureInjection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FailureInjection_message_members,
  get_message_typesupport_handle_function,
  &px4_msgs__msg__FailureInjection__get_type_hash,
  &px4_msgs__msg__FailureInjection__get_type_description,
  &px4_msgs__msg__FailureInjection__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::FailureInjection>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::FailureInjection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, FailureInjection)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::FailureInjection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
