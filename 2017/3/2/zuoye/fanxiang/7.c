#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    char b[100];
    printf("shuzi:");
    scanf("%d", &a);
    itoa(a, b, 10);
    printf("%s", strrev(b));
    system("pause");
    return 0;
}
