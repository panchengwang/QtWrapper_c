#ifndef __QIMAGE_C_H
#define __QIMAGE_C_H

#ifdef __cplusplus
extern "C"{
#endif

#include <qcolor_c.h>

#define IMAGE_Format_Invalid                      0
#define IMAGE_Format_Mono                         1
#define IMAGE_Format_MonoLSB                      2
#define IMAGE_Format_Indexed8                     3
#define IMAGE_Format_RGB32                        4
#define IMAGE_Format_ARGB32                       5
#define IMAGE_Format_ARGB32_Premultiplied         6
#define IMAGE_Format_RGB16                        7
#define IMAGE_Format_ARGB8565_Premultiplied       8
#define IMAGE_Format_RGB666                       9
#define IMAGE_Format_ARGB6666_Premultiplied       10
#define IMAGE_Format_RGB555                       11
#define IMAGE_Format_ARGB8555_Premultiplied       12
#define IMAGE_Format_RGB888                       13
#define IMAGE_Format_RGB444                       14
#define IMAGE_Format_ARGB4444_Premultiplied       15
#define IMAGE_Format_RGBX8888                     16
#define IMAGE_Format_RGBA8888                     17
#define IMAGE_Format_RGBA8888_Premultiplied       18
#define IMAGE_Format_BGR30                        19
#define IMAGE_Format_A2BGR30_Premultiplied        20
#define IMAGE_Format_RGB30                        21
#define IMAGE_Format_A2RGB30_Premultiplied        22
#define IMAGE_Format_Alpha8                       23
#define IMAGE_Format_Grayscale8                   24
#define IMAGE_Format_Grayscale16                  28
#define IMAGE_Format_RGBX64                       25
#define IMAGE_Format_RGBA64                       26
#define IMAGE_Format_RGBA64_Premultiplied         27
#define IMAGE_Format_BGR888                       29





typedef void* QIMAGE;


QIMAGE qimage_create(int width,int height,int format);
void qimage_destroy(QIMAGE image);
void qimage_save_to_file(QIMAGE image, const char* filename, const char* format);
char* qimage_save_to_stream(QIMAGE image, const char* format, int* len);
QIMAGE qimage_fill_rgba(QIMAGE image, int r, int g, int b, int a);
QIMAGE qimage_fill_rgb(QIMAGE image, int r, int g, int b);
QIMAGE qimage_fill_color(QIMAGE image, QCOLOR color);

#ifdef __cplusplus
}
#endif

#endif