#include <stdio.h>

int main(void){

  int i, j, k;

  i = 1;
  printf("i is %d\n", ++i);
  printf("i is %d\n", i);
  i = 1;
  printf("i is %d\n", --i);
  printf("i is %d\n", i);


  j = 1;
  printf("j is %d\n", j++);
  printf("j is %d\n", j);
  j = 1;
  printf("j is %d\n", j--);
  printf("j is %d\n", j);

  i = 1, j = 2;
  k;
  k = ++i + j++;
  printf("i, j, k is %d %d %d\n",i, j, k);

  i = 1, j = 2;
  k = i++ + j++;
  printf("i, j, k is %d %d %d\n",i, j, k);

  i = 1, j = 2;
  k = i++ + ++j;
  printf("i, j, k is %d %d %d\n",i, j, k);


  return 0;
}
