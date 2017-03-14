#include <stdio.h>

int main(void){
  char c;
  int chars = 0;
  int num = 0;
  int sum ;
  while ((c = getchar()) != EOF){
    if((65 <= c && 90 >= c) || (97 <= c && 122 >= c)){
      chars++;
    }
    if(48 <= c && 57 >= c){
      num++;
    }
  }
  sum = chars + num;
  printf ("chars = %d\nnum = %d\nsum = %d\n", chars, num, sum);
  return 0;
}
