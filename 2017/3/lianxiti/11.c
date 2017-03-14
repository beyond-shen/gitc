#include <stdio.h>

int main(void){
    int x, a;
    printf("x = ");
    scanf("%d", &x);

    while(x){
        a = x % 10;
        x = x / 10;
        printf("%d", a);
    }
    printf("\n");
    return 0;
}
