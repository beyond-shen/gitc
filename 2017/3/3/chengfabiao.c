#include <stdio.h>

int main(void){
    int i = 1, j , mul;
    for (; i < 10; i++)
    {
        for (j = 1; j <= i; j++)
        {   
            mul = i * j;
            printf("%d x %d = %2d\t", j, i, mul);
        }

        printf("\n");
    }
    return 0;
}
