/*练习1：计算位数*/

#include <stdio.h>

int main(void){
  int number, i;
  int sum = 0;
  printf("please Enter a number:");
  scanf("%d", &number);
  i = number;
  while(number /= 10){
    sum = sum + 1;
  }
  sum = sum + 1;
  printf("The number %d has %d digits\n", i, sum);
  return 0;
}
