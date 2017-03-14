#include <stdio.h>

int main (void){
    char c;
    c = getchar();

    while (EOF != c){
        printf("char = %c\t   c(16) = %x\n", c, c);
        c = getchar();
    }
    printf("\n");
    return 0;
}
