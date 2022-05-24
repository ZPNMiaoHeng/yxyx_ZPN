#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
//#include <debug.h>
//#include <klib.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  /*
  int len=0;
  while(*s++ != '\0'){
    len++;
  }
  return len;
  */
 panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
//  Assert(dst != NULL && src != NULL,"dst or src is NULL!");
  char *ret = dst;
  while((*dst++ = *src++) != '\0');
  return ret;
  //panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
//  Assert(dst != NULL && src != NULL && n > 0 , "dst or src is NULL,and n should >0!");
/*
    int size = sizeof(char)*(n+1);
    char *tmp = (char *) malloc(size);

    if(tmp){
      memset(tmp, '\0', size);
      memcpy(tmp, src, size-1);
      memcpy(dst, tmp, size);

      free(tmp);
      return dst;
    } else {
      return NULL;
    }
    */
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
//  Assert(dst != NULL && src != NULL,"dst or src is NULL!");

  char *temp =dst;
  while(*temp !='\0') temp++;
  while((*temp++ = *src++)!='\0');
  return dst;
  
  //panic("Not implemented");
}
/*it is ok*/
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

int strncmp(const char *s1, const char *s2, size_t n) {
//  Assert(s1 != NULL && s2 != NULL,"s1 or s2 is NULL!");
  /*
  while (n--){
    if(*s1 == *s2 && *s1 != '\0')
      return 0;
    else return (*s1 -*s2);
  }
  return 0;*/
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
//  Assert(s != NULL ,"s is NULL!");

  char *ret = s;
  while(n--){
    *(char *)s++ = (char) c;
  }
  return ret;
}

void *memmove(void *dst, const void *src, size_t n) {
//  Assert(dst != NULL && src != NULL,"dst or src is NULL!");
/*
  void *ret = dst;
  if(dst <= src || (char *)dst >= (char *)src +n){
    while (n--){
      *(char *)dst = *(char *)src;
      dst = (char *)dst +1;
      src = (char *)src +1;
    }
  } else {
    dst = (char *)dst + n -1;
    src = (char *)src + n -1;
  while (n--){
    *(char *)dst = *(char *)src;
      dst = (char *)dst -1;
      src = (char *)src -1;
  }

  return (ret);*/
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
//  Assert(out != NULL && in != NULL,"out or in is NULL!");
/*
  void *ret = dst;
  while (n--){
    *(char *) out = * (char *) in;
    out = (char *)out + 1;
    in  = (char *)in +1;
  }
  return (ret);*/
  panic("Not implemented");
}

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
  /*
  unsigned char *s1_func = (char *)s1;
  unsigned char *s2_func = (char *)s2;

    //参数判断
    if(NULL == s1_func || NULL == s2_func || 0 > n){
        return 0;
    }

    //比较
    while(n-- && *(s1_func) == *(s2_func)){
        s1_func++;
        s2_func++;        
    }

    return ((*s1_func - *s2_func));
    */
//   return 0;
}

#endif
