#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

#include "log.h"

int dlog(int l, char * s) {
    if (s != NULL) {
        printf("%s\n", s);
    }
    return 0;
}

#ifdef __cplusplus
}
#endif /* end of __cplusplus */

