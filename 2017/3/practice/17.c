#include <stdio.h>

int main(void){
    int x;
    printf("Mon\tTue\tWed\tThu\tFri\tSat\tSun\n");
    printf("\t\t");
    for (x = 1; x <= 28;x++){
        printf ("%2d\t", x);
        if ((x + 2) % 7 == 0){
            printf ("\n");
        }
    }
    printf("\n");

    return 0;
}
