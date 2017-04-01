#include <stdio.h>

int main(void){
  int i ;
  for(i = 10; i > 0; --i){ //i--换 --i不影响结果，因为第一个和第三个表达式都是单独语句执行的，i的变化不影响结果。
    printf("%d\n", i);
  }
  i = 10;
  while(i > 0){
    printf("%d\n", i);
    --i;
  }
  return 0;
}
