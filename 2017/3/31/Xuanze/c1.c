/*计算经纪人的佣金*/
#include <stdio.h>

int main(void){
  float i,j;
  printf("i = :");
  scanf("%f", &i);

  if(i < 2500){
    j = 30 + 0.017 * i;
  }
  else if(i >= 2500 && i < 6250){
    j = 56 + 0.0066 * i;
  }
  else if(i >= 6250 && i < 20000){
    j = 76 + 0.0034 * i;
  }
  else if(i >= 20000 && i < 50000){
    j = 100 + 0.0022 * i;
  }
  else if(i >= 50000 && i < 500000){
    j = 155 + 0.0011 * i;
  }
  else{
    j = 255 + 0.0009 * i;
  }
  printf("%.2f\n", j);
  return 0;
}
