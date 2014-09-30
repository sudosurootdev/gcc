
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JFormattedTextField__
#define __javax_swing_JFormattedTextField__

#pragma interface

#include <javax/swing/JTextField.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class FocusEvent;
      }
    }
    namespace text
    {
        class Format;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class Action;
        class JFormattedTextField;
        class JFormattedTextField$AbstractFormatter;
        class JFormattedTextField$AbstractFormatterFactory;
      namespace text
      {
          class Document;
      }
    }
  }
}

class javax::swing::JFormattedTextField : public ::javax::swing::JTextField
{

public:
  JFormattedTextField();
  JFormattedTextField(::java::text::Format *);
  JFormattedTextField(::javax::swing::JFormattedTextField$AbstractFormatter *);
  JFormattedTextField(::javax::swing::JFormattedTextField$AbstractFormatterFactory *);
  JFormattedTextField(::javax::swing::JFormattedTextField$AbstractFormatterFactory *, ::java::lang::Object *);
  JFormattedTextField(::java::lang::Object *);
private:
  ::javax::swing::JFormattedTextField$AbstractFormatterFactory * getAppropriateFormatterFactory(::java::text::Format *);
public:
  virtual void commitEdit();
  virtual JArray< ::javax::swing::Action * > * getActions();
  virtual jint getFocusLostBehavior();
  virtual ::javax::swing::JFormattedTextField$AbstractFormatter * getFormatter();
  virtual ::javax::swing::JFormattedTextField$AbstractFormatterFactory * getFormatterFactory();
  virtual ::java::lang::String * getUIClassID();
  virtual ::java::lang::Object * getValue();
public: // actually protected
  virtual void invalidEdit();
public:
  virtual jboolean isEditValid();
public: // actually protected
  virtual void processFocusEvent(::java::awt::event::FocusEvent *);
public:
  virtual void setDocument(::javax::swing::text::Document *);
  virtual void setFocusLostBehavior(jint);
public: // actually protected
  virtual void setFormatter(::javax::swing::JFormattedTextField$AbstractFormatter *);
public:
  virtual void setFormatterFactory(::javax::swing::JFormattedTextField$AbstractFormatterFactory *);
  virtual void setValue(::java::lang::Object *);
public: // actually package-private
  virtual ::javax::swing::JFormattedTextField$AbstractFormatterFactory * createFormatterFactory(::java::lang::Object *);
private:
  static const jlong serialVersionUID = 5464657870110180632LL;
public:
  static const jint COMMIT = 0;
  static const jint COMMIT_OR_REVERT = 1;
  static const jint REVERT = 2;
  static const jint PERSIST = 3;
private:
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::javax::swing::JTextField)))) value;
  jint focusLostBehavior;
  ::javax::swing::JFormattedTextField$AbstractFormatterFactory * formatterFactory;
  ::javax::swing::JFormattedTextField$AbstractFormatter * formatter;
public: // actually package-private
  jboolean editValid;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_JFormattedTextField__
