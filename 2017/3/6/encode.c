#include <stdio.h>

int main(void){
    char c;
    c = getchar();

    while(EOF != c){
        if(c == 32){      // 空格的ASCII码是32;
            printf ("%%20");//%用 %%表示;
        }
        else
        {
        printf ("%c", c);
        }
        c = getchar();//保证每次都能读取一个字符;
    }
    printf ("\n");
    return 0;
}
