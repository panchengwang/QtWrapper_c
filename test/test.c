#include <stdio.h>
#include <stdlib.h>
#include <qapplication_c.h>
#include <qimage_c.h>

int main(int argc, char** argv){

  int len;
  char* data;

  fprintf(stderr,"************* Test Qt C Wrapper\n");

  QAPPLICATION app = qapp_init();
  QIMAGE img = qimage_create(800,600,IMAGE_Format_ARGB32);
  
  qimage_save_to_file(img,"/Users/pcwang/pctools/QtWrapper_c/build/b.png","png");
  data = qimage_save_to_stream(img,"PNG",&len);
  for(int i=0; i<len; i++){
    printf("%c",data[i]);
  }
  qapp_destroy(app);
  return EXIT_SUCCESS;
}