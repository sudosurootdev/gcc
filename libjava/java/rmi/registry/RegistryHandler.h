
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_registry_RegistryHandler__
#define __java_rmi_registry_RegistryHandler__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      namespace registry
      {
          class Registry;
          class RegistryHandler;
      }
    }
  }
}

class java::rmi::registry::RegistryHandler : public ::java::lang::Object
{

public:
  virtual ::java::rmi::registry::Registry * registryStub(::java::lang::String *, jint) = 0;
  virtual ::java::rmi::registry::Registry * registryImpl(jint) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_rmi_registry_RegistryHandler__
