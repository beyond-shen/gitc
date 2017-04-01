/*实现文件的cp*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, const char * argv[]){
  int fdr,fdw;
  int bytes;
  char buf[64] = {0};
  if((fdr = open(argv[1],O_RDONLY)) < 0){
    printf("fail to open fdr");
    return -1;
  }
  if((fdw = open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,0666)) < 0){
    printf("fdw open failed!!");
    return -1;
  }

  while((bytes = read(fdr,buf,sizeof(buf))) > 0){
    write(fdw,buf,bytes);
  }

  close(fdr);
  close(fdw);
  return 0;
}
