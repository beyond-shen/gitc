#include <stdio.h>
int main(void)
{
    int h = 23,m =5;
    int b = h - 12;
    if (b > 0)
    {
        printf("%d:%02d PM\n",b,m);
    }
    if(b < 0)
    {
        printf("%d:%02d AM\n",h,m);
    }
    if  (b == 0)
    {
        printf ("%d:%02d PM\n",h,m);
    }


    return 0;
} 

