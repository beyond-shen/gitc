/*链表*/
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

//链表定义
typedef struct node{
  int data; //存储数据域
  struct node *next;  //存放下一个节点地址的指针域
}linknode, *linklist;

//链表创建
int main(void){
  struct node *head = NULL;
  head = malloc(sizeof(struct node));
  /*void *malloc(size_t size);
    功能：申请指定大小的内存空间，并返回申请的起始地址
    返回NULL表示失败
    */
  if(head == NULL){ //需要容错判断
  }
  // 使用指针访问结构体成员， 使用“- >”
  head -> data = 10;
  head -> next = NULL;
  printf("%d\n", head -> data);
  printf("%p\n", head -> next);

  //C语言程序中不再使用的内存需要及时释放，否则会导致内存泄漏。
  /*void free(void *ptr);
 功能：释放指定起始地址上申请的内存空间
  */
  free(head); //释放申请的内存（同一块内存不可以free2次）
  return 0;
}
