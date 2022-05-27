#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
//#include <stdio.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
/*
  va_list ap;
  while (*fmt != '\0'){
    if(*fmt == '%'){
      fmt++;
      switch(*fmt){
        case 's':{   break;}
      }
    }
  }
  */
//  return 13;
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {

  int count = 0;                                //返回值：输入字符串大小
  int  n;
  char *s;
  char buf[65];
//  char *ret = out;
  va_list ap;

  va_start(ap, fmt);

  while (*fmt != '\0'){

    if(*fmt == '%'){
      fmt++;                              // 检测到%，判断下一个字符
      switch ( *fmt ){
        case 'd':{ 
          n = va_arg(ap, int);
          itoa(n,buf);
          assert(0);
          memmove(out,buf,strlen(buf));
          count = strlen(buf);
          //out++;
          break;
          }
        case 's':{ 
          s = va_arg(ap, char *);
          memmove(out,s,strlen(s));
          count = strlen(s);
          break;
          }

        default:  break; //遇到中间字符串，直接打印
      }
    } else {
      *out = *fmt;
      out++;
      if(*fmt == '\n'){}
      
    }    //跳过之前字符串
    fmt++;
  }

  va_end(ap);
  return count;
//  */
//  panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
