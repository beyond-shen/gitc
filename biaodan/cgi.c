#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  char a[100];
  double i, j;
  int k;
  char *data;
  printf("Content type: text/html\n\n");
  printf("<html lang=\"en\">\n");
  printf("<meta charset=\"UTF-8\">\n");
  printf("<head><title>An html page from a cgi</title>\n");
  printf("<style type=\"text/css\">");
  printf("</style></head>");
  printf("<body>\n");
  data = getenv("QUERY_STRING");
  if(data == NULL){
    printf("error!!!\n");
  }

    //printf("%s\n", data);
    sscanf(data, "a=%lf&k=%ld&b=%lf", &i,&k,&j);
    printf("a= %lf, b =%lf\n", i, j);
    switch(k){
      case 1:
        printf("<Hr />");
        printf("result =%.3lf\n", i + j);
        break;
      case 2:
        printf("<Hr />");
        printf("result = %.3lf\n", i - j);
        break;
      case 3:
        printf("<Hr />");
        printf("result = %.3lf\n", i * j);
        break;
      case 4:
        printf("<Hr />");
        printf("result = %.3lf\n", i *1.0 / j);
        break;
    }

  printf("</body>\n");
  printf("</html>\n");

  fflush(stdout);
  return 0;
}
