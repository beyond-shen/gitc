/*练习题14*/
#include <stdio.h>

int main(void){
  int score;
  printf("please enter score:");
  scanf("%d", &score);
  if(score < 0|| score > 100)
  printf("Error\n");
  else
  switch (score / 10) {
    case 10:
    case 9:
      printf("A\n");
      break;
    case 8:
      printf("B\n");
      break;
    case 7:
      printf("C\n");
      break;
    case 6:
      printf("D\n");
      break;
    default:
      printf("F\n");
      break;
  }
  return 0;
}
