#include<stdio.h>

int main(void){
    int score = 93;
    if (score >=90){
        printf("A\n");
    }
    if (score >= 70 && score < 90){
        printf("B\n");
    }
    if (score >= 60 && score < 70){
        printf("C\n");
    }

    if(score < 60){
        printf("D\n");   
    }
    return 0;
}
