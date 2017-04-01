/*函数指针：存放函数的地址，这个地址是函数调用时的起始地址*/
//当一个函数指针指向了一个函数，就可以通过这个指针来调用该函数，函数指针可以将函数作为参数传递给其他函数调用。
//函数指针变量说明的一般形式如下：
//返回值数据类型 （*函数指针名称)（参数说明列表)；
#include <stdio.h>
int (*fun)(int a, int b);
int sum(int a, int b){
  return a + b;
}
int main(void){
  int c;
  fun = sum;

  c = fun(10, 20);
  printf("%d\n", c);
  return 0;
}
