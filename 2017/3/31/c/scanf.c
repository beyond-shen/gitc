/*无论怎么输入 会自动识别字符且寻找每个数的起始位置时会自动跳过空白字符直到遇到非空白字符*/
#include <stdio.h>

int main(void){
  int i, j;
  float x, y;
  scanf("%d%d%f%f", &i, &j, &x, &y);
  printf("%d%d%f%f", &i, j, x, y);

  return 0;
}
