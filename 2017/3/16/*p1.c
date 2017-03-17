#include <stdio.h>

int main(void){
  int a[5] = {1,2,3,4,5};
   char*p;
  int i;
  p = a;
  for(i = 0; i < 5; i++){
    printf("%d\t%p\n", *p, p);
    p = p + 4;
  }
  return 0;
}
