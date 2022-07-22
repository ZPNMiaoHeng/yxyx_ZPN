#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

char memory[2000];
struct block {
  size_t size;
  int free;
  struct block *next;  
} *freeList;

void initialize()  {  
//    struct block *freeList = (void *)memory;                 
    freeList = (void *)memory;                 
    freeList->size=2000-sizeof(struct block);              //可用空间大小  
    freeList->free=1;                                      //1：空闲 0：使用  
    freeList->next=NULL;                                   //指向空  
}
void split(struct block *fitting_slot,size_t size)
{
    struct block *new=(void*)((void*)fitting_slot+size+sizeof(struct block));   //定义new的地址
    new->size=(fitting_slot->size)-size-sizeof(struct block);                   //定义size大小
    new->free=1;                                                                //设置是否工作
    new->next=fitting_slot->next;                                               //独立出去，形成新的块
    fitting_slot->size=size;
    fitting_slot->free=0;
    fitting_slot->next=new;
}


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

void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
/*
    struct block *curr;// *prev;
    void *result;
    if(!(freeList->size)){
        initialize();
    }
    curr=freeList;
    while((((curr->size)<size)||((curr->free)==0))&&(curr->next!=NULL)){
//        prev=curr;
        curr=curr->next;
    }
    if((curr->size)==size){
        curr->free=0;
        result=(void*)(++curr);
        return result;
    }
    else if((curr->size)>(size+sizeof(struct block)))            //所需要的内存大小小于区块大小
    {
        split(curr,size);                                        //分割区块函数
        result=(void*)(++curr);                                       //使用的位置
        return result;
    }
    else
    {
        result=NULL;
        return result;
    }
*/

#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  panic("Not implemented");
#endif
  return NULL;

}

void free(void *ptr) {

}

#endif
