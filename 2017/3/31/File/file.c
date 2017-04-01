#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(void){
  char buf[64] = "helloworld";
  char str[64] = "\0";
  int fd;
  fd = open("./3.txt", O_WRONLY|O_CREAT, 0666);
  printf("%d\n", fd); //返回的文件描述符是一个非负整数
  int len = write(fd,buf,strlen(buf));
  close(fd);
  fd = open("./3.txt", O_RDONLY);
  printf("%d\n", fd);
  len = read(fd, str, 63);

 printf("%s, len = %d\n", str, len);
  close(fd);
  return 0;
}
