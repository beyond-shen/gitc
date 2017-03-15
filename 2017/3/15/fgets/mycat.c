#include <stdio.h>

int main(int argc, char * argv[]){
  char buf[100];
  while(fgets(buf, 64, stdin) != NULL){
    printf("%s", buf);
  }
  return 0;
}
