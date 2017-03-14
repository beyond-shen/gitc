#include <stdio.h>

int main (void){
    int status = 0;
    int c;
    c = getchar();

    while(EOF != c){
        if(status == 0){
            if(c == 'a'){
                status++;
            }
            else{
                putchar(c);
                status = 0;
            }
        }
        else if(status == 1){
            if(c == 'b'){
                status++;
            }
            else{
                putchar('a');
                putchar(c);
                status = 0;
            }
        }
        else if(status == 2){
            if(c == 'c'){
                status++;
            }
            else{
                putchar('a');
                putchar('b');
                putchar(c);
                status = 0;
            }
        }
        else if(status == 3){
            if(c == 'a'){
                c = getchar();
                if(c == 'b'){
                    putchar('*');
                }
                else{
                    putchar('a');
                    putchar('b');
                    putchar('c');
                    putchar('a');
                    putchar(c);
                }
                status = 0;
            }
            else{
                putchar('a');
                putchar('b');
                putchar('c');
                putchar(c);
                status = 0;
            }
        }
        c = getchar();
    }
    printf("\n");
    return 0;
}
