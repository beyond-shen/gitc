#include<stdio.h>


int main(void)
{
    int a = 14;
    int sum = 0;
    if(a < 0 || a > 999)
    {
        printf("bu fu he wo men de fen ge !\n");
    }
    else
    {
        if (a) 
        {
            a = a / 10;
            if(a)
            {
                sum = sum + 1;
                a = a / 10 ;
                if (a) 
                {
                    sum = sum + 1;
                } 

            }
        }
        else
        {
        }
        sum = sum + 1;
        printf ("sum = %d\n",sum);
    }
    return 0;

}
