// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packet.proto

#ifndef PROTOBUF_packet_2eproto__INCLUDED
#define PROTOBUF_packet_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "command.pb.h"
#include "replacement.pb.h"
#include "common.pb.h"
// @@protoc_insertion_point(includes)

namespace fira_message {
namespace sim_to_ref {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_packet_2eproto();
void protobuf_AssignDesc_packet_2eproto();
void protobuf_ShutdownFile_packet_2eproto();

class Environment;
class Packet;

// ===================================================================

class Packet : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:fira_message.sim_to_ref.Packet) */ {
 public:
  Packet();
  virtual ~Packet();

  Packet(const Packet& from);

  inline Packet& operator=(const Packet& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Packet& default_instance();

  void Swap(Packet* other);

  // implements Message ----------------------------------------------

  inline Packet* New() const { return New(NULL); }

  Packet* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Packet& from);
  void MergeFrom(const Packet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Packet* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .fira_message.sim_to_ref.Commands cmd = 1;
  bool has_cmd() const;
  void clear_cmd();
  static const int kCmdFieldNumber = 1;
  const ::fira_message::sim_to_ref::Commands& cmd() const;
  ::fira_message::sim_to_ref::Commands* mutable_cmd();
  ::fira_message::sim_to_ref::Commands* release_cmd();
  void set_allocated_cmd(::fira_message::sim_to_ref::Commands* cmd);

  // optional .fira_message.sim_to_ref.Replacement replace = 2;
  bool has_replace() const;
  void clear_replace();
  static const int kReplaceFieldNumber = 2;
  const ::fira_message::sim_to_ref::Replacement& replace() const;
  ::fira_message::sim_to_ref::Replacement* mutable_replace();
  ::fira_message::sim_to_ref::Replacement* release_replace();
  void set_allocated_replace(::fira_message::sim_to_ref::Replacement* replace);

  // @@protoc_insertion_point(class_scope:fira_message.sim_to_ref.Packet)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::fira_message::sim_to_ref::Commands* cmd_;
  ::fira_message::sim_to_ref::Replacement* replace_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_packet_2eproto();
  friend void protobuf_AssignDesc_packet_2eproto();
  friend void protobuf_ShutdownFile_packet_2eproto();

  void InitAsDefaultInstance();
  static Packet* default_instance_;
};
// -------------------------------------------------------------------

class Environment : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:fira_message.sim_to_ref.Environment) */ {
 public:
  Environment();
  virtual ~Environment();

  Environment(const Environment& from);

  inline Environment& operator=(const Environment& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Environment& default_instance();

  void Swap(Environment* other);

  // implements Message ----------------------------------------------

  inline Environment* New() const { return New(NULL); }

  Environment* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Environment& from);
  void MergeFrom(const Environment& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Environment* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 step = 1;
  void clear_step();
  static const int kStepFieldNumber = 1;
  ::google::protobuf::uint32 step() const;
  void set_step(::google::protobuf::uint32 value);

  // optional .fira_message.Frame frame = 2;
  bool has_frame() const;
  void clear_frame();
  static const int kFrameFieldNumber = 2;
  const ::fira_message::Frame& frame() const;
  ::fira_message::Frame* mutable_frame();
  ::fira_message::Frame* release_frame();
  void set_allocated_frame(::fira_message::Frame* frame);

  // optional .fira_message.Field field = 3;
  bool has_field() const;
  void clear_field();
  static const int kFieldFieldNumber = 3;
  const ::fira_message::Field& field() const;
  ::fira_message::Field* mutable_field();
  ::fira_message::Field* release_field();
  void set_allocated_field(::fira_message::Field* field);

  // optional uint32 goals_blue = 4;
  void clear_goals_blue();
  static const int kGoalsBlueFieldNumber = 4;
  ::google::protobuf::uint32 goals_blue() const;
  void set_goals_blue(::google::protobuf::uint32 value);

  // optional uint32 goals_yellow = 5;
  void clear_goals_yellow();
  static const int kGoalsYellowFieldNumber = 5;
  ::google::protobuf::uint32 goals_yellow() const;
  void set_goals_yellow(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:fira_message.sim_to_ref.Environment)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::fira_message::Frame* frame_;
  ::google::protobuf::uint32 step_;
  ::google::protobuf::uint32 goals_blue_;
  ::fira_message::Field* field_;
  ::google::protobuf::uint32 goals_yellow_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_packet_2eproto();
  friend void protobuf_AssignDesc_packet_2eproto();
  friend void protobuf_ShutdownFile_packet_2eproto();

  void InitAsDefaultInstance();
  static Environment* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Packet

// optional .fira_message.sim_to_ref.Commands cmd = 1;
inline bool Packet::has_cmd() const {
  return !_is_default_instance_ && cmd_ != NULL;
}
inline void Packet::clear_cmd() {
  if (GetArenaNoVirtual() == NULL && cmd_ != NULL) delete cmd_;
  cmd_ = NULL;
}
inline const ::fira_message::sim_to_ref::Commands& Packet::cmd() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Packet.cmd)
  return cmd_ != NULL ? *cmd_ : *default_instance_->cmd_;
}
inline ::fira_message::sim_to_ref::Commands* Packet::mutable_cmd() {
  
  if (cmd_ == NULL) {
    cmd_ = new ::fira_message::sim_to_ref::Commands;
  }
  // @@protoc_insertion_point(field_mutable:fira_message.sim_to_ref.Packet.cmd)
  return cmd_;
}
inline ::fira_message::sim_to_ref::Commands* Packet::release_cmd() {
  // @@protoc_insertion_point(field_release:fira_message.sim_to_ref.Packet.cmd)
  
  ::fira_message::sim_to_ref::Commands* temp = cmd_;
  cmd_ = NULL;
  return temp;
}
inline void Packet::set_allocated_cmd(::fira_message::sim_to_ref::Commands* cmd) {
  delete cmd_;
  cmd_ = cmd;
  if (cmd) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:fira_message.sim_to_ref.Packet.cmd)
}

// optional .fira_message.sim_to_ref.Replacement replace = 2;
inline bool Packet::has_replace() const {
  return !_is_default_instance_ && replace_ != NULL;
}
inline void Packet::clear_replace() {
  if (GetArenaNoVirtual() == NULL && replace_ != NULL) delete replace_;
  replace_ = NULL;
}
inline const ::fira_message::sim_to_ref::Replacement& Packet::replace() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Packet.replace)
  return replace_ != NULL ? *replace_ : *default_instance_->replace_;
}
inline ::fira_message::sim_to_ref::Replacement* Packet::mutable_replace() {
  
  if (replace_ == NULL) {
    replace_ = new ::fira_message::sim_to_ref::Replacement;
  }
  // @@protoc_insertion_point(field_mutable:fira_message.sim_to_ref.Packet.replace)
  return replace_;
}
inline ::fira_message::sim_to_ref::Replacement* Packet::release_replace() {
  // @@protoc_insertion_point(field_release:fira_message.sim_to_ref.Packet.replace)
  
  ::fira_message::sim_to_ref::Replacement* temp = replace_;
  replace_ = NULL;
  return temp;
}
inline void Packet::set_allocated_replace(::fira_message::sim_to_ref::Replacement* replace) {
  delete replace_;
  replace_ = replace;
  if (replace) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:fira_message.sim_to_ref.Packet.replace)
}

// -------------------------------------------------------------------

// Environment

// optional uint32 step = 1;
inline void Environment::clear_step() {
  step_ = 0u;
}
inline ::google::protobuf::uint32 Environment::step() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Environment.step)
  return step_;
}
inline void Environment::set_step(::google::protobuf::uint32 value) {
  
  step_ = value;
  // @@protoc_insertion_point(field_set:fira_message.sim_to_ref.Environment.step)
}

// optional .fira_message.Frame frame = 2;
inline bool Environment::has_frame() const {
  return !_is_default_instance_ && frame_ != NULL;
}
inline void Environment::clear_frame() {
  if (GetArenaNoVirtual() == NULL && frame_ != NULL) delete frame_;
  frame_ = NULL;
}
inline const ::fira_message::Frame& Environment::frame() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Environment.frame)
  return frame_ != NULL ? *frame_ : *default_instance_->frame_;
}
inline ::fira_message::Frame* Environment::mutable_frame() {
  
  if (frame_ == NULL) {
    frame_ = new ::fira_message::Frame;
  }
  // @@protoc_insertion_point(field_mutable:fira_message.sim_to_ref.Environment.frame)
  return frame_;
}
inline ::fira_message::Frame* Environment::release_frame() {
  // @@protoc_insertion_point(field_release:fira_message.sim_to_ref.Environment.frame)
  
  ::fira_message::Frame* temp = frame_;
  frame_ = NULL;
  return temp;
}
inline void Environment::set_allocated_frame(::fira_message::Frame* frame) {
  delete frame_;
  frame_ = frame;
  if (frame) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:fira_message.sim_to_ref.Environment.frame)
}

// optional .fira_message.Field field = 3;
inline bool Environment::has_field() const {
  return !_is_default_instance_ && field_ != NULL;
}
inline void Environment::clear_field() {
  if (GetArenaNoVirtual() == NULL && field_ != NULL) delete field_;
  field_ = NULL;
}
inline const ::fira_message::Field& Environment::field() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Environment.field)
  return field_ != NULL ? *field_ : *default_instance_->field_;
}
inline ::fira_message::Field* Environment::mutable_field() {
  
  if (field_ == NULL) {
    field_ = new ::fira_message::Field;
  }
  // @@protoc_insertion_point(field_mutable:fira_message.sim_to_ref.Environment.field)
  return field_;
}
inline ::fira_message::Field* Environment::release_field() {
  // @@protoc_insertion_point(field_release:fira_message.sim_to_ref.Environment.field)
  
  ::fira_message::Field* temp = field_;
  field_ = NULL;
  return temp;
}
inline void Environment::set_allocated_field(::fira_message::Field* field) {
  delete field_;
  field_ = field;
  if (field) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:fira_message.sim_to_ref.Environment.field)
}

// optional uint32 goals_blue = 4;
inline void Environment::clear_goals_blue() {
  goals_blue_ = 0u;
}
inline ::google::protobuf::uint32 Environment::goals_blue() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Environment.goals_blue)
  return goals_blue_;
}
inline void Environment::set_goals_blue(::google::protobuf::uint32 value) {
  
  goals_blue_ = value;
  // @@protoc_insertion_point(field_set:fira_message.sim_to_ref.Environment.goals_blue)
}

// optional uint32 goals_yellow = 5;
inline void Environment::clear_goals_yellow() {
  goals_yellow_ = 0u;
}
inline ::google::protobuf::uint32 Environment::goals_yellow() const {
  // @@protoc_insertion_point(field_get:fira_message.sim_to_ref.Environment.goals_yellow)
  return goals_yellow_;
}
inline void Environment::set_goals_yellow(::google::protobuf::uint32 value) {
  
  goals_yellow_ = value;
  // @@protoc_insertion_point(field_set:fira_message.sim_to_ref.Environment.goals_yellow)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sim_to_ref
}  // namespace fira_message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_packet_2eproto__INCLUDED
