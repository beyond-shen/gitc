#include <stdio.h>
#include <string.h>

int main (int agrc,  const char * agrv[]){
    char dest[64];
    char str[15] = "hello world!";
    int i;

    strcpy (dest, str);
    printf ("%s\n", dest);
    return 0;
}
