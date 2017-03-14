#include <stdio.h>
#include <string.h>


char * mystrcpy(char * dest, const char * str){
  int i = 0;
  for (i = 0; str[i] != 0; i++){
    dest[i] = str[i];
  }
  dest[i + 1] = 0;

  return dest;
}






int main(int argc, const char * argv[]){
  char dest[10];
  char str[15] = "hello world";
  mystrcpy(dest, str);
  printf ("%s\n", dest);

  return 0;
}
