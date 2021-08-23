#ifndef __QCOLOR_C_H
#define __QCOLOR_C_H

#ifdef __cplusplus
extern "C"{
#endif

typedef void* QCOLOR;

QCOLOR qcolor_create_from_rgb(int r, int g, int b);
QCOLOR qcolor_create_from_rgba(int r, int g, int b, int a);
QCOLOR qcolor_create_from_color(QCOLOR color);
void qcolor_destroy(QCOLOR color);

#ifdef __cplusplus
}
#endif

#endif