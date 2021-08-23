#ifndef __QPAINTER_C_H
#define __QPAINTER_C_H

#ifdef __cplusplus
extern "C"{
#endif

#include <qimage_c.h>

typedef void* QPAINTER;

QPAINTER qpainter_create_for_image(QIMAGE image);

void qpainter_destroy(QPAINTER painter);

#ifdef __cplusplus
}
#endif
#endif