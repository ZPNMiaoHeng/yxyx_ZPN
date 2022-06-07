#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
/*
  int i; 
  char buf[256]; 

  va_list arg = (va_list)((char*)(&fmt) + 4); 
  i = sprintf(buf, fmt, arg); 
  write(buf, i); 
  return i; 
  */
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

void itoa(const int n, char* buf){
  int i;
  if(n < 10 ){
    buf[0] = n + '0';
    buf[1] = '\0';
  } else {
    itoa(n/10, buf);
    for (i=0; buf[i]!='\0'; i++);
    buf[i] = (n%10) + '0';
    buf[i+1] = '\0';
  }
}

int sprintf(char *out, const char *fmt, ...) {
  int count = 0;                                                    //返回值：输入字符串大小
  int  n;
  char *s;
  char buf[65];
  memset(buf, 0, sizeof(buf));
  va_list ap;
  va_start(ap, fmt);

  while (*fmt != '\0'){
    if(*fmt == '%'){
      fmt++;                                                       // 检测到%，判断下一个字符
      switch (*fmt ){
        case 'd':{ 
          n = va_arg(ap, int);                                     //将检测的 %d -> n
          if(n < 0){
              *out = '-';
              out++;
              n = -n;
          }
          itoa(n,buf);                 
          memmove(out,buf,strlen(buf));
          count += strlen(buf);
          out += strlen(buf);
          break;
          }
        case 's':{ 
          s = va_arg(ap, char *);
          memmove(out,s,strlen(s));
          count += strlen(s);
          out += strlen(s);
          break;
          }
        default:  break; //遇到中间字符串，直接打印
      }
    } else {
      *out = *fmt;
      out++;
      count++;
      if(*fmt == '\n'){}
    }    //跳过之前字符串
    fmt++;
  }
  va_end(ap);
  return count;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
