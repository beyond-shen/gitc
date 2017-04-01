#include <stdio.h>

int main(void){
  int i,j;

  printf("Enter two numbers:");
  scanf("%d%d", &i, &j);              /*输入为 4 28*/

  /*printf("Enter two numbers:");     /* 输入为 4,28
  scanf("%d,%d", &i, &j);*/

  printf("i = %d, j = %d\n", i, j);

  return 0;
}
