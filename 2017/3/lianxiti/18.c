#include <stdio.h>

int main(void){
    int i, j;
    int n;
    int k, l;
    scanf("%d", &n);
    l = (n + 1) / 2;
    for(i = 1; i <= l; i++){
        for (k = 1;k <= l - i; k++){
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++){
                printf("*");
        }
        printf("\n");
    }
    for(i = l + 1; i <= n;i++){
        for(j = 1; j <= i - l; j++){
            printf(" ");
        }
        for(j = 1; j <= (2 *(n + 1 - i) - 1); j++){
            printf ("*");
        }
        printf ("\n");
    }
    printf("\n");
    return 0;
}
