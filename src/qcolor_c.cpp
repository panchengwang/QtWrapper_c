#include <qcolor_c.h>
#include <QtGui>


QCOLOR qcolor_create_from_rgb(int r, int g, int b){
  return (QCOLOR) new QColor(r,g,b);
}


QCOLOR qcolor_create_from_rgba(int r, int g, int b, int a){
  return (QCOLOR) new QColor(r,g,b,a);
}


QCOLOR qcolor_create_from_color(QCOLOR color){
  return (QCOLOR) new QColor(*((QColor*)color));
}


void qcolor_destroy(QCOLOR color){
  delete (QColor*)color;
}
