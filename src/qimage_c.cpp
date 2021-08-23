#include <qimage_c.h>
#include <qcolor_c.h>
#include <QtGui> 

QIMAGE qimage_create(int width,int height,int format){
  return (QIMAGE) new QImage(width,height,(QImage::Format)format);
}

void qimage_destroy(QIMAGE image){
  delete (QImage*)image;
}

void qimage_save_to_file(
  QIMAGE image, 
  const char* filename, 
  const char* format){
  QImage *img = (QImage*)image;
  img->save(filename,format);
}

char* qimage_save_to_stream(QIMAGE image, const char* format, int* len){
  QImage *img = (QImage*)image;
  QByteArray ba;
  QBuffer buffer(&ba);
  buffer.open(QIODevice::WriteOnly);
  img->save(&buffer, format);

  *len = ba.size();
  char* imgdata = (char*)malloc(*len);
  memcpy(imgdata,ba.data(),*len);

  return imgdata;
}


QIMAGE qimage_fill_rgb(QIMAGE image, int r, int g, int b){
  QImage *img = (QImage*)image;
  img->fill(QColor(r,g,b));
  return img;
}


QIMAGE qimage_fill_rgba(QIMAGE image, int r, int g, int b, int a){
  QImage *img = (QImage*)image;
  img->fill(QColor(r,g,b,a));
  return img;
}

QIMAGE qimage_fill_color(QIMAGE image, QCOLOR color){
  ((QImage*)image)->fill(*((QColor*)color));
  return image;
}
