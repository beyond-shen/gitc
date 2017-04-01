/*递归函数*/
#include <stdio.h>

void recursion(int sum){
  sum = sum + 1;
  if(sum < 100){
    recursion(10);
  }
}

int main(void){
  recursion(10);
  return 0;
}
