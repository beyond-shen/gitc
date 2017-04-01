/*实现输入一个2位数字用英文表示(还不完美)*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
  int number;
  printf("please enter the number:");
  scanf("%d", &number);
  if((number / 10) != 1){
    switch (number / 10) {
      case 0:break;
      case 2:printf("You enteted the number twenty-"); break;
      case 3:printf("You enteted the number thirty-"); break;
      case 4:printf("You enteted the number forty-"); break;
      case 5:printf("You enteted the number fifty-"); break;
      case 6:printf("You enteted the number sixty-"); break;
      case 7:printf("You enteted the number seventy-"); break;
      case 8:printf("You enteted the number eighty-"); break;
      case 9:printf("You enteted the number ninety-"); break;
    }
    switch (number % 10){
      case 1:printf("one");break;
      case 2:printf("two");break;
      case 3:printf("three");break;
      case 4:printf("four");break;
      case 5:printf("five");break;
      case 6:printf("six");break;
      case 7:printf("seven");break;
      case 8:printf("eight");break;
      case 9:printf("nine");break;
    }
  }else{
    switch (number % 10) {
      case 1:printf("You enteted the number eleven");break;
      case 2:printf("You enteted the number twelve");break;
      case 3:printf("You enteted the number thirteen");break;
      case 4:printf("You enteted the number fourteen");break;
      case 5:printf("You enteted the number fifteen");break;
      case 6:printf("You enteted the number sixteen");break;
      case 7:printf("You enteted the number seventeen");break;
      case 8:printf("You enteted the number eighteen");break;
      case 9:printf("You enteted the number ninteen");break;
    }
  }
  return 0;
}
