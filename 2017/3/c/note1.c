#include <stdio.h>
/* 运输题*/
int main(void){
 int height, length, width;
 printf ("height of box:");
 scanf ("%d", &height);
 printf ("length of box:");
 scanf ("%d", &length);
 printf ("width of box:");
 scanf ("%d", &width);
 int  volume, weight;
 volume = height * length * width;
 weight = (volume + 165) / 166;

 printf ("volume = %d  weight = %d\n", volume, weight);


  return 0;
}
