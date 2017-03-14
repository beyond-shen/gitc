#include <stdio.h>

int main(void){
    int i;

    for (i = 0; i < 10; i+= 2){
        printf("i =  %d\n", i);
    }

    printf("after for ...\n", i);
    printf("after for i = %d\n", i);
    return 0;
}
