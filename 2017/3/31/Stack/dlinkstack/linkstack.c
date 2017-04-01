#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkstack.h"

link * create(int val){
  link * h = NULL;
  h = malloc(sizeof(link));
  if(h == NULL){
    printf("error for malloc!!!\n");
  }
  h ->book_id = val;
  h -> prev = h;
  h -> next = h;

  return h;
}
int push(link *h, int val){
  link * p = NULL;
  p = malloc(sizeof(link));
  if(p == NULL){
    printf("error for malloc!!!\n");
    return -1;
  }

  p -> book_id = val;
  h-> next -> prev = p;
  p -> prev = h;
  p -> next = h -> next;
  h -> next = p;

  return 0;
}


void show(link * h){
  link * q = h-> prev; //next;
  while(q != h){
    printf("h -> data = %d\n", q -> book_id);
    q = q -> prev;  //next;
  }
  if((h -> next) == h)
    printf("stack is empty!\n");
}

int pop(link * h){
  int sum;
  link * q = h-> next;
  q -> next -> prev = q -> prev;
  sum = q -> book_id;
  q -> prev -> next = q -> next;
  free(q);
  return sum;
}

int emptystack(link * h){
  if((h -> next) == h)
    printf("stack is empty!\n");
  return 0;
}
int clearstack(link * h){
  link * q = h -> next;
  while(q != h){
    q -> next -> prev = q -> prev;
    q -> prev -> next = q -> next;
    free(q);
    q = q -> next;
  }
  return 0;
}
