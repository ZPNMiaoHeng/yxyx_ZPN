#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
//#include <debug.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
// test pass
size_t strlen(const char *s) {
  int len=0;
  while(*s++ != '\0'){
    len++;
  }
  return len;
}
// test pass
char *strcpy(char *dst, const char *src) {
//  Assert(dst != NULL && src != NULL,"dst or src is NULL!");
  char *ret = dst;
  while((*dst++ = *src++) != '\0');
  return ret;
  //panic("Not implemented");
}
//test pass
char *strncpy(char *dst, const char *src, size_t n) {
//  Assert(dst != NULL && src != NULL && n > 0 , "dst or src is NULL,and n should >0!");
  char *ret = dst;
  while ((*dst++ =*src ++) != '\0' && n>0){n--;}
  return ret;
//  panic("Not implemented");
}
// test pass
char *strcat(char *dst, const char *src) {
//  Assert(dst != NULL && src != NULL,"dst or src is NULL!");

  char *temp =dst;
  while(*temp !='\0') temp++;
  while((*temp++ = *src++)!='\0');
  return dst;
  
  //panic("Not implemented");
}
// test pass
int strcmp(const char *s1, const char *s2) {
//  Assert(s1 != NULL && s2 != NULL,"s1 or s2 is NULL!");

  int temp=0 ;
  while(!(temp =*(unsigned char *)s1 - *(unsigned char *)s2) && *s1){     //data 相等则向下执行判断
    s1++;
    s2++;
  }
  if(temp == 0)
    return 0;
  else {
    if(temp > 0 )
      return 1;
    else return -1;
  }  
}
// test pass
int strncmp(const char *s1, const char *s2, size_t n) {
//  Assert(s1 != NULL && s2 != NULL,"s1 or s2 is NULL!");
  
  while (n--){
    if(*s1 == *s2 && *s1 != '\0')
      return 0;
    else return (*s1 -*s2);
  }
  return 0;
//  panic("Not implemented");
}
// test pass
void *memset(void *s, int c, size_t n) {
//  Assert(s != NULL ,"s is NULL!");

  char *ret = s;
  while(n--){
    *(char *)s++ = (char) c;
  }
  return ret;
}
// test pass 
void *memmove(void *dst, const void *src, size_t n) {
//  Assert(dst != NULL && src != NULL,"dst or src is NULL!");

  void *ret = dst;
  if(dst <= src || (char *)dst >= (char *)src +n){
    while (n--){
      *(char *)dst = *(char *)src;
      dst = ((char *)dst) +1;
      src = ((char *)src) +1;
    }
  } else {
    dst = (char *)dst + n;
    src = (char *)src + n;
    while (n--){
      *(char *)dst = *(char *)src;
        dst = (char *)dst -1;
        src = (char *)src -1;
    }
  }
  return (ret);
//  panic("Not implemented");
}
// test pass
void *memcpy(void *out, const void *in, size_t n) {
//  Assert(out != NULL && in != NULL,"out or in is NULL!");
  void *ret = out;
  while (n--){
    *(char *) out = * (char *) in;
    out = (char *)out + 1;
    in  = (char *)in +1;
  }
  return (ret);
}
// test pass
int memcmp(const void *s1, const void *s2, size_t n) {
//  Assert(s1 != NULL && s2 != NULL,"s1 or s2 is NULL!");
  int ret =0;
  if(n == 0) return ret;
  else {
    while(n--){
      if(*(char *)s1 != *(char *)s2 ) {ret = (*(char *)s1 - *(char *)s2);  return ret;}
      else if(*(char *)s1 == '\0') return ret;

      s1 = (char *)s1 +1 ; 
      s2 = (char *)s2 +1 ;
      }
    }
  return ret;
}

#endif
