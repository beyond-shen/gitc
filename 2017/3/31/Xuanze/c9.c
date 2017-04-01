/*switch语句中一定要有break，否则会从你开始的位置到结束整个switch语句*/
#include <stdio.h>

int main(void){
  int i = 1;
  switch (i % 3){
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
  }
  return 0;
}
