/*实现： 求 s = 1 - (1/2) + (1/3) - (1/4) + … + (1/n) 求： n =10*/
#include <stdio.h>
#include <math.h>

int main(void){
  int n,i = 1;
  float s = 0.0, k;

  printf("input n:");
  scanf("%d", &n);

  while(i <= n){
    k = (1.0 / i) * (pow(-1, i + 1));   /*   sum=sum+ s*(1/i);*/
    s = s + k;                          /*   s=s*(-1);*/
    i++;
  }

printf("s = %f\n", s);

  return 0;
}
