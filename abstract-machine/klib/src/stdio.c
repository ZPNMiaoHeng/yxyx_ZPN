#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void itoa(const int n, char* buf);
static int mini_itoa(long value, unsigned int radix, int uppercase, int unsig,char *buffer);
static int mini_pad(char* ptr, int len, char pad_char, int pad_to, char *buffer);

int printf(const char *fmt, ...) {

  static int count = 0 ,n ;
  char buf[24];
  char buf2[24];
  char *s=buf;
  char ch;
  memset(buf, 0, sizeof(buf));
  va_list ap;
	va_start(ap, fmt);
  
  while ((ch = *(fmt++))) {
    if (*fmt == '%'){
      char pad_char = ' ';
			int pad_to = 0;
			char *ptr;
			ch=*(fmt++);
			/* Zero padding requested */
			if (ch == '0') pad_char = '0';
			/* Data Width */
      while (ch >= '0' && ch <= '9') {
				pad_to = pad_to * 10 + (ch - '0');
				ch=*(fmt++);
			}
			if(pad_to > (signed int) sizeof(buf)) {
				pad_to = sizeof(buf);
			}

			switch (ch){
        case 'c': {
          putch('C');
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

static int
mini_itoa(long value, unsigned int radix, int uppercase, int unsig,char *buffer) {
  /* radix->, */
  char  *pbuffer = buffer;
  int negative = 0;
  int i, len;

  /* No support for unusual radixes. */
  if (radix > 16) return 0;

  if (value < 0 && !unsig) {
    negative = 1;
    value = -value;
  }

  /* This builds the string back to front ... */
  do {
    int digit = value % radix;
    *(pbuffer++) = (digit < 10 ? '0' + digit : (uppercase ? 'A' : 'a') + digit - 10);
    value /= radix;
  } while (value > 0);

  if (negative)
    *(pbuffer++) = '-';

  *(pbuffer) = '\0';

  /* ... now we reverse it (could do it recursively but will
   * conserve the stack space) */
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

static int
mini_pad(char* ptr, int len, char pad_char, int pad_to, char *buffer)
{
	int i;
	int overflow = 0;
	char * pbuffer = buffer;
	if(pad_to == 0) pad_to = len;
	if(len > pad_to) {
		len = pad_to;
		overflow = 1;
	}
	for(i = pad_to - len; i > 0; i --) {
		*(pbuffer++) = pad_char;
	}
	for(i = len; i > 0; i --) {
		*(pbuffer++) = *(ptr++);
	}
	len = pbuffer - buffer;
	if(overflow) {
		for (i = 0; i < 3 && pbuffer > buffer; i ++) {
			*(pbuffer-- - 1) = '*';
		}
	}
	return len;
}
