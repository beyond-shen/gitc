/*程序：显示平方值的表格*/
#include <stdio.h>
#include <math.h>

int main(void){
  int i = 1 ,j, n;
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table:");
  scanf("%d", &j);

  while(i <= j){
   //printf("%10d\t", i);
    //n = pow(i, 2);
    //printf("%10d\n", n);
    printf("%10d%10d\n",i, i *i); //使用这样的转换说明代替%d，这样做可以使输出对齐
    i++;
  }
  return 0;
}
