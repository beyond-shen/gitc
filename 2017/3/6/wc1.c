#include <stdio.h>
#include <ctype.h>
int main(void){
    int c, i = 0;
    int chars = 0;
    int words = 0;
    char temp = ' ';

    while((c = getchar()) != EOF){
        if(c == 10){
            i++;
            }
        chars++;

        if(!isspace(c) && isspace(temp)){
            words++;
        }
        temp = c;
    }
    printf ("lines = %d, chars = %d, words = %d\n", i, chars, words);
    return 0;

}
