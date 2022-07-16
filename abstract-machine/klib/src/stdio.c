#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

char buffer [32];
void itoa(const int n, char* buf);
char* inttohex(int n) {
  static int i = 0;
    if(n < 16) {
      if (n < 10)         //当前数转换成字符放入字符串 
        buffer[i] = n + '0';
      else {
        buffer[i] = n - 10 + 'A';
        buffer[i+1] = '\0';  //字符串结束标志 
      }
    }
    else {
      inttohex(n/16);   //递归调用 
      i++;                 //字符串索引+1 
      n %= 16;            //计算当前值
      if(n < 10)         //当前数转换成字符放入字符串 
          buffer[i] = n +  '0' ;
      else
          buffer[i] = n - 10 +  'A' ;
    }
    return  (buffer);
}

int printf(const char *fmt, ...) {

  static int count = 0 ,n ;
  char buf[65];
  char *s=buf;
  memset(buf, 0, sizeof(buf));
  va_list ap;
	va_start(ap, fmt);
  
	while (*fmt != '\0'){
    if (*fmt == '%'){
			switch (*++fmt){
        case 'c': {
          putch('C');
          char *pc = va_arg(ap, char*);
          putch(*pc);
          count++;
        }
			  case 'd':{
          n = va_arg(ap, int);                                     //将检测的 %d -> n
          itoa(n,buf);
          while (*s){
            putch(*s);
            s++;
            count++;
          }
          break;
			  }
			  case 's':{
					char *pc = va_arg(ap, char *);
					while (*pc){
						putch(*pc);
						pc++;
            count++;
					}
          break;
			  }
        case 'X': ;case 'x':{
          n = va_arg(ap, int);                                     //将检测的 %d -> n
          char *pc = inttohex(n);
          while(*pc) {
            putch(*pc);
            pc++;
            count++;
          }
          break;
        }
        case '0': 
          putch('0');
          break;
        case '2':
          putch('2');
          break;
			default: putch('G');return -1; 
			}
		}
		else {
			putch(*fmt);
		}
		fmt++;
    count ++;
	}
	va_end(ap);
  return count;

//  panic("Not implemented");
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
//  char *d = buf;
  memset(buf, 0, sizeof(buf));
  memset(out, 0 , 8 * sizeof(out));
  va_list ap;
  va_start(ap, fmt);

  while (*fmt != '\0'){
    if(*fmt == '%'){
      fmt++;                                                       // 检测到%，判断下一个字符
      switch (*fmt ){
        case 'd':{ 
          n = va_arg(ap, int);                                     //将检测的 %d -> n
          if(n < 0) {
              *out = '-';
              out++;
              n = -n;
          }
          itoa(n,buf);                 
          memmove(out,buf,strlen(buf));
//          d += strlen(buf);
          count += strlen(buf);
          out += strlen(buf);
          break;
          }
        case 's':{ 
          s = va_arg(ap, char *);
          memmove(out,s,strlen(s));
          count += strlen(s);
          out += strlen(s);
          memset(buf, 0, sizeof(buf));
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
