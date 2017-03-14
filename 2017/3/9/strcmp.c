#include <stdio.h>
#include <string.h>

int main (void){
  char dest[32]  = "abcde";
  char str[32] = "abcdef";

  int s = strcmp(dest, str);
  printf ("%d\n", s);
  return 0;
}
