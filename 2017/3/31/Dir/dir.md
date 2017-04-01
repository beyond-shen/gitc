# 目录的基本操作（基于linux）
## 获取当前目录操作：

在系统命令行下我们可以直接输入命令：pwd 来获取当前的工作目录，但是你知道这个命令是怎么执行的吗？它是由系统通过 Shell 程序来解释执行的，在我们自己编写程序的时候怎么能获取当前的工作目录呢？在标准C库中提供了一系列关于目录操作的接口函数：
```c
          char * getcwd(char * buf,size_t size);
```          
**注解**：getcwd函数把当前目录的名字写到给定的缓冲区buf里。如果目录的名字超出了参数size给出的缓冲区长度（一个ERANGE错误），它就返回NULL。如果成功，它返回指针buf，我们可以访问buf来获取当前的目录。可能当你获取目录后可能需要进入这个目录或者跳到该目录的父目录，我们怎么操作呢？

## 切换目录：
```c
int chdir(const char * path);
```
就像我们在shell里使用cd命令来切换目录一样，在程序里则可以使用chdir系统调用来实现目录的变更，一般情况下是配合 Getcwd 函数一起使用来实现目录定位操作。

## 目录的创建和删除：
在系统命令行下我们可以通过 “ mkdir” , “ rmdir” 命令通过Shell来实现帮我们创建一个目录和删除一个目录，如果在实际的产品开发中呢，总不可能我们自己去手动创建吧，很多情况下都是通过程序自动帮我们创建一个目录来存放相应的文件。系统I/O库中提供了下面相应的操作接口：
```c
int mkdir(const char * path,mode_t mode);
```
mode的含义将按open系统调用的O_CREAT选项中的有关定义设置，当然，它还要服从umask的设置况。     
```c
int rmdir(const char * path);
```
## 目录扫描
对目录的扫描操作和文件的操作有点类似，都是通过对目录结构体的操作，这个结构是系统维护的，一般情况下用户不要去更改这个目录结构体中的相应字段：
```c
struct dirent {
  ino_t          d_ino;      
  off_t          d_off;      
  unsigned short d_reclen;   
  unsigned char  d_type;     
  char           d_name[256];
};
```
通过这个结构我们可以方便的实现文件的过滤，通过访问结构体中的 “d_type” 和 “d_name” 变量可以非常方便的实现文件的查找，文件的访问，文件的过滤。
要实现一系列的目录操作你总的先把这个目录打开吧：
### 打开目录
```c
#include <sys/types.h>
#include <dirent.h>
DIR * opendir(const char * name);
功能：打开一个指定路径的目录，获得目录流，失败返回NULL。
```
#### 示例代码
```c
DIR * dt;
dt = opendir(".");
if(dt == NULL){}
```

### 目录的读取
```c
#include <dirent.h>
struct dirent *readdir(DIR * dirp);
```
函数实现目录读操作，将目录流指针所指的目录读到相应的目录结构中，函数返回该结构的指针，所以我们在使用该接口之前我们需要显示的定于一个结构变量来接受函数的返回。
#### 示例代码
```c
struct dirent  * dt;
dt = readdir(dir);
printf("%s", dt->d_name);//输出目录中的一个文件名
```
### 关闭目录
```c
#include <dirent.h>
int closedir(DIR * dirp);
功能：关闭已经打开目录流
```
