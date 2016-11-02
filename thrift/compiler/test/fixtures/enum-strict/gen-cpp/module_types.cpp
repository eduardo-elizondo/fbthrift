/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/enum-strict/gen-cpp/module_types.h"

#include "thrift/compiler/test/fixtures/enum-strict/gen-cpp/module_reflection.h"

#include <algorithm>
#include <string.h>



const MyEnum _kMyEnumValues[] = {
  MyEnum::kMyFoo,
  MyEnum::kMyBar,
};

const char* const _kMyEnumNames[] = {
  "MyEnum::kMyFoo",
  "MyEnum::kMyBar",
};

const std::map<MyEnum, const char*> _MyEnum_VALUES_TO_NAMES(apache::thrift::TEnumIterator<MyEnum>(2, _kMyEnumValues, _kMyEnumNames), apache::thrift::TEnumIterator<MyEnum>(-1, NULL, NULL));

const std::map<const char*, MyEnum, apache::thrift::ltstr> _MyEnum_NAMES_TO_VALUES(apache::thrift::TEnumInverseIterator<MyEnum>(2, _kMyEnumValues, _kMyEnumNames), apache::thrift::TEnumInverseIterator<MyEnum>(-1, NULL, NULL));


namespace apache { namespace thrift {
template<>
const char* TEnumTraitsBase< ::MyEnum>::findName( ::MyEnum value) {
return findName( ::_MyEnum_VALUES_TO_NAMES, value);
}

template<>
bool TEnumTraitsBase< ::MyEnum>::findValue(const char* name,  ::MyEnum* out) {
return findValue( ::_MyEnum_NAMES_TO_VALUES, name, out);
}
}} // apache::thrift


const uint64_t MyStruct::_reflection_id;
void MyStruct::_reflection_register(::apache::thrift::reflection::Schema& schema) {
   ::module_reflection_::reflectionInitializer_7958971832214294220(schema);
}

bool MyStruct::operator == (const MyStruct & rhs) const {
  if (!(this->baz == rhs.baz))
    return false;
  return true;
}

uint32_t MyStruct::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::module_reflection_::reflectionInitializer_7958971832214294220(*schema);
    iprot->setNextStructType(MyStruct::_reflection_id);
  }
  xfer += iprot->readStructBegin(fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == apache::thrift::protocol::T_I32) {
          int32_t ecast1;
          xfer += iprot->readI32(ecast1);
          this->baz = (MyEnum)ecast1;
          this->__isset.baz = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void MyStruct::__clear() {
  baz = static_cast<MyEnum>(0);
  __isset.__clear();
}
uint32_t MyStruct::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MyStruct");
  xfer += oprot->writeFieldBegin("baz", apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->baz);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MyStruct &a, MyStruct &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.baz, b.baz);
  swap(a.__isset, b.__isset);
}

void merge(const MyStruct& from, MyStruct& to) {
  using apache::thrift::merge;
  merge(from.baz, to.baz);
  to.__isset.baz = to.__isset.baz || from.__isset.baz;
}

void merge(MyStruct&& from, MyStruct& to) {
  using apache::thrift::merge;
  merge(std::move(from.baz), to.baz);
  to.__isset.baz = to.__isset.baz || from.__isset.baz;
}

