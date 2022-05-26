#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
/*
  int sum;                                //返回值：输入字符串大小
  char s;
  char *ret = out;
  va_list ap;

  va_start(ap, fmt);

  while (*fmt !== '\0'){

    if(*fmt == '%'){
      fmt++;                              // 检测到%，判断下一个字符
      switch ( *fmt ){
        case 'd':{ break;}
        case 's':{ 
          s = va_arg(ap, char *);
          memcpy(out,s,strlen(s));
          = strlen


          break;
          }
        
        default:  break; //遇到中间字符串，直接打印
      }
    } else {fmt++; }    //跳过之前字符串
    
  }
  */
  panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
