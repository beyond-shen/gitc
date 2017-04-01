#include <stdio.h>

int main(void){
    int a, h, m;
    scanf("%d:%2d", &h, &m);

    if((h >=0 && h <=23 ) && (m >=0 && m <=59)){
        a = h - 12; 
        if(a >=0){
            printf("%d:%02d PM\n", a, m);
        }
        else{
            printf("%d:%02d AM\n", h, m);
        }
    }
    else{
        printf("false\n");
    }

    return 0;
}

