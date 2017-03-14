#include <stdio.h>

void swap(int *p, int *q){
  printf("p = %d\t q = %d\n", *p, *q);
  int tmp;
  tmp = *p;
  *p = *q;
  *q = tmp;
  printf("p = %d\t q = %d\n", *p, *q);
}


int main(){
  int a = 10;
  int b = 20;

  swap(&a, &b);
  printf("a = %d\t b = %d\n", a, b);
  return 0;
}
