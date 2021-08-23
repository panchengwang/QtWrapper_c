#ifndef __QAPPLICATION_C_H
#define __QAPPLICATION_C_H

#ifdef __cplusplus
extern "C"{
#endif

typedef void* QAPPLICATION ;

QAPPLICATION qapp_init();
void qapp_destroy(QAPPLICATION app);

#ifdef __cplusplus
}
#endif
#endif