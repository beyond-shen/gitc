#include <stdio.h>

int main(void){
  int i, j;
  int a[6][6] = {{0,1,0}};



  for (i = 1; i < 6; i++){
    for (j = 1; j < 6; j++){
      a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
    printf("%2d", a[i][j]);
  }
  printf("\n");
  return 0;
}
