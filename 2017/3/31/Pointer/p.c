#include <stdio.h>

int main(void){
  int a = 10, *p1;
  char b = 'b', *p2;
  char *p3 = NULL;    //空指针：存放的地址为空的

  p1 = &a;
  p2 = &b;
  printf("&a = %p, p1 = %p, *p1 = %d\n", &a, p1, *p1); //*p1是指向存储在p1里面地址所存储的内容，p1是存储在指针p1里面的地址。&a是a变量的地址。
  printf("&b = %p, p2 = %p, *p2 = %c\n", &b, p2, *p2);
  printf("p3 = %p\n", p3);

  //指针的的算数运算：++ -- -
  // 指针的自增(自减)并不一定是加1(或减1)的操作而是增加(或减少)的是一个类型的数量。
  // 指针的减法操作只有同类型指针变量才有意义。

   a = 10;
  int *p = &a;

  printf("p = %p &a = %p\n", p, &a);
  p--; // p++类似
  printf("p = %p\n", p);
  printf("p - &a = %ld\n", &a - p); //p - &a = 1



  return 0;
}
