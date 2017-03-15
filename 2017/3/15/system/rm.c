#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
  char str[64];
  if(argc == 2){
    sprintf(str, "rm -r %s", argv[1]); /*rm -r：一般用于删除目录*/
  }
  else{
    printf("Error!!!\n");
  }
  printf("%s\n", str);
  system(str);
  return 0;
}
