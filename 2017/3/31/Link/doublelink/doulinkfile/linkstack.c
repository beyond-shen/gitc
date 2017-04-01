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
int insert(link *h, int val){
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

int uinsert(link * h, int val, int val1){
  link * p = NULL;
  p = malloc(sizeof(link));
  link * q = h -> next;
  if(p == NULL){
    printf("error for malloc!!!\n");
    return -1;
  }
  while(q != h){
    if((q -> book_id) == val){
      p -> book_id = val1;
      q -> next -> prev = p;
      p -> prev = q;
      p -> next = q -> next;
      q -> next = p;
      break;
    }
    q = q ->next;
  }
  return 0;
}

void show(link * h){
  link * q = h-> next; //next;
  while(q != h){
    printf("h -> data = %d\n", q -> book_id);
    q = q -> next;  //next;
  }
}

void delete(link * h, int val){
  link * q = h-> next;
  while(q != h){
    if((q -> book_id) == val){
      q -> next -> prev = q -> prev;
      q -> prev -> next = q -> next;
      break;
    }
    q = q -> next;
  }
  free(q);
}

void update(link * h, int val, int val1){
  link * q = h-> next;
  while(q != h){
    if((q -> book_id) == val){
      q ->book_id = val1;
      break;
    }
    q = q -> next;
  }
}
