#include <stdio.h>

int main(void){
    int x;
    int i, a;
    printf("shuzi:");
    scanf("%d", &x);

    for(i =0 ; x!=0 ;i++)
    {
        if(x)
        {   a = x % 10;
            x = x / 10;
            printf("%d", a);
        }

    }
    printf("\n");
    return 0;
}


