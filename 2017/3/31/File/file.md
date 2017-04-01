# 文件访问系统API

## 库
```c
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
```

## 相关函数
1. Open函数

```c
int open(const char * pathname, int flags);
功能：打开文件
返回：文件描述符----在形式上是一个非负整数。------习惯上，标准输入（standard input）的文件描述符是 0，标准输出（standard output）是 1，标准错误（standard error）是 2.
int open(const char * pathname, int flags, mode_t mode);
功能：创建文件
返回：描述符

参数：
1. pathname:要创建或者打开的文件路径
2. flags:打开方式 只读-----O_RDONLY  只写-----O_WRONLY  读写-----O_RDWR,  创建-----O_CREAT
3. mode：制定要创建文件权限（本身属性：drw-rw-rw-代表666    r=4,w=2,x=1）
```
**注解**：1. 如果有2种打开方式中间用|隔开，但是前面3种打开方式只能同时用一种。2. 只有创建时要带有权限，这种权限
是本身自带的属性，但是flags不同，代表此时你以什么方式打开。

列子如下：
```c
int fd;
fd = open("./file", O_RDONLY|O_CREAT, 0666);

```
2. Close函数

```c
#include <unistd.h>
int close(int fd);
功能：关闭指定描述符的文件
```
3. 文件的读取

```c
#include <unistd.h>
ssize_t read(int fd, void * buf, ssize_t count);
成功返回读取的字节数，如果返回0，表示到达文件末尾；如果返回-1，表示出错。
参数：
fd：要读取的文件描述符
buf：存储读取内容的内存空间
count：指定一次最多读取的字节数
```
**示例代码**：

```c
char buf[64] ="\0";
int fd;
fd = open("./file", O_RDONLY);

int len;
len = read(fd,buf,63);
printf("%s",buf);
```
4. 文件的写入
```c
#include <unistd.h>
ssize_t write(int fd, const void * buf, ssize_t count);
成功返回已写的字节数，失败返回-1

参数：
fd：要写入的文件描述符
buf：要写入的内容
count：要写入的字节数
```
**示例代码**：

```c
char buf[64] = "helloworld";
int fd;
fd = open("./file", O_WRONLY);

int len;
len = write(fd,buf,strlen(buf));
printf("len = %d\n",len);

```
