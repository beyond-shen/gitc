#include <stdio.h>

int main(void){
    int c;
    int status = 0;
    c = getchar();
    while(EOF != c ){
        if(status == 0){  //状态0;
            if(c == '%'){ 
                status++;
            }
            else{
                printf("%c" ,c);   //可用 putchar(c)输出;
                status = 0;   //每次不符合是状态清零;
            }
        }
        else if (status == 1){    //状态1;
            if (c == '2'){
                status++;
            }
            else{
                printf("%%%c", c);
                status = 0;
            }
        }
        else if(status == 2){   //状态2：不管是不是输出最后的结果状态清零;
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
