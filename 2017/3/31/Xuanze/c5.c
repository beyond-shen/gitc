/*练习题3：短路行为：防止逻辑表达式的副作用，当有&&、||时先计算左侧操作数的值然后是
右侧操作数的值，从而计算表达式的值。如果表达式的值可由左侧操作数推导出，那么将不计算右侧的的值
*/
#include <stdio.h>

int main(void){
  int i, j, k;
  i = 3, j = 4, k = 5;
  printf("%d\n", i < j || ++j < k);
  printf("%d %d %d\n",i, j, k);
  i = 7, j = 8, k = 9;
  printf("%d\n", i - 7 && j++ < k);
  printf("%d %d %d\n",i, j, k);
  i = 7, j = 8 , k = 9;
  printf("%d\n", (i = j ) || (j = k));
  printf("%d %d %d\n",i, j, k);
  i = 1, j = 1, k = 1;
  printf("%d\n", ++i || ++j && ++k);
  printf("%d %d %d\n",i, j, k);
  return 0;
}
