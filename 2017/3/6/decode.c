#include <stdio.h>

int main(void){
    int c;
    int status = 0;
    c = getchar();
    while(EOF != c ){
        if(status == 0){  //״̬0;
            if(c == '%'){ 
                status++;
            }
            else{
                printf("%c" ,c);   //���� putchar(c)���;
                status = 0;   //ÿ�β�������״̬����;
            }
        }
        else if (status == 1){    //״̬1;
            if (c == '2'){
                status++;
            }
            else{
                printf("%%%c", c);
                status = 0;
            }
        }
        else if(status == 2){   //״̬2�������ǲ���������Ľ��״̬����;
            if (c == '0'){
                printf (" ");
                status = 0;
            }
            else{
                printf ("%%2%c", c);
                status = 0;
            }
        }
        c = getchar();

    }
    printf ("\n");
    return 0;
}
