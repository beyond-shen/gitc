#include <stdio.h>
#include <string.h>

int main(void){
  char dest[128] = "hello ";
  char str[128] = "world!";
  char str1[128] = "ni hao";

  strcat(dest, (str1, str));
  printf ("%s\n", dest);
  return 0;
}
