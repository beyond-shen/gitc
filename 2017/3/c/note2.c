/*华氏温度转化为摄氏温度*/
#include <stdio.h>
#define D 32.0
#define F (5.0 / 9.0)      //    5 / 9 结果为0不是我们想要的结果

int main(void){
  float huashi, sheshi;

  printf("huashi temperature:");
  scanf ("%f", &huashi);

  sheshi = (huashi - D) * F;

  printf ("sheshi = %.1f\n", sheshi);
  
  return 0;
}
