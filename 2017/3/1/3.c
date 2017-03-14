#include<stdio.h>
#include<math.h>

int main(void){
    int a=4,b=15,c=5;
    int temp = b*b-4*a*c;
    double x1,x2;    
    if (temp > 0 ){
        x1 = (-b + sqrt(temp))*1.0/(2*a);
        x2 = (-b - sqrt(temp))*1.0/(2*a);
        printf ("x1 = %f , x2 = %f\n",x1,x2);
    }
    else if (temp == 0 ){
        x1 = x2 = -b*1.0 /(2*a);
        printf ("x1 == x2 = %f\n",x1=x2);
    }
    else{
        printf ("no gen!\n");

    }
    return 0;
}
