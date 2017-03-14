#include<stdio.h>

int main(void){
    int year = 2017 , mon = 12 , day  =31 ;
    int sum = 0;
    int leap =0;
    if(((year % 4 == 0) && (year % 100 !=0)) ||(year % 400 == 0)){
        printf("leap year!\n");
        leap = 1;
    }
    else{
        
        printf("not leap year!\n");
    }
    if(mon == 1){
        
        sum = day;
    }
    if(mon == 2){
        
        sum = 31 + day;
    }
    if(mon == 3){
        
        sum = 31 + 28 + leap + day;
    }
    if(mon == 4){
    
        sum = 31 + 28 + 31 + leap + day;
    }    
    if(mon == 5){
       
        sum = 31 + 28 + 31 + 30 +leap + day;
    }
    if(mon == 6){

        sum = 31 + 28 + 31 + 30 + 31 +leap + day;
    }
    if(mon == 7){

        sum = 31 + 28 + 31 + 30 + 31 + 30 +leap + day;
    }
    if(mon == 8){

        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + leap + day;
    }
    if(mon == 9){

        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + leap + day;
    }
    if(mon == 10){

        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + leap + day;
    }
    if(mon == 11){
        
        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + leap + day;
   
    }
    if(mon == 12){

        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 +leap + day;
    }
    printf ("sum = %d\n",sum);
    return 0;
}
