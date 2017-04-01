#include <stdio.h>

int main(void){
  int i, j;
  i = 4, j = 3;
/*  j = i++ + i++;*/

  printf("%d\n", (-i) / j);
  printf("%d\n", - (i / j));

  return 0;
}
