#include <stdio.h>

int main(void){
  int a[9] = {1,2,3,4,5,6,7,8,9};
  int i;
  for(i = 8; i >= 0; i--){
    printf("%d", a[i]);
  }
  printf("\n");
  return 0;
}
