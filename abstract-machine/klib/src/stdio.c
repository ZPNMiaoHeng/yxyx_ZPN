#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

typedef uint64_t word_t;

static int
mini_itoa(long value, unsigned int radix, int uppercase, int unsig,char *buffer) {

  char *pbuffer = buffer;
  int negative = 0;
  int i, len;

  if (radix > 16) return 0;

  if (value < 0 && !unsig) {
    negative = 1;
    value = -value;
  }

  do {
    int digit = value % radix;
    *(pbuffer++) = (digit < 10 ? '0' + digit : (uppercase ? 'A' : 'a') + digit - 10);
    value /= radix;
  } while (value > 0);

  if (negative)
    *(pbuffer++) = '-';

  *(pbuffer) = '\0';

  len = (pbuffer - buffer);
  for (i = 0; i < len / 2; i++) {
    char j = buffer[i];
    buffer[i] = buffer[len-i-1];
    buffer[len-i-1] = j;
  }

  return len;
}

void itoa(const int n, char* buf){
//  int i;
  mini_itoa(n, 10, 1, 0, buf);

/*
  if(n < 10 ){
    buf[0] = n + '0';
    buf[1] = '\0';
  } else {
    itoa(n/10, buf);
    for (i=0; buf[i]!='\0'; i++);
    buf[i] = (n%10) + '0';
    buf[i+1] = '\0';
  }
  */
}

void xtoa(const int n, char* buf){
  mini_itoa(n, 16, 1, 0, buf);
/*
  int i;
  if(n < 16 ){
    buf[0] = n + '0';
    buf[1] = '\0';
  } else {
    itoa(n/16, buf);
    for (i=0; buf[i]!='\0'; i++);
    buf[i] = (n%16) + '0';
    buf[i+1] = '\0';
  }
  */
}

void litoa(const int n, char* buf){
    mini_itoa(n, 10, 1, 1, buf);
/*
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
*/
}

void lxtoa(const int n, char* buf){
  mini_itoa(n, 16, 1, 0, buf);
/*
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
  */
}


int printf(const char *fmt, ...) {
  // putch('j');
  // putch('f');
  // putch('\n');
  char buf[5000];
  va_list ap;
  int ret = -1;
  va_start(ap, fmt);
  ret = vsprintf(buf, fmt, ap);
  va_end(ap);

  for (const char *p = buf; *p; p++) {
    putch(*p);
  }
  return ret;
  //panic("Not implemented");
}

 int vsprintf(char *out, const char *fmt, va_list ap) {
  char ch;
	char *s = out;
  char *str;
  char buf[128];
  char digit[16];
  int num = 0;
  //int len = 0;
  int n;
  word_t ln;
  memset(buf, 0, sizeof(buf));
  memset(digit, 0, sizeof(digit));
    
	while( (ch = *(fmt++))){
		if(ch != '%'){
			*s++ = ch;
      num++;
		}else{
			ch = *(fmt++);
			switch(ch){
				case 'd':
          n = va_arg(ap, int);
					if(n<0){
						*s++ = '-';
						n = -n;
            num++;
					}
					itoa(n, buf);
          memcpy(s, buf, strlen(buf));
          s += strlen(buf);
          num += strlen(buf);
					break;
				case 's':
					str = va_arg(ap, char *);
					memcpy(s, str, strlen(str));
          s += strlen(str);
          num += strlen(str);
					break;
        case 'x':
          n = va_arg(ap, int);
          xtoa(n, buf);
          memcpy(s, buf, strlen(buf));
          s += strlen(buf);
          num += strlen(buf);
          break;
        case 'l':
          ch = *(fmt++);
          switch (ch)
          {
          case 'u'://lu
            ln = va_arg(ap,word_t);
            // if(ln<0){
						//   *s++ = '-';
						//   n = -n;
            //   num++;
					  // }
            litoa(ln, buf);
            memcpy(s, buf, strlen(buf));
            s += strlen(buf);
            num += strlen(buf);
            break;
          case 'x'://lx
            ln = va_arg(ap, word_t);
            lxtoa(ln, buf);
            memcpy(s, buf, strlen(buf));
            s += strlen(buf);
            num += strlen(buf);
            break;
          default:
            panic("printf don't support!\n");
            break;
          }
          break;
				default:putch(ch); break;
			}
		}
	} 
	*s = '\0';
  if(num > 0){
    return num;
  }
  return -1;
}

///* Write formatted output to S.  */
int sprintf(char *out, const char *fmt, ...) {
    va_list ap;
    int ret = -1;
    va_start(ap, fmt);
    ret = vsprintf(out, fmt, ap);
    va_end(ap);
    return ret; 
  //panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif



/**
#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static int
mini_itoa(long value, unsigned int radix, int uppercase, int unsig,char *buffer) {

  char  *pbuffer = buffer;
  int negative = 0;
  int i, len;

  if (radix > 16) return 0;

  if (value < 0 && !unsig) {
    negative = 1;
    value = -value;
  }

  do {
    int digit = value % radix;
    *(pbuffer++) = (digit < 10 ? '0' + digit : (uppercase ? 'A' : 'a') + digit - 10);
    value /= radix;
  } while (value > 0);

  if (negative)
    *(pbuffer++) = '-';

  *(pbuffer) = '\0';

  len = (pbuffer - buffer);
  for (i = 0; i < len / 2; i++) {
    char j = buffer[i];
    buffer[i] = buffer[len-i-1];
    buffer[len-i-1] = j;
  }

  return len;
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


int printf(const char *fmt, ...) {
  static int count = 0 ,n ;
  char buf[24];
  char *s = buf;
  char ch;
  memset(buf, 0, sizeof(buf));
  va_list ap;
	va_start(ap, fmt);
  
	while (*fmt != '\0'){
    if (*fmt == '%'){
			switch (*++fmt){
        case 'c': {
//          putch('C');
          ch = (char)(va_arg(ap, int));
          putch(ch);
          count++;
          break;
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
          count = mini_itoa(n, 16, 1, 0, buf);
          while(*s) {
            putch(*s);
            s++;
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
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
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
*/
