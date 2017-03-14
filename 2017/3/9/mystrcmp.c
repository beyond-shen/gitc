#include <stdio.h>
#include <string.h>

int mystrcmp(const char * s1, const char * s2){
  int i = 0;
  int cha = 0;
  for (i = 0;(s1[i] || s2[i]) != 0;i++){
     cha = s1[i] - s2[i];
     if(s1[i] != s2[i]){
       break;
     }
  }
  return cha;
}


int main(int argc, const char * argv[]){
  int ret;
  char dest[32] = "abcdeef";
  char str[32] = "abcdef";
  ret = mystrcmp(dest, str);
  printf("%d\n", ret);
  return 0;
}
