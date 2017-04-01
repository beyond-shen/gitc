#include <stdio.h>

int main(void){
    int a, i, j;

    for(i = 2;i < 1001;i++){
        int sum = 0;

        for(j = 1; j <= i;j++ ){
            a = i % j;
            if(a == 0){
                sum = j + sum;
            }
        }
        if (sum == 2 * i){
            printf("%d\n", i);
        }
    }
    return 0;
}
