#include <stdio.h>
#include <string.h>

size_t mystrlen( const char *s){
  int sum = 0;
  int i = 0;
  while (s[i] != 0){
    sum++;
    i++;
  }
  return sum;
}



int main(int argc, const char *agrv[]){
  char str[14] = "hello world";
  int len;
  len  = mystrlen(str);
  printf ("len = %d\n", len);
  return 0;
}
