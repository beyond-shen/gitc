#include <stdio.h>

int main(void){
  int i, j, tmp,h;
  int a[10] = {1,8,2,4,9,6,3,7,5,0};

  for (i = 0; i < 10; i++){

    h = i;
    for(j = i + 1;j < 10; j++){
      if(a[h] > a[j]){
        h = j;
      }
    }
    if(h != i){
    tmp = a[i];
    a[i] = a[h];
    a[h] = tmp;
    }
  }
  for (i = 0; i < 10; i++){
    printf ("%d", a[i]);
  }
  printf("\n");
  return 0;
}
