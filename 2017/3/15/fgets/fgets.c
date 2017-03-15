/*char *fgets(char *s, int size, FILE *stream);
功能： 就是一次读取一行,遇到'\n'就立刻返回. 当返回值为NULL时表示文件读取结束
参数： s , 用于存放读取的字符串(传递数组名即可)
      size, 指定读取一次最多读取到的字节个数
      stream, 直接填写stdin即可
比如： fgets(buf, 64, stdin); 从标准输入读入一行
注解：1.字符串的结束是'\0', 文件结束是EOF(文件结束标记符)。
     2.NULL 不等于'\n'*/

#include <stdio.h>

int main(void){
  char buf[100];
  fgets(buf, 64, stdin);
  printf("%s\n", buf);
  return 0;
}
