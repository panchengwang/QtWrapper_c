#include <qapplication_c.h>
#include <QtGui>

QAPPLICATION qapp_init(){
  int n=0;
  return (QAPPLICATION) new QGuiApplication(n,NULL);
}


void qapp_destroy(QAPPLICATION app){
  ((QGuiApplication*)app)->deleteLater();
  delete (QGuiApplication*)app;
}