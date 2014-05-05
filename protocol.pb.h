// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol.proto

#ifndef PROTOBUF_protocol_2eproto__INCLUDED
#define PROTOBUF_protocol_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_protocol_2eproto();
void protobuf_AssignDesc_protocol_2eproto();
void protobuf_ShutdownFile_protocol_2eproto();

class paquete;
class paquete_rect;

// ===================================================================

class paquete_rect : public ::google::protobuf::Message {
 public:
  paquete_rect();
  virtual ~paquete_rect();
  
  paquete_rect(const paquete_rect& from);
  
  inline paquete_rect& operator=(const paquete_rect& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const paquete_rect& default_instance();
  
  void Swap(paquete_rect* other);
  
  // implements Message ----------------------------------------------
  
  paquete_rect* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const paquete_rect& from);
  void MergeFrom(const paquete_rect& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);
  
  // required int32 y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);
  
  // required int32 width = 3;
  inline bool has_width() const;
  inline void clear_width();
  static const int kWidthFieldNumber = 3;
  inline ::google::protobuf::int32 width() const;
  inline void set_width(::google::protobuf::int32 value);
  
  // required int32 height = 4;
  inline bool has_height() const;
  inline void clear_height();
  static const int kHeightFieldNumber = 4;
  inline ::google::protobuf::int32 height() const;
  inline void set_height(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:paquete.rect)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_width();
  inline void clear_has_width();
  inline void set_has_height();
  inline void clear_has_height();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 width_;
  ::google::protobuf::int32 height_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_protocol_2eproto();
  friend void protobuf_AssignDesc_protocol_2eproto();
  friend void protobuf_ShutdownFile_protocol_2eproto();
  
  void InitAsDefaultInstance();
  static paquete_rect* default_instance_;
};
// -------------------------------------------------------------------

class paquete : public ::google::protobuf::Message {
 public:
  paquete();
  virtual ~paquete();
  
  paquete(const paquete& from);
  
  inline paquete& operator=(const paquete& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const paquete& default_instance();
  
  void Swap(paquete* other);
  
  // implements Message ----------------------------------------------
  
  paquete* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const paquete& from);
  void MergeFrom(const paquete& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef paquete_rect rect;
  
  // accessors -------------------------------------------------------
  
  // required string protocol = 1;
  inline bool has_protocol() const;
  inline void clear_protocol();
  static const int kProtocolFieldNumber = 1;
  inline const ::std::string& protocol() const;
  inline void set_protocol(const ::std::string& value);
  inline void set_protocol(const char* value);
  inline void set_protocol(const char* value, size_t size);
  inline ::std::string* mutable_protocol();
  inline ::std::string* release_protocol();
  
  // required string protocol_version = 2;
  inline bool has_protocol_version() const;
  inline void clear_protocol_version();
  static const int kProtocolVersionFieldNumber = 2;
  inline const ::std::string& protocol_version() const;
  inline void set_protocol_version(const ::std::string& value);
  inline void set_protocol_version(const char* value);
  inline void set_protocol_version(const char* value, size_t size);
  inline ::std::string* mutable_protocol_version();
  inline ::std::string* release_protocol_version();
  
  // required string deviceName = 3;
  inline bool has_devicename() const;
  inline void clear_devicename();
  static const int kDeviceNameFieldNumber = 3;
  inline const ::std::string& devicename() const;
  inline void set_devicename(const ::std::string& value);
  inline void set_devicename(const char* value);
  inline void set_devicename(const char* value, size_t size);
  inline ::std::string* mutable_devicename();
  inline ::std::string* release_devicename();
  
  // required uint64 timestamp = 4;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 4;
  inline ::google::protobuf::uint64 timestamp() const;
  inline void set_timestamp(::google::protobuf::uint64 value);
  
  // required bytes img = 5;
  inline bool has_img() const;
  inline void clear_img();
  static const int kImgFieldNumber = 5;
  inline const ::std::string& img() const;
  inline void set_img(const ::std::string& value);
  inline void set_img(const char* value);
  inline void set_img(const void* value, size_t size);
  inline ::std::string* mutable_img();
  inline ::std::string* release_img();
  
  // repeated .paquete.rect rects = 6;
  inline int rects_size() const;
  inline void clear_rects();
  static const int kRectsFieldNumber = 6;
  inline const ::paquete_rect& rects(int index) const;
  inline ::paquete_rect* mutable_rects(int index);
  inline ::paquete_rect* add_rects();
  inline const ::google::protobuf::RepeatedPtrField< ::paquete_rect >&
      rects() const;
  inline ::google::protobuf::RepeatedPtrField< ::paquete_rect >*
      mutable_rects();
  
  // @@protoc_insertion_point(class_scope:paquete)
 private:
  inline void set_has_protocol();
  inline void clear_has_protocol();
  inline void set_has_protocol_version();
  inline void clear_has_protocol_version();
  inline void set_has_devicename();
  inline void clear_has_devicename();
  inline void set_has_timestamp();
  inline void clear_has_timestamp();
  inline void set_has_img();
  inline void clear_has_img();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* protocol_;
  ::std::string* protocol_version_;
  ::std::string* devicename_;
  ::google::protobuf::uint64 timestamp_;
  ::std::string* img_;
  ::google::protobuf::RepeatedPtrField< ::paquete_rect > rects_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];
  
  friend void  protobuf_AddDesc_protocol_2eproto();
  friend void protobuf_AssignDesc_protocol_2eproto();
  friend void protobuf_ShutdownFile_protocol_2eproto();
  
  void InitAsDefaultInstance();
  static paquete* default_instance_;
};
// ===================================================================


// ===================================================================

// paquete_rect

// required int32 x = 1;
inline bool paquete_rect::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void paquete_rect::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void paquete_rect::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void paquete_rect::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 paquete_rect::x() const {
  return x_;
}
inline void paquete_rect::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// required int32 y = 2;
inline bool paquete_rect::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void paquete_rect::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void paquete_rect::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void paquete_rect::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 paquete_rect::y() const {
  return y_;
}
inline void paquete_rect::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// required int32 width = 3;
inline bool paquete_rect::has_width() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void paquete_rect::set_has_width() {
  _has_bits_[0] |= 0x00000004u;
}
inline void paquete_rect::clear_has_width() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void paquete_rect::clear_width() {
  width_ = 0;
  clear_has_width();
}
inline ::google::protobuf::int32 paquete_rect::width() const {
  return width_;
}
inline void paquete_rect::set_width(::google::protobuf::int32 value) {
  set_has_width();
  width_ = value;
}

// required int32 height = 4;
inline bool paquete_rect::has_height() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void paquete_rect::set_has_height() {
  _has_bits_[0] |= 0x00000008u;
}
inline void paquete_rect::clear_has_height() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void paquete_rect::clear_height() {
  height_ = 0;
  clear_has_height();
}
inline ::google::protobuf::int32 paquete_rect::height() const {
  return height_;
}
inline void paquete_rect::set_height(::google::protobuf::int32 value) {
  set_has_height();
  height_ = value;
}

// -------------------------------------------------------------------

// paquete

// required string protocol = 1;
inline bool paquete::has_protocol() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void paquete::set_has_protocol() {
  _has_bits_[0] |= 0x00000001u;
}
inline void paquete::clear_has_protocol() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void paquete::clear_protocol() {
  if (protocol_ != &::google::protobuf::internal::kEmptyString) {
    protocol_->clear();
  }
  clear_has_protocol();
}
inline const ::std::string& paquete::protocol() const {
  return *protocol_;
}
inline void paquete::set_protocol(const ::std::string& value) {
  set_has_protocol();
  if (protocol_ == &::google::protobuf::internal::kEmptyString) {
    protocol_ = new ::std::string;
  }
  protocol_->assign(value);
}
inline void paquete::set_protocol(const char* value) {
  set_has_protocol();
  if (protocol_ == &::google::protobuf::internal::kEmptyString) {
    protocol_ = new ::std::string;
  }
  protocol_->assign(value);
}
inline void paquete::set_protocol(const char* value, size_t size) {
  set_has_protocol();
  if (protocol_ == &::google::protobuf::internal::kEmptyString) {
    protocol_ = new ::std::string;
  }
  protocol_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* paquete::mutable_protocol() {
  set_has_protocol();
  if (protocol_ == &::google::protobuf::internal::kEmptyString) {
    protocol_ = new ::std::string;
  }
  return protocol_;
}
inline ::std::string* paquete::release_protocol() {
  clear_has_protocol();
  if (protocol_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = protocol_;
    protocol_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string protocol_version = 2;
inline bool paquete::has_protocol_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void paquete::set_has_protocol_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void paquete::clear_has_protocol_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void paquete::clear_protocol_version() {
  if (protocol_version_ != &::google::protobuf::internal::kEmptyString) {
    protocol_version_->clear();
  }
  clear_has_protocol_version();
}
inline const ::std::string& paquete::protocol_version() const {
  return *protocol_version_;
}
inline void paquete::set_protocol_version(const ::std::string& value) {
  set_has_protocol_version();
  if (protocol_version_ == &::google::protobuf::internal::kEmptyString) {
    protocol_version_ = new ::std::string;
  }
  protocol_version_->assign(value);
}
inline void paquete::set_protocol_version(const char* value) {
  set_has_protocol_version();
  if (protocol_version_ == &::google::protobuf::internal::kEmptyString) {
    protocol_version_ = new ::std::string;
  }
  protocol_version_->assign(value);
}
inline void paquete::set_protocol_version(const char* value, size_t size) {
  set_has_protocol_version();
  if (protocol_version_ == &::google::protobuf::internal::kEmptyString) {
    protocol_version_ = new ::std::string;
  }
  protocol_version_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* paquete::mutable_protocol_version() {
  set_has_protocol_version();
  if (protocol_version_ == &::google::protobuf::internal::kEmptyString) {
    protocol_version_ = new ::std::string;
  }
  return protocol_version_;
}
inline ::std::string* paquete::release_protocol_version() {
  clear_has_protocol_version();
  if (protocol_version_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = protocol_version_;
    protocol_version_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string deviceName = 3;
inline bool paquete::has_devicename() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void paquete::set_has_devicename() {
  _has_bits_[0] |= 0x00000004u;
}
inline void paquete::clear_has_devicename() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void paquete::clear_devicename() {
  if (devicename_ != &::google::protobuf::internal::kEmptyString) {
    devicename_->clear();
  }
  clear_has_devicename();
}
inline const ::std::string& paquete::devicename() const {
  return *devicename_;
}
inline void paquete::set_devicename(const ::std::string& value) {
  set_has_devicename();
  if (devicename_ == &::google::protobuf::internal::kEmptyString) {
    devicename_ = new ::std::string;
  }
  devicename_->assign(value);
}
inline void paquete::set_devicename(const char* value) {
  set_has_devicename();
  if (devicename_ == &::google::protobuf::internal::kEmptyString) {
    devicename_ = new ::std::string;
  }
  devicename_->assign(value);
}
inline void paquete::set_devicename(const char* value, size_t size) {
  set_has_devicename();
  if (devicename_ == &::google::protobuf::internal::kEmptyString) {
    devicename_ = new ::std::string;
  }
  devicename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* paquete::mutable_devicename() {
  set_has_devicename();
  if (devicename_ == &::google::protobuf::internal::kEmptyString) {
    devicename_ = new ::std::string;
  }
  return devicename_;
}
inline ::std::string* paquete::release_devicename() {
  clear_has_devicename();
  if (devicename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = devicename_;
    devicename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required uint64 timestamp = 4;
inline bool paquete::has_timestamp() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void paquete::set_has_timestamp() {
  _has_bits_[0] |= 0x00000008u;
}
inline void paquete::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void paquete::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::uint64 paquete::timestamp() const {
  return timestamp_;
}
inline void paquete::set_timestamp(::google::protobuf::uint64 value) {
  set_has_timestamp();
  timestamp_ = value;
}

// required bytes img = 5;
inline bool paquete::has_img() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void paquete::set_has_img() {
  _has_bits_[0] |= 0x00000010u;
}
inline void paquete::clear_has_img() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void paquete::clear_img() {
  if (img_ != &::google::protobuf::internal::kEmptyString) {
    img_->clear();
  }
  clear_has_img();
}
inline const ::std::string& paquete::img() const {
  return *img_;
}
inline void paquete::set_img(const ::std::string& value) {
  set_has_img();
  if (img_ == &::google::protobuf::internal::kEmptyString) {
    img_ = new ::std::string;
  }
  img_->assign(value);
}
inline void paquete::set_img(const char* value) {
  set_has_img();
  if (img_ == &::google::protobuf::internal::kEmptyString) {
    img_ = new ::std::string;
  }
  img_->assign(value);
}
inline void paquete::set_img(const void* value, size_t size) {
  set_has_img();
  if (img_ == &::google::protobuf::internal::kEmptyString) {
    img_ = new ::std::string;
  }
  img_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* paquete::mutable_img() {
  set_has_img();
  if (img_ == &::google::protobuf::internal::kEmptyString) {
    img_ = new ::std::string;
  }
  return img_;
}
inline ::std::string* paquete::release_img() {
  clear_has_img();
  if (img_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = img_;
    img_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// repeated .paquete.rect rects = 6;
inline int paquete::rects_size() const {
  return rects_.size();
}
inline void paquete::clear_rects() {
  rects_.Clear();
}
inline const ::paquete_rect& paquete::rects(int index) const {
  return rects_.Get(index);
}
inline ::paquete_rect* paquete::mutable_rects(int index) {
  return rects_.Mutable(index);
}
inline ::paquete_rect* paquete::add_rects() {
  return rects_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::paquete_rect >&
paquete::rects() const {
  return rects_;
}
inline ::google::protobuf::RepeatedPtrField< ::paquete_rect >*
paquete::mutable_rects() {
  return &rects_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_protocol_2eproto__INCLUDED