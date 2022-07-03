//void     halt        (int code) __attribute__((__noreturn__));

#ifndef __DEBUG_H__
#define __DEBUG_H__

#include "debug.h"
#include <stdio.h>
#include <cassert>

//#include <assert.h>

// -------- log -----------------------------------------

#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_NONE       "\33[0m"
#define ANSI_FMT(str, fmt) fmt str ANSI_NONE               //: str color
#define _Log(...) \
  do { \
    printf(__VA_ARGS__); \
  } while (0)

#define Log(format, ...) \
    _Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_BLUE) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

//#define Assert(cond, format, ...) \
//  do { \
//    if (!(cond)) { \
//      MUXDEF(CONFIG_TARGET_AM, printf(ANSI_FMT(format, ANSI_FG_RED) "\n", ## __VA_ARGS__), \
//        (fflush(stdout), fprintf(stderr, ANSI_FMT(format, ANSI_FG_RED) "\n", ##  __VA_ARGS__))); \
//      IFNDEF(CONFIG_TARGET_AM, extern FILE* log_fp; fflush(log_fp)); \
      extern void assert_fail_msg(); \
      assert_fail_msg(); \
      assert(cond); \
//    } \
//  } while (0)


#define bool _Bool

__attribute__((noinline))
void check(bool cond) {
  if (!cond) assert(0)/*halt(1)*/;
}

#endif