#include <stdio.h>

int main(void){
    int i = 1;
    int a = 1;
    while(i < 10){

        while(j <= i){
            printf("%d*%d=%2d\t", j, i, j * i );
            j++; 
        }
        printf("\n");
        i++;

    }
    return 0;
}
