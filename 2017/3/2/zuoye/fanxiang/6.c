#include <stdio.h>

int main(void){
    int num, temp;
    printf("shuzi:");
    scanf("%d", &num);
     while(num % 10)
    {
        temp = num % 10;
        printf("%d",temp);
        num/=10;
    }
    printf("\n"); 
    return 0;
}
