/*练习题12 13*/
#include <stdio.h>

int main(){
  int n = 0;
  if(n >= 1 <= 10) // 不论n为何值，n >= 1 的结果为0/1都比10小，表达式的值都为1
    printf("n is between 1 and 10\n");
  int i = 17, j = -17;
  printf("%d\n", i >= 0 ? i : -i);
  printf("%d\n", j >= 0 ? j : -j);
  return 0;
}
