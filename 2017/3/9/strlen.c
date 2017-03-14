#include <stdio.h>
#include <string.h>

int main (int agrc,  const char * argv[]){
  char str[15] = "hello world!";
  int len = 0 , len1 = 0;

  len = strlen(str);
  printf("len = %d\n", len);
   len1 = sizeof(str);
  printf ("sizeof(str) = %d\n", len1);

  return 0;
}
