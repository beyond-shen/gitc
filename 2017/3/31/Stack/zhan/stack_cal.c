/*顺序栈的基本操作算法描述*/

#include <stdio.h>
#include <stdlib.h>

#define StACK_INIT_SIZE 100  //存储空间初始化分配量
#define STACKINCREMENT 10    /* 存储空间分配增量 */

typedef int SElemType

typedef struct{
  SElemType * base;
  SElemType * top;
  int stacksize;
}SqStack;
/*构造空栈s*/
Status InitStack(SqStack &s){
  s.base = (SElemType *)malloc(StACK_INIT_SIZE * sizeof(SElemType)); //申请空间大小为（存储量 × 每个量占有的字节数）并返回空间所在地址
  if(!s.base)exit(OVERFLOW)； //存储分配失败
  s.top = s.base;   //栈为空
  s.stacksize = StACK_INIT_SIZE;
  return OK;
}

Status GetTop(SqStack s, SElemType &e){
  //若栈不空，则用e返回s的栈顶元素，并返回ok；否则返回error
  if(s.top == s.base)
  return ERROR;
  e = *(s.top - 1);  //指针top是指向栈顶的下一个地址
  return OK；
}

Status Push(SqStack &s, SElemType e){
  if(s.top - s.base >= s.stacksize){
    s.base = (SElemType *)realloc(s.base, (s.stacksize + STACKINCREMENT) * sizeof(SElemType));
    if(!s.base)exit(OVERFLOW)； //存储分配失败
    s.top = s.base + s.stacksize;
    s.stacksize += STACKINCREMENT;
  }
  *s.top++ = e;
  return OK;
}
Status Pop(SqStack &s.SElemType &e){
  //若栈不空，则删除s的栈顶元素，用e返回其值，并返回OK,否则返回ERRoR
  if(s.top == s.base) return ERROR;
  e = * --s.top;
  return OK;
}
