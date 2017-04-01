#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkstack.h"

int main(void){
  link * head;
  head = create(0);
  insert(head,1);
  insert(head,2);
  insert(head,3);
  insert(head,4);
  insert(head,5);
  insert(head,6);
  insert(head,7);
  show(head);
  //delete(head,1);
  //update(head,2,8);
  uinsert(head,4,8);
  printf("+++++++++++++++++++++++++++++\n");
  show(head);

  return 0;
}
