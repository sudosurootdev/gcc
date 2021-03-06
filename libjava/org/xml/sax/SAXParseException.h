
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_xml_sax_SAXParseException__
#define __org_xml_sax_SAXParseException__

#pragma interface

#include <org/xml/sax/SAXException.h>
extern "Java"
{
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
          class Locator;
          class SAXParseException;
      }
    }
  }
}

class org::xml::sax::SAXParseException : public ::org::xml::sax::SAXException
{

public:
  SAXParseException(::java::lang::String *, ::org::xml::sax::Locator *);
  SAXParseException(::java::lang::String *, ::org::xml::sax::Locator *, ::java::lang::Exception *);
  SAXParseException(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, jint, jint);
  SAXParseException(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, jint, jint, ::java::lang::Exception *);
private:
  void init(::java::lang::String *, ::java::lang::String *, jint, jint);
public:
  virtual ::java::lang::String * getPublicId();
  virtual ::java::lang::String * getSystemId();
  virtual jint getLineNumber();
  virtual jint getColumnNumber();
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::org::xml::sax::SAXException)))) publicId;
  ::java::lang::String * systemId;
  jint lineNumber;
  jint columnNumber;
public:
  static ::java::lang::Class class$;
};

#endif // __org_xml_sax_SAXParseException__
