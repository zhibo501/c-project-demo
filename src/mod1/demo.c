#ifdef __cplusplus
extern "C" {
#endif

#include "demo.h"
#include "log.h"

int adder(int a, int b) {
    dlog(DBG, "hello adder (a + b)");
    return (a+b);
}

#ifdef __cplusplus
}
#endif /* end of __cplusplus */

