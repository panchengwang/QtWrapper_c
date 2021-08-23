#include <qimage_c.h>
#include <QImage> 

QIMAGE qimage_new(int width,int height,int format){
  return (QIMAGE) new QImage(width,height,format);
}

void qimage_destroy(QIMAGE img){
  delete (QImage*)img;
}