#include <stdio.h>
#include <stdlib.h>
#include <qapplication_c.h>

int main(int argc, char** argv){

  printf("************* Test Qt C Wrapper\n");

  QAPPLICATION app = qapp_init();


  qapp_destroy(app);
  return EXIT_SUCCESS;
}