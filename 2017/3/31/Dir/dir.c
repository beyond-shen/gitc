#include <stdio.h>
#include <dirent.h>

/*结构体信息
struct dirent{
  ino_t d_ino;
  off_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
}*/

int main(void){
  DIR * dir;
  dir = opendir(".");
  if(dir == NULL){
    printf("fail open to the dir");
  }
  struct dirent *dt;
  dt = readdir(dir);
  printf("%p\n", dt);
  printf("%s\n", dt -> d_name);
  closedir(dir);
  return 0;
}
