#include <stdio.h>

int main(void){
    int mul = 1;
    int i;
    int sum = 1;
    for(i= 1; i < 11;i++){
        mul = mul * i;
        sum = sum +mul;
    }
    printf("sum = %d\n", sum);

    return 0;
}
