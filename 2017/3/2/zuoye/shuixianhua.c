#include <stdio.h>

int main(void){
    int i;
    int a , b, c;

    for(i = 100; i < 1000; i++){
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;

        if((a * a * a + b * b* b + c * c * c) == i)
            printf("i = %d\n", i);


    }
    return 0;
}
