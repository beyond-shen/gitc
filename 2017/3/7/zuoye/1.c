#include <stdio.h>

int main(void){
  int a[8] = {15, 26, 18, 46, 19 ,50, 4, 30};
  int i;
  int sum = 0;
  for(i = 0; i < 8; i++){
    sum = sum + a[i];
  }
  printf ("sum = %d\n", sum);
  return 0;
}
