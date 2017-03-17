#include <stdio.h>

int main(void){
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int *p;
  p = a;
  int i;
  printf("p = %p\n", p);

  for(i = 0; i < 10; i++){
    printf("a[%d] = %d\t%p\n", i, *p, p);
    p++;
  }
  return 0;
}
