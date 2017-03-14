#include <stdio.h>

int main(void){
    int status = 0;
    int c;

    c = getchar();

    while( c != EOF){
        if(status == 0){
            if(c == '%'){
                status++;
            }
            else{
                putchar(c);
            }
        }
        else if(status == 1){
            if (c == '1'){
                status++;
            }
            else{
                putchar('%');
                putchar(c);
                status = 0;
            }
        }
        else if(status == 2){
            if(c == '2'){
                status++;
            }
            else{
                printf("%%");
                printf("1");
                putchar(c);
                status = 0;
            }
        }
        else if(status == 3){
            if(c == '3'){
                status++;
            }
            else{
                printf("%%");
                printf("1");
                printf("2");
                putchar(c);
                status = 0;
            }
        }
        else if(status == 4){
            if(c == '4'){
                printf(" * ");
                status = 0;
            }
            else{
                printf("%%");
                putchar('1');
                putchar('2');
                putchar('3');
                putchar(c);
                status = 0;
            }
        }
        c = getchar();
    }
    printf("\n");

    return 0;
}
