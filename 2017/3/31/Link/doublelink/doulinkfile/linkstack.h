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
int insert(link * h, int val);
void delete(link * h, int val);
void update(link * h, int val, int val1);
int uinsert(link * h, int val, int val1);
