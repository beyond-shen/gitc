#include <stdio.h>

int main(void){
    int a, b, c;
    int max;
    printf("a, b, c = ");
    scanf("%d, %d, %d", &a, &b, &c);

    if(a > b){
        max = a;
        if(a < c){
            max = c;
        }
    }
    else{
        max = b;
        if (b < c){
            max = c;
        }
    }
    printf ("max = %d\n", max);

    return 0;
}
