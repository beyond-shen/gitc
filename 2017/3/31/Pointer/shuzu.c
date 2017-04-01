/*访问数组元素的方法*/
#include <stdio.h>

int main(void){
  int b[10] = {0,1,2,3,4,5};
  int j;
  for (j = 0; j < 6; j ++){
    printf("b[%d] = %d\n", j, b[j]);
  }

  int a[5] = {1,2,3,4,5};
  int *p = &a[0]; //首个元素的地址即数组的地址
  int i = 0;

  for (i = 0; i < 5; i++){
    printf("p = %p\n", p);
    printf("%d\n", *(p++));
  }

  char str[64] = "helloworld";
  char *s = str; //数组名就是数组的首个元素的地址
  while(*s != '\0'){
    printf("%p\n", s);
    printf("%c\n", *s);
    s++;

  }
  return 0;
}
