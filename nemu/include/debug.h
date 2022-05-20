#ifndef __DEBUG_H__
#define __DEBUG_H__

#include <common.h>
#include <stdio.h>
#include <utils.h>
// choose color -> bule ,  FORMAT: [文件名:代码行 函数名] +输入内容
#define Log(format, ...) \
    _Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_BLUE) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

// fflush(stdout)
// fprintf ：将错误内容标红存入 stderr数据流中
// assert_fail_msg：
#define Assert(cond, format, ...) \
  do { \
    if (!(cond)) { \
      MUXDEF(CONFIG_TARGET_AM, printf(ANSI_FMT(format, ANSI_FG_RED) "\n", ## __VA_ARGS__), \
        (fflush(stdout), fprintf(stderr, ANSI_FMT(format, ANSI_FG_RED) "\n", ##  __VA_ARGS__))); \
      IFNDEF(CONFIG_TARGET_AM, extern FILE* log_fp; fflush(log_fp)); \
      extern void assert_fail_msg(); \
      assert_fail_msg(); \
      assert(cond); \
    } \
  } while (0)
// 报错推出并显示内容
#define panic(format, ...) Assert(0, format, ## __VA_ARGS__)

#define TODO() panic("please implement me")

#endif
