#include <stdio.h>

int main(void){
    char c;
    c = getchar();
    while(EOF != c){
        if ((97 <= c) &&(122 >= c)){
            printf("%c", c - 32);
        }
        else if((65 <= c) && (90 >= c)){
            printf("%c", c + 32);
        }
        else{
        printf("%c", c);
        }

        c = getchar();
    }
    printf("\n");
    return 0;
}
