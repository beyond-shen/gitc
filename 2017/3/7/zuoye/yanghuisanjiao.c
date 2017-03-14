#include <stdio.h>

int main(void){
  int n = 0;
  int a[18] ={0,1}, l, r;

  while (n < 1 || n > 17){
    printf ("hangshu =");
    scanf ("%d", &n);
  }
  int i,j;
  for (i = 1; i <=n; i++){
    l = 0;
    for (j = 1;j <= i;j++){
      r =a[j];
      a[j] = l + r;
      l = r;
      printf("%6d", a[j]);
    }
    printf ("\n");
  }



  return 0;
}
