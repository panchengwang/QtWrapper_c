#ifndef __QIMAGE_C_H
#define __QIMAGE_C_H

#ifdef __cplusplus
extern "C"{
#endif

typedef void* QIMAGE;

QIMAGE qimage_new(int width,int height,int format);
void qimage_destroy(QIMAGE img);

#ifdef __cplusplus
}
#endif
#endif