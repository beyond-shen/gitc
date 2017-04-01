#include <stdio.h>

int add (int a, int b){
  int sum = a + b;
  return sum;
}
void add1(int a, int b){
  int sum = a + b;
  printf("%d\n",sum);
}
void add2(void){
  printf("hello world!!!\n");
}
int main(void){
  int sum;
  sum = add(20,10);
  printf("%d\n", sum);
  add1(10,20);
  add2();
}
