#include <stdio.h>

int main(void){
    int a = 4, b = 7, c = 2;
    int min;

    if (a < b){
        min = a;
        if (c < a){
            min = c;
        }
    }
    else{
        min = b;
        if (c < b){
            min = c;
        }
    }
    printf("min = %d\n", min);

    return 0;
}
