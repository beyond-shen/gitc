/*while的例子*/
#include <stdio.h>

int main(void){
  int i = 1;
  while (i < 10) {
    printf("%d\n", i);
    i = i * 2;
    printf("%d\n", i);
  }
  printf("+++++++++++++++++++++++++++++++\n");
  i = 10;
  while(i > 0){
  //  printf("T minus %d and counting\n", i);
  //  i--;
  printf("T minus %d and counting\n", i--);  //简洁法
  }
  return 0;
}
