/*输出整数和浮点数*/
#include <stdio.h>

int main(void){
  int i = 40;
  float x = 839.21;

  printf("|%d|%5d|%-5d|%5.3d|\n",i, i, i, i);   /*|40|   40|40   |  040|*/
  printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);   /*|   839.210| 8.392e+02|839.21    |*/

  printf("Item\tunit\tputchars\n\tPrince\tDate\n");

  return 0;
}
