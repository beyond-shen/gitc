#include<stdio.h>
#include<string.h>

int main(void)
{
    int year = 2017 , mon = 12, day = 31; 
    int a[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
    int leap = 0;
    int sum = 0;
    int i ;
    if(((year % 4 ==0) &&( year % 100 != 0 ))||(year % 400 == 0 ))
    {
        leap = 1;
        printf("this year is leap year!\n");
    }
    else 
    {
        printf("this year is not leap year!\n");
    }
    if ((0 < mon) && (mon < 2 ))
    {
        sum += day;
        printf ("this year day is:%d\n",sum);
    }
    else if(mon >= 2 && mon < 13 )
    {
        for(i = 0 ;i < 11;i++)
        {   if(i == mon -1)
                 break;
            sum += a[i];
        }
        sum += leap;
        sum += day;
        printf("this year day is:%d\n",sum);

    }    
    return 0;
}
