#include <stdio.h>

int main(void)
{
    int sum = 0;
    int i, tmp = 1;

    for (i = 1; i < 11;i++){
        tmp = i * tmp;
        printf("tmp = %d\n", tmp);
        sum = sum + tmp;
    }
    printf("sum = %d\n", sum);

    return 0;
}
