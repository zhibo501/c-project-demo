#ifdef __cplusplus
extern "C" {
#endif

#ifndef __DEMO_LOG__
#define __DEMO_LOG__

enum LOG_LEVEL {
    DBG,
    INF,
    WRN,
    ERR,
    CRI
};

extern int dlog(int levl, char * info);

#endif

#ifdef __cplusplus
}
#endif /* end of __cplusplus */

