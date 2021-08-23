#include <qimage_c.h>
#include <QtGui> 

QIMAGE qimage_new(int width,int height,int format){
  return (QIMAGE) new QImage(width,height,(QImage::Format)format);
}

void qimage_destroy(QIMAGE img){
  delete (QImage*)img;
}