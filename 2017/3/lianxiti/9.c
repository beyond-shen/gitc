#include <stdio.h>
#include <math.h>

int main(void){
    int i;
    int a, b, c;
    int temp;

    for (i = 100; i < 1000; i++){
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100;
        temp = pow(a , 3) + pow(b , 3) + pow(c , 3);

        if (temp == i){
            printf ("%d\n", i);
        }
    }
    return 0;
}

