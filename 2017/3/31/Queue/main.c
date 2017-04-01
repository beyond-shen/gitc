#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(){
  qunode h = NULL;
  h = initqueue(0);
  printf("%d\n", h -> data);
  linkqueue * q = NULL;
  q = pointqueue(h);
  return 0;
}
