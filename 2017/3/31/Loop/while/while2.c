/*程序：数列求和:8 23 71 5*/
#include <stdio.h>

int main(void){
  int n, sum = 0;
  printf("This program sums a series of integers.\n");
  printf("Enter integers (0 to terminate):");

  scanf("%d", &n);
  while ( n != 0){   //输入时输入8 23 71 5 0，用 0 作为循环终结条件
    sum += n;
    scanf("%d", &n);
  }
  printf("The sum is: %d\n", sum);
  return 0;
}
