#include <qpainter_c.h>
#include <QtGui>

QPAINTER qpainter_create(){
  return (QPAINTER)new QPainter();
}


QPAINTER qpainter_begin_image(QPAINTER painter, QIMAGE  image){
  QPainter *p = (QPainter*)painter;
  QImage *img = (QImage*)image;
  p->begin(img);
  return painter;
}


QPAINTER qpainter_end(QPAINTER painter){
  QPainter *p = (QPainter*)painter;
  p->end();
}


void qpainter_destroy(QPAINTER painter){
  delete (QPainter*)painter;
}

