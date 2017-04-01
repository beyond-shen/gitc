/*宏定义中圆括号必须使用的规则：
1. 有运算符。
2. 有参数时，只给替换列表加圆括号是不够的，还要给参数加圆括号。
*/

#include <stdio.h>
#define TWO_PI 2*3.14159
#define TWO_P (2*3.14159)
#define SCALE(x) (x * 10)
#define SCALE1(x) ((x) * 10)

int main(void){
  int i,j;
  i = 360 / TWO_PI;
  printf("i = %d\n", i);         //i = 565
  i = 360 / TWO_P;
  printf("i = %d\n", i);       //i = 57
  i = 1;
  j = SCALE(i + 1);
  printf("j = %d\n", j);    //j = 11
  j = SCALE1(i + 1);
  printf("j = %d\n", j);    // j = 20
  return 0;
}
