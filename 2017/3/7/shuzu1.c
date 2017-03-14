#include <stdio.h>

int main(void){
    int a[5] = {1,2,3,4,5};
    int b[3];
    b[0] = 0;
    b[1] = 1;
    b[2] = 2;

    int i, j;
    for (i = 0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("\n");
    for (j = 0; j < 3; j++){
        printf("b[%d] = %d\n", j, b[j]);
    }
    return 0;
}
