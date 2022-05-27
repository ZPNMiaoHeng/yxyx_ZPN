#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {                 // s -> int 
  int x = 0;
  while (*nptr == ' ') { nptr ++; }          // 检测空格就,继续检测
  while (*nptr >= '0' && *nptr <= '9') {     // 检测到字符串:字符串数字 -> 整形数字
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

void itoa(const int n, char* buf){
  int i;
  if(n < 10 ){
    buf[0] = n + '0';
    buf[1] = '\0';
  } 
  itoa(n/10, buf);
  for (i=0; buf[i]!='\0'; i++);
  buf[i] = (n%10) + '0';
  buf[i+1] = '\0';
}

void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  panic("Not implemented");
#endif
  return NULL;
}

void free(void *ptr) {

}

#endif
