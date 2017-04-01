/*链式栈的初始化、判断空、遍历、入栈、出栈、栈的清空*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkstack.h"

int main(void){
  link * head;
  head = create(0);
  emptystack(head);
  push(head,1);
  push(head,2);
  push(head,3);
  push(head,4);
// emptystack(head);
  show(head);
  //clearstack(head);
  //emptystack(head);
 while((head ->next) != head){
    printf("pop = %d\n", pop(head));
  }
  show(head);
  return 0;
}
