
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_BitwiseXORComposite$IntContext__
#define __gnu_java_awt_BitwiseXORComposite$IntContext__

#pragma interface

#include <gnu/java/awt/BitwiseXORComposite$GeneralContext.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
          class BitwiseXORComposite$IntContext;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Color;
        class RenderingHints;
      namespace image
      {
          class ColorModel;
          class Raster;
          class WritableRaster;
      }
    }
  }
}

class gnu::java::awt::BitwiseXORComposite$IntContext : public ::gnu::java::awt::BitwiseXORComposite$GeneralContext
{

public:
  BitwiseXORComposite$IntContext(::java::awt::image::ColorModel *, ::java::awt::Color *);
  virtual void compose(::java::awt::image::Raster *, ::java::awt::image::Raster *, ::java::awt::image::WritableRaster *);
  static jboolean isSupported(::java::awt::image::ColorModel *, ::java::awt::image::ColorModel *, ::java::awt::RenderingHints *);
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_BitwiseXORComposite$IntContext__
