#include <stdio.h>

int main(void){
    char c;
    c = getchar();

    while(EOF != c){
        if(c == 32){      // �ո��ASCII����32;
            printf ("%%20");//%�� %%��ʾ;
        }
        else
        {
        printf ("%c", c);
        }
        c = getchar();//��֤ÿ�ζ��ܶ�ȡһ���ַ�;
    }
    printf ("\n");
    return 0;
}
