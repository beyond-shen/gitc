#include<stdio.h>

int main(void){
    int a = 64, b = 78, c = 15;
    int max,min;
    if (a < b){
        max = b;
        if (b < c){
            max = c;
            min = a;
        }
        else{
            max = b;
            if(a > c){
                 min = c; 
             }
             else{
                 min = a;
             }
            }
    
    }
    else{
         max = a;
         if(a < c){
         max = c;
         min = a;
         }
         else{
             max = a;
             if(b > c){
                 min = c;
             }
             else{
                 min = b;
             }

         }
    }
    printf ("max = %d\n",max);
    printf ("min = %d\n",min);


    return 0;
}
