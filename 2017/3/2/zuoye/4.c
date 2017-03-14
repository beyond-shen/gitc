#include <stdio.h>

int main(void)
{ 
    long int x = 456;
    int i, sum = 0;

    for( ; x != 0; )
        {
            x = x / 10;
            sum = sum + 1;
        }
    printf("sum = %d\n", sum);
    return 0;
}
