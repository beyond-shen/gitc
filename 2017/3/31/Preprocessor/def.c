/*宏定义*/
#include <stdio.h>
#define MAX(x,y) ((x) > (y)? (x) : (y))
#define IS_EVEN(n) ((n) % 2 == 0)

int main(void){
  int i,j,k,m,n, l;
  j = k = m = n =1;
  i = MAX(j + k, m - n);
  printf("i = %d\n", i);       //i = 2
  if(IS_EVEN(i)){
    i++;}
  printf("i = %d\n", i);     //i =2
  /*考虑到参数的副作用，最好避免使用带副作用的参数*/
  i = 1, j = 2;
  n = ((i++) > (j) ?(i++):(j)); // n = 2
  printf("n = %d\n", n);
  printf("i = %d\n", i);     //i = 2
  i = 2, j = 1;
  n = ((i++) > (j) ?(i++):(j));
  printf("n = %d\n", n);     //n = 3
  printf("i = %d\n", i);   //i = 4   i加了2次
  return 0;
}
