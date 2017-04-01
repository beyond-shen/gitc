#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct  node{
  int book_id;
  struct node * prev;
  struct node * next;
}link;

link *  create(int val);
void show(link * h);
int push(link * h, int val);
int pop(link * h);
int emptystack(link * h);
int clearstack(link *h);
