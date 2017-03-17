/*测试一下fgets函数*/
#include <stdio.h>
#include <string.h>

int main(){
  char buf[200];
  fgets(buf, 100, stdin);
  buf[strlen(buf)] = '\0';
  printf("%c\n", buf[strlen(buf)] );
  return 0;
}
