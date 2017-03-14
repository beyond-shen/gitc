#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]){
  int a = 1, b = 2;
  if(argc == 2){
    if(*argv[1] == '+'){
      printf ("he = %d\n", a + b);
    }
    if(*argv[1] == '-'){
      printf ("cha = %d\n", a - b);
    }
    if(*argv[1] == '*'){
      printf ("ji = %d\n", a * b);
    }
    if(*argv[1] == '/'){
      printf ("shang = %d\n", a / b);
    }
    if(*argv[1] == '%'){
      printf ("yushu = %d\n", a % b);
    }
  }

  return 0;
}
