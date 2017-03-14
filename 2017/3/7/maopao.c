#include <stdio.h>

int main(void){
    int i;
    int a[10] = {1,4,5,6,2,7,9,3,8,0};
    int tmp;
    int j;

    for(i = 0;i < 10; i++){
        for (j = 0; j < 9 - i; j++){
            if(a[j] > a[j + 1]){
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    for (i = 0; i < 10; i++ ){
        printf("%d", a[i]);
    }
    printf ("\n");
    return 0;
}
