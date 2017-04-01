#include <stdio.h>

int main(void){
    int x, sum = 0;
    printf("x = ");
    scanf("%d", &x);

    if (x == 0){
        sum = sum +1;
    }
    while (x != 0){
        sum++;
        x /= 10;
    }
    printf ("sum = %d\n", sum);

    return 0;
}
