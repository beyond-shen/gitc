#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

qunode initqueue(int val){
  qunode h = NULL;
  h =(qunode)malloc(sizeof(qnode));
  if(h == NULL){
    printf("error for malloc!");
  }
  h -> data = val;
  h -> next = NULL;
  return h;
}

linkqueue * pointqueue(qunode h){
  linkqueue * q = NULL;
  q = malloc(sizeof(linkqueue));
  if(q == NULL){
    printf("error for malloc!");
  }
  q -> front = q -> rear = h;
  return q;
}
