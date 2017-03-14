#include <stdio.h>

int main(void){
    char c;
    c = getchar();

    while(EOF != c){
        if(c == 32){
            printf ("%%20");
        }
        printf ("%c", c);
        c = getchar();
    }
    printf ("\n");
    return 0;
}
