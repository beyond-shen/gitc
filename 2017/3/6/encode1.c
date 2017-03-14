#include <stdio.h>

int main(void){
    int c;
    c = getchar();
    while(EOF != c){
        if(c == 32){
            printf("%%20");
        }
        else{
            printf("%c", c);
        }
        c = getchar();
    }
    printf ("\n");
    return 0;
}
