/*%20和空格的单独转换程序*/
#include <stdio.h>
/*空格转换%20的函数*/
int zh();
/*%20转换空格的函数*/
int f();

int main(){
  zh();
  return 0;
}


int zh(){
  int c;
  while((c = getchar()) != EOF){
    if(c == 32){
    printf("%%20");
    }
    else{
      putchar(c);
    }
  }
  return 0;
}

int f(){
  int c;
  int status = 0;
  while((c = getchar()) != EOF){
    if(status == 0){
      if(c == '%'){
        status++;
      }
      else{
        putchar(c);
        status = 0;
      }
    }
    else if(status == 1){
      if(c == '2'){
        status++;
      }
      else{
        putchar('%');
        putchar(c);
        status = 0;
      }
    }
    else if(status == 2){
      if(c == '0'){
        putchar(' ');
      }
      else{
        putchar('%');
        putchar('2');
        putchar(c);
      }
      status = 0;
    }
  }

  return 0;
}
