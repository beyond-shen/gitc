#include <stdio.h>
#include <string.h>
char * mystrcat( char *s1, const char * s2){
  int i = 0, j = 0;
  int tmp = 0;
  for (i = 0; s1[i] != 0; i++){
    tmp++;
  }
  for (j = 0; s2[j] != 0; j++){
    s1[tmp + j] = s2[j];
  }
  return s1;
}


int main(int argc, const char * argv[]){
  char dest[64] = "hello ";
  char str[64] = " world!";

  mystrcat(dest, str);
  printf("%s\n", dest);


  return 0;
}
