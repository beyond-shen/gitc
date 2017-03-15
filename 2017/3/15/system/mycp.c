#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
  char str[100];
  if(argc == 3){
    sprintf(str, "cp %s %s", argv[1], argv[2]);
    /*补充函数，将字符串(格式化)临时存放在str中*/
  }
  else{
    printf("Error!!!\n");
  }
  printf("%s\n", str);
  system(str);/*调用函数实现字符串当命令完成cp操作*/
  return 0;
}
