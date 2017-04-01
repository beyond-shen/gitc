#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Books{
  struct Books * next;
  int book_id;
}node;

int insert(struct Books * head, int val);
void show(struct Books * head);
int uinsert(struct Books * q, int val, int id_book);
void delete(struct Books *k, int val);

int main(void){
  struct Books head;
  struct Books *p2;

  p2 = &head;
  head.book_id = 100;
  head.next = NULL;
  insert(&head,101);
  insert(&head,102);
  insert(&head,103);
  insert(&head,104);
  insert(&head,105);
  insert(&head,106);

  //show(&head);
  uinsert(&head,110,108);


  show(&head);
  return 0;
}

int insert(struct Books * p1, int val){
  struct Books * p = NULL;

  p = malloc(sizeof(struct Books));
  if(NULL == p){
    printf("error for malloc!\n");
    return -1;
  }
  p -> book_id = val;
  p -> next = NULL;
  while((p1 -> next) != NULL){
    p1 = p1 -> next;
  }
  p1 -> next  = p;
  return 0;
}
void delete(struct Books *k, int val){
  struct Books *tmp = NULL;
    if(k -> book_id == val){
      printf("Don't delete head\n");
    }
  while(k != NULL){
    if((k -> next) -> book_id == val){
      tmp = k ->next;
      k -> next = (k -> next) -> next;
      free(tmp);
      break;
    }
    k = k ->next;
  }
}

int uinsert(struct Books * q, int val, int id_book){
  struct Books * q1 = NULL;
  q1 = malloc(sizeof(struct Books));
  if(NULL == q1){
    printf("error for malloc\n");
    return -1;
  }
  while(q != NULL){
    if((q -> book_id) == val){
      q1 -> next = q -> next;
      q -> next = q1;
      q1 -> book_id = id_book;
      break;
    }
    q = q -> next;
  }
  return 0;
}


void show(struct Books * head){
  while(head != NULL){
    printf("head -> id = %d\n", head -> book_id);
    head = head -> next;
  }
}
