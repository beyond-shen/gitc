#include <stdio.h>
#include <stdlib.h>

typedef int datatype;  //勿忘分号

typedef struct node{
  datatype data;
  struct node *int next;
}qnode, *qunode;

typedef struct{
  qunode front;
  qunode rear;
}linkqueue;

qunode initqueue(int val);
linkqueue * pointqueue(qunode  h);
