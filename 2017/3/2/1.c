#include <stdio.h>

int main(void)
{
    int x = 8675;
    int i , j;
    for(j = 0; i < 4; i++)
    {
        for(i = 0; i < 4; i++)
        {   x = x / 10;
            if(x==0)
                break;
        }
        x = x % 10;
        printf("%d", x); 
    }
    return 0;
}

