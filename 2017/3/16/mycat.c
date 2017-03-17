#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
  char str[100];
  if(argc == 2){
    sprintf(str,"cat %s", argv[1]);
  }
  printf("%s\n", str);
  system(str);
  return 0;
}
