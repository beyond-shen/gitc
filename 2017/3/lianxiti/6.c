#include <stdio.h>

int main(void){
    int x = 4567;
    int a, b, c, d;

    a = x % 10;
    x /= 10;
    printf("a = %d\n", a);
    if(x){
        b = x % 10;
        x /= 10;
        printf("b = %d\n", b);
        if(x){
            c = x % 10;
            x /= 10;
            printf("c = %d\n", c);
            if(x){
                d = x % 10;
                printf("d = %d\n", d);
            }

        }
    }
    
    return 0;
}

