#include<stdio.h>

int main(void){
    int x = 4;
    int y = x / 10;
    if((x < 0) || (x >= 1000))
    {
        printf ("bu fu he!\n");
    }
    else
    {
        if(y >=10)
        {
            printf("x de weishu 3 wei\n");
        }
        if(y < 10 && y > 0)
        {
            printf ("x de weishu 2 wei\n");
        }
        if(y == 0)
        {
            printf("x de weishu 1 wei\n");
        }
    }

    return 0;
}
