#include <stdio.h>

int main(void){
    int sum = 0;
    char c;
    c = getchar();
    while (EOF != c){
        printf("%c", c);
        if (c == 10){
            sum++;
        }
        c = getchar();
    }
    printf ("hang = %d\n", sum);
    return 0;
}

