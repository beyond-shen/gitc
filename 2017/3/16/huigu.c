#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
  char str[100];
  while(fgets(str, 64, stdin)!= NULL){
    printf("%s\n", str);
  }
  printf("\n");
  return 0;
}
