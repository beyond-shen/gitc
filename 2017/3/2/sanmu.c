#include <stdio.h>

int main(void)
{   int max;
    int a = 185, b = 8, c = 15; 

    max = (a > b) ? ((a > c)? a : c) : ((b > c)? b : c);
    printf("max = %d\n", max);
}
