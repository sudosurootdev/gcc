
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_Handshake$Type__
#define __gnu_javax_net_ssl_provider_Handshake$Type__

#pragma interface

#include <java/lang/Enum.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class Handshake$Type;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::Handshake$Type : public ::java::lang::Enum
{

  Handshake$Type(::java::lang::String *, jint, jint);
public:
  static ::gnu::javax::net::ssl::provider::Handshake$Type * forInteger(jint);
  jint getValue();
  static JArray< ::gnu::javax::net::ssl::provider::Handshake$Type * > * values();
  static ::gnu::javax::net::ssl::provider::Handshake$Type * valueOf(::java::lang::String *);
  static ::gnu::javax::net::ssl::provider::Handshake$Type * HELLO_REQUEST;
  static ::gnu::javax::net::ssl::provider::Handshake$Type * CLIENT_HELLO;
  static ::gnu::javax::net::ssl::provider::Handshake$Type * SERVER_HELLO;
  static ::gnu::javax::net::ssl::provider::Handshake$Type * CERTIFICATE;
  static ::gnu::javax::net::ssl::provider::Handshake$Type * SERVER_KEY_EXCHANGE;
  static ::gnu::javax::net::ssl::provider::Handshake$Type * CERTIFICATE_REQUEST;
  static ::gnu::javax::net::ssl::provider::Handshake$Type * SERVER_HELLO_DONE;
  static ::gnu::javax::net::ssl::provider::Handshake$Type * CERTIFICATE_VERIFY;
  static ::gnu::javax::net::ssl::provider::Handshake$Type * CLIENT_KEY_EXCHANGE;
  static ::gnu::javax::net::ssl::provider::Handshake$Type * FINISHED;
  static ::gnu::javax::net::ssl::provider::Handshake$Type * CERTIFICATE_URL;
  static ::gnu::javax::net::ssl::provider::Handshake$Type * CERTIFICATE_STATUS;
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Enum)))) value;
  static JArray< ::gnu::javax::net::ssl::provider::Handshake$Type * > * ENUM$VALUES;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_Handshake$Type__
