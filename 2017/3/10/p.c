#include <stdio.h>

int main(void){
  int a = 10;
  int b = 20;
  int *p;
  printf("a = %d\t &a = %p\n", a, &a);

  p = &a;
  b = *p;
  printf("a = %d, b = %d\n", a, b);
  printf ("p = %d\t &p = %p\n", *p, p);
  printf("int = %lu\n",sizeof(int));
  return 0;
}
