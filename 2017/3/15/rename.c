#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
  char direct[64] = "mv ";
  char buf[64];
  while(fgets(buf, 64, stdin != NULL)){  /*从标准输入流中读取一行*/
    buf[strlen(buf) - 1] = '\0'; /*说明接受的是字符串，字符串的后缀是'\0'*/

    strcat(direct, buf);

    strcat(buf, "-2");
    strcat(direct, " ");
    strcat(direct, buf);/*以上拼接字符串为“mv filename filename-2”*/

    printf("%s\n", direct);
    system(direct);    /*使字符串输出并作为命令使用完成操作*/
    strcpy(direct, "mv \0");/*初始化*/
  }

  return 0;
}
