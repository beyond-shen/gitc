#include <stdio.h>

int main(void){
  int i = 10;
  do
  printf("T minus %d and counting\n", i--);
  while(i > 0); // ';'一定不能忘
  return 0;
}
