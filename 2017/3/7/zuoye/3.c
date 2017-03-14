#include <stdio.h>

int main(void){
  int a[5] = {1, 23, 10, 89, 35};
  int i;
  int h;
  h = 0;

  for(i = h + 1; i < 5; i++){
    if(a[h] < a[i]){
      h = i;
    }
  }
  printf ("max = %d\n", a[h]);

  return 0;
}
