/*实现目录的ls*/
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc, const char * argv[]){
  DIR * dir;
  dir = opendir(argv[1]);
  if(dir == NULL){
    perror("fail open dir");
    return -1;
  }
  struct dirent * dt;
  while((dt = readdir(dir)) != NULL){
    if(dt -> d_name[0] != '.')           //有此语句实现ls命令，没有实现ls -a命令
    printf("%d\n", dt -> d_reclen);
  }
  //printf("\n");
  closedir(dir);
  return 0;
}
