#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*定义结构体类型*/

struct Books{
  int book_id;       //size:4字节
  char titile[50];   // size:50字节
};

int main(void){
  printf("%ld\n", sizeof(struct Books)); //正常为50+4，结果为56  因为是4字节对齐的 不够就补齐 
  struct Books book = {1234, "hello"};

  struct Books book1;
  book1.book_id = 1235;
  strcpy(book1.titile, "hello world");
  return 0;
}
