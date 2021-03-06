// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packet.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "packet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace fira_message {
namespace sim_to_ref {

namespace {

const ::google::protobuf::Descriptor* Packet_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Packet_reflection_ = NULL;
const ::google::protobuf::Descriptor* Environment_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Environment_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_packet_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_packet_2eproto() {
  protobuf_AddDesc_packet_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "packet.proto");
  GOOGLE_CHECK(file != NULL);
  Packet_descriptor_ = file->message_type(0);
  static const int Packet_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, cmd_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, replace_),
  };
  Packet_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Packet_descriptor_,
      Packet::default_instance_,
      Packet_offsets_,
      -1,
      -1,
      -1,
      sizeof(Packet),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, _is_default_instance_));
  Environment_descriptor_ = file->message_type(1);
  static const int Environment_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Environment, step_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Environment, frame_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Environment, field_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Environment, goals_blue_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Environment, goals_yellow_),
  };
  Environment_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Environment_descriptor_,
      Environment::default_instance_,
      Environment_offsets_,
      -1,
      -1,
      -1,
      sizeof(Environment),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Environment, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Environment, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_packet_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Packet_descriptor_, &Packet::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Environment_descriptor_, &Environment::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_packet_2eproto() {
  delete Packet::default_instance_;
  delete Packet_reflection_;
  delete Environment::default_instance_;
  delete Environment_reflection_;
}

void protobuf_AddDesc_packet_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_packet_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::fira_message::sim_to_ref::protobuf_AddDesc_command_2eproto();
  ::fira_message::sim_to_ref::protobuf_AddDesc_replacement_2eproto();
  ::fira_message::protobuf_AddDesc_common_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014packet.proto\022\027fira_message.sim_to_ref\032"
    "\rcommand.proto\032\021replacement.proto\032\014commo"
    "n.proto\"o\n\006Packet\022.\n\003cmd\030\001 \001(\0132!.fira_me"
    "ssage.sim_to_ref.Commands\0225\n\007replace\030\002 \001"
    "(\0132$.fira_message.sim_to_ref.Replacement"
    "\"\215\001\n\013Environment\022\014\n\004step\030\001 \001(\r\022\"\n\005frame\030"
    "\002 \001(\0132\023.fira_message.Frame\022\"\n\005field\030\003 \001("
    "\0132\023.fira_message.Field\022\022\n\ngoals_blue\030\004 \001"
    "(\r\022\024\n\014goals_yellow\030\005 \001(\r2_\n\010Simulate\022S\n\010"
    "Simulate\022\037.fira_message.sim_to_ref.Packe"
    "t\032$.fira_message.sim_to_ref.Environment\""
    "\000b\006proto3", 449);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "packet.proto", &protobuf_RegisterTypes);
  Packet::default_instance_ = new Packet();
  Environment::default_instance_ = new Environment();
  Packet::default_instance_->InitAsDefaultInstance();
  Environment::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_packet_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_packet_2eproto {
  StaticDescriptorInitializer_packet_2eproto() {
    protobuf_AddDesc_packet_2eproto();
  }
} static_descriptor_initializer_packet_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Packet::kCmdFieldNumber;
const int Packet::kReplaceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Packet::Packet()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fira_message.sim_to_ref.Packet)
}

void Packet::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  cmd_ = const_cast< ::fira_message::sim_to_ref::Commands*>(&::fira_message::sim_to_ref::Commands::default_instance());
  replace_ = const_cast< ::fira_message::sim_to_ref::Replacement*>(&::fira_message::sim_to_ref::Replacement::default_instance());
}

Packet::Packet(const Packet& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:fira_message.sim_to_ref.Packet)
}

void Packet::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  cmd_ = NULL;
  replace_ = NULL;
}

Packet::~Packet() {
  // @@protoc_insertion_point(destructor:fira_message.sim_to_ref.Packet)
  SharedDtor();
}

void Packet::SharedDtor() {
  if (this != default_instance_) {
    delete cmd_;
    delete replace_;
  }
}

void Packet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Packet::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Packet_descriptor_;
}

const Packet& Packet::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_packet_2eproto();
  return *default_instance_;
}

Packet* Packet::default_instance_ = NULL;

Packet* Packet::New(::google::protobuf::Arena* arena) const {
  Packet* n = new Packet;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Packet::Clear() {
// @@protoc_insertion_point(message_clear_start:fira_message.sim_to_ref.Packet)
  if (GetArenaNoVirtual() == NULL && cmd_ != NULL) delete cmd_;
  cmd_ = NULL;
  if (GetArenaNoVirtual() == NULL && replace_ != NULL) delete replace_;
  replace_ = NULL;
}

bool Packet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fira_message.sim_to_ref.Packet)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .fira_message.sim_to_ref.Commands cmd = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cmd()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_replace;
        break;
      }

      // optional .fira_message.sim_to_ref.Replacement replace = 2;
      case 2: {
        if (tag == 18) {
         parse_replace:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_replace()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fira_message.sim_to_ref.Packet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fira_message.sim_to_ref.Packet)
  return false;
#undef DO_
}

void Packet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fira_message.sim_to_ref.Packet)
  // optional .fira_message.sim_to_ref.Commands cmd = 1;
  if (this->has_cmd()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->cmd_, output);
  }

  // optional .fira_message.sim_to_ref.Replacement replace = 2;
  if (this->has_replace()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->replace_, output);
  }

  // @@protoc_insertion_point(serialize_end:fira_message.sim_to_ref.Packet)
}

::google::protobuf::uint8* Packet::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:fira_message.sim_to_ref.Packet)
  // optional .fira_message.sim_to_ref.Commands cmd = 1;
  if (this->has_cmd()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->cmd_, false, target);
  }

  // optional .fira_message.sim_to_ref.Replacement replace = 2;
  if (this->has_replace()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->replace_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:fira_message.sim_to_ref.Packet)
  return target;
}

int Packet::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:fira_message.sim_to_ref.Packet)
  int total_size = 0;

  // optional .fira_message.sim_to_ref.Commands cmd = 1;
  if (this->has_cmd()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->cmd_);
  }

  // optional .fira_message.sim_to_ref.Replacement replace = 2;
  if (this->has_replace()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->replace_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Packet::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:fira_message.sim_to_ref.Packet)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Packet* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Packet>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:fira_message.sim_to_ref.Packet)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:fira_message.sim_to_ref.Packet)
    MergeFrom(*source);
  }
}

void Packet::MergeFrom(const Packet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fira_message.sim_to_ref.Packet)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_cmd()) {
    mutable_cmd()->::fira_message::sim_to_ref::Commands::MergeFrom(from.cmd());
  }
  if (from.has_replace()) {
    mutable_replace()->::fira_message::sim_to_ref::Replacement::MergeFrom(from.replace());
  }
}

void Packet::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:fira_message.sim_to_ref.Packet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Packet::CopyFrom(const Packet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fira_message.sim_to_ref.Packet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Packet::IsInitialized() const {

  return true;
}

void Packet::Swap(Packet* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Packet::InternalSwap(Packet* other) {
  std::swap(cmd_, other->cmd_);
  std::swap(replace_, other->replace_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Packet::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Packet_descriptor_;
  metadata.reflection = Packet_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Packet

// optional .fira_message.sim_to_ref.Commands cmd = 1;
bool Packet::has_cmd() const {
  return !_is_default_instance_ && cmd_ != NULL;
}
void Packet::clear_cmd() {
  if (GetArenaNoVirtual() == NULL && cmd_ != NULL) delete cmd_;
  cmd_ = NULL;
}
const ::fira_message::sim_to_ref::Commands& Packet::cmd() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Packet.cmd)
  return cmd_ != NULL ? *cmd_ : *default_instance_->cmd_;
}
::fira_message::sim_to_ref::Commands* Packet::mutable_cmd() {
  
  if (cmd_ == NULL) {
    cmd_ = new ::fira_message::sim_to_ref::Commands;
  }
  // @@protoc_insertion_point(field_mutable:fira_message.sim_to_ref.Packet.cmd)
  return cmd_;
}
::fira_message::sim_to_ref::Commands* Packet::release_cmd() {
  // @@protoc_insertion_point(field_release:fira_message.sim_to_ref.Packet.cmd)
  
  ::fira_message::sim_to_ref::Commands* temp = cmd_;
  cmd_ = NULL;
  return temp;
}
void Packet::set_allocated_cmd(::fira_message::sim_to_ref::Commands* cmd) {
  delete cmd_;
  cmd_ = cmd;
  if (cmd) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:fira_message.sim_to_ref.Packet.cmd)
}

// optional .fira_message.sim_to_ref.Replacement replace = 2;
bool Packet::has_replace() const {
  return !_is_default_instance_ && replace_ != NULL;
}
void Packet::clear_replace() {
  if (GetArenaNoVirtual() == NULL && replace_ != NULL) delete replace_;
  replace_ = NULL;
}
const ::fira_message::sim_to_ref::Replacement& Packet::replace() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Packet.replace)
  return replace_ != NULL ? *replace_ : *default_instance_->replace_;
}
::fira_message::sim_to_ref::Replacement* Packet::mutable_replace() {
  
  if (replace_ == NULL) {
    replace_ = new ::fira_message::sim_to_ref::Replacement;
  }
  // @@protoc_insertion_point(field_mutable:fira_message.sim_to_ref.Packet.replace)
  return replace_;
}
::fira_message::sim_to_ref::Replacement* Packet::release_replace() {
  // @@protoc_insertion_point(field_release:fira_message.sim_to_ref.Packet.replace)
  
  ::fira_message::sim_to_ref::Replacement* temp = replace_;
  replace_ = NULL;
  return temp;
}
void Packet::set_allocated_replace(::fira_message::sim_to_ref::Replacement* replace) {
  delete replace_;
  replace_ = replace;
  if (replace) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:fira_message.sim_to_ref.Packet.replace)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Environment::kStepFieldNumber;
const int Environment::kFrameFieldNumber;
const int Environment::kFieldFieldNumber;
const int Environment::kGoalsBlueFieldNumber;
const int Environment::kGoalsYellowFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Environment::Environment()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fira_message.sim_to_ref.Environment)
}

void Environment::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  frame_ = const_cast< ::fira_message::Frame*>(&::fira_message::Frame::default_instance());
  field_ = const_cast< ::fira_message::Field*>(&::fira_message::Field::default_instance());
}

Environment::Environment(const Environment& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:fira_message.sim_to_ref.Environment)
}

void Environment::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  step_ = 0u;
  frame_ = NULL;
  field_ = NULL;
  goals_blue_ = 0u;
  goals_yellow_ = 0u;
}

Environment::~Environment() {
  // @@protoc_insertion_point(destructor:fira_message.sim_to_ref.Environment)
  SharedDtor();
}

void Environment::SharedDtor() {
  if (this != default_instance_) {
    delete frame_;
    delete field_;
  }
}

void Environment::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Environment::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Environment_descriptor_;
}

const Environment& Environment::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_packet_2eproto();
  return *default_instance_;
}

Environment* Environment::default_instance_ = NULL;

Environment* Environment::New(::google::protobuf::Arena* arena) const {
  Environment* n = new Environment;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Environment::Clear() {
// @@protoc_insertion_point(message_clear_start:fira_message.sim_to_ref.Environment)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Environment, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Environment*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(step_, goals_blue_);
  if (GetArenaNoVirtual() == NULL && frame_ != NULL) delete frame_;
  frame_ = NULL;
  if (GetArenaNoVirtual() == NULL && field_ != NULL) delete field_;
  field_ = NULL;
  goals_yellow_ = 0u;

#undef ZR_HELPER_
#undef ZR_

}

bool Environment::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fira_message.sim_to_ref.Environment)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 step = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &step_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_frame;
        break;
      }

      // optional .fira_message.Frame frame = 2;
      case 2: {
        if (tag == 18) {
         parse_frame:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_frame()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_field;
        break;
      }

      // optional .fira_message.Field field = 3;
      case 3: {
        if (tag == 26) {
         parse_field:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_field()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_goals_blue;
        break;
      }

      // optional uint32 goals_blue = 4;
      case 4: {
        if (tag == 32) {
         parse_goals_blue:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &goals_blue_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_goals_yellow;
        break;
      }

      // optional uint32 goals_yellow = 5;
      case 5: {
        if (tag == 40) {
         parse_goals_yellow:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &goals_yellow_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fira_message.sim_to_ref.Environment)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fira_message.sim_to_ref.Environment)
  return false;
#undef DO_
}

void Environment::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fira_message.sim_to_ref.Environment)
  // optional uint32 step = 1;
  if (this->step() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->step(), output);
  }

  // optional .fira_message.Frame frame = 2;
  if (this->has_frame()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->frame_, output);
  }

  // optional .fira_message.Field field = 3;
  if (this->has_field()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->field_, output);
  }

  // optional uint32 goals_blue = 4;
  if (this->goals_blue() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->goals_blue(), output);
  }

  // optional uint32 goals_yellow = 5;
  if (this->goals_yellow() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->goals_yellow(), output);
  }

  // @@protoc_insertion_point(serialize_end:fira_message.sim_to_ref.Environment)
}

::google::protobuf::uint8* Environment::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:fira_message.sim_to_ref.Environment)
  // optional uint32 step = 1;
  if (this->step() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->step(), target);
  }

  // optional .fira_message.Frame frame = 2;
  if (this->has_frame()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->frame_, false, target);
  }

  // optional .fira_message.Field field = 3;
  if (this->has_field()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->field_, false, target);
  }

  // optional uint32 goals_blue = 4;
  if (this->goals_blue() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->goals_blue(), target);
  }

  // optional uint32 goals_yellow = 5;
  if (this->goals_yellow() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->goals_yellow(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:fira_message.sim_to_ref.Environment)
  return target;
}

int Environment::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:fira_message.sim_to_ref.Environment)
  int total_size = 0;

  // optional uint32 step = 1;
  if (this->step() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->step());
  }

  // optional .fira_message.Frame frame = 2;
  if (this->has_frame()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->frame_);
  }

  // optional .fira_message.Field field = 3;
  if (this->has_field()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->field_);
  }

  // optional uint32 goals_blue = 4;
  if (this->goals_blue() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->goals_blue());
  }

  // optional uint32 goals_yellow = 5;
  if (this->goals_yellow() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->goals_yellow());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Environment::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:fira_message.sim_to_ref.Environment)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Environment* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Environment>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:fira_message.sim_to_ref.Environment)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:fira_message.sim_to_ref.Environment)
    MergeFrom(*source);
  }
}

void Environment::MergeFrom(const Environment& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fira_message.sim_to_ref.Environment)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.step() != 0) {
    set_step(from.step());
  }
  if (from.has_frame()) {
    mutable_frame()->::fira_message::Frame::MergeFrom(from.frame());
  }
  if (from.has_field()) {
    mutable_field()->::fira_message::Field::MergeFrom(from.field());
  }
  if (from.goals_blue() != 0) {
    set_goals_blue(from.goals_blue());
  }
  if (from.goals_yellow() != 0) {
    set_goals_yellow(from.goals_yellow());
  }
}

void Environment::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:fira_message.sim_to_ref.Environment)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Environment::CopyFrom(const Environment& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fira_message.sim_to_ref.Environment)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Environment::IsInitialized() const {

  return true;
}

void Environment::Swap(Environment* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Environment::InternalSwap(Environment* other) {
  std::swap(step_, other->step_);
  std::swap(frame_, other->frame_);
  std::swap(field_, other->field_);
  std::swap(goals_blue_, other->goals_blue_);
  std::swap(goals_yellow_, other->goals_yellow_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Environment::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Environment_descriptor_;
  metadata.reflection = Environment_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Environment

// optional uint32 step = 1;
void Environment::clear_step() {
  step_ = 0u;
}
 ::google::protobuf::uint32 Environment::step() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Environment.step)
  return step_;
}
 void Environment::set_step(::google::protobuf::uint32 value) {
  
  step_ = value;
  // @@protoc_insertion_point(field_set:fira_message.sim_to_ref.Environment.step)
}

// optional .fira_message.Frame frame = 2;
bool Environment::has_frame() const {
  return !_is_default_instance_ && frame_ != NULL;
}
void Environment::clear_frame() {
  if (GetArenaNoVirtual() == NULL && frame_ != NULL) delete frame_;
  frame_ = NULL;
}
const ::fira_message::Frame& Environment::frame() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Environment.frame)
  return frame_ != NULL ? *frame_ : *default_instance_->frame_;
}
::fira_message::Frame* Environment::mutable_frame() {
  
  if (frame_ == NULL) {
    frame_ = new ::fira_message::Frame;
  }
  // @@protoc_insertion_point(field_mutable:fira_message.sim_to_ref.Environment.frame)
  return frame_;
}
::fira_message::Frame* Environment::release_frame() {
  // @@protoc_insertion_point(field_release:fira_message.sim_to_ref.Environment.frame)
  
  ::fira_message::Frame* temp = frame_;
  frame_ = NULL;
  return temp;
}
void Environment::set_allocated_frame(::fira_message::Frame* frame) {
  delete frame_;
  frame_ = frame;
  if (frame) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:fira_message.sim_to_ref.Environment.frame)
}

// optional .fira_message.Field field = 3;
bool Environment::has_field() const {
  return !_is_default_instance_ && field_ != NULL;
}
void Environment::clear_field() {
  if (GetArenaNoVirtual() == NULL && field_ != NULL) delete field_;
  field_ = NULL;
}
const ::fira_message::Field& Environment::field() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Environment.field)
  return field_ != NULL ? *field_ : *default_instance_->field_;
}
::fira_message::Field* Environment::mutable_field() {
  
  if (field_ == NULL) {
    field_ = new ::fira_message::Field;
  }
  // @@protoc_insertion_point(field_mutable:fira_message.sim_to_ref.Environment.field)
  return field_;
}
::fira_message::Field* Environment::release_field() {
  // @@protoc_insertion_point(field_release:fira_message.sim_to_ref.Environment.field)
  
  ::fira_message::Field* temp = field_;
  field_ = NULL;
  return temp;
}
void Environment::set_allocated_field(::fira_message::Field* field) {
  delete field_;
  field_ = field;
  if (field) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:fira_message.sim_to_ref.Environment.field)
}

// optional uint32 goals_blue = 4;
void Environment::clear_goals_blue() {
  goals_blue_ = 0u;
}
 ::google::protobuf::uint32 Environment::goals_blue() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Environment.goals_blue)
  return goals_blue_;
}
 void Environment::set_goals_blue(::google::protobuf::uint32 value) {
  
  goals_blue_ = value;
  // @@protoc_insertion_point(field_set:fira_message.sim_to_ref.Environment.goals_blue)
}

// optional uint32 goals_yellow = 5;
void Environment::clear_goals_yellow() {
  goals_yellow_ = 0u;
}
 ::google::protobuf::uint32 Environment::goals_yellow() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Environment.goals_yellow)
  return goals_yellow_;
}
 void Environment::set_goals_yellow(::google::protobuf::uint32 value) {
  
  goals_yellow_ = value;
  // @@protoc_insertion_point(field_set:fira_message.sim_to_ref.Environment.goals_yellow)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sim_to_ref
}  // namespace fira_message

// @@protoc_insertion_point(global_scope)
