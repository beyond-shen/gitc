# sqllite的C语言操作
## 简单的数据管理程序的理解以及注解
### 库的调用和函数的定义，
1.
```c
#include <stdio.h>
#include <string.h>
#include <sqlite3.h>
#include <stdlib.h>
```
**思路**：调用了哪些库

2.
```c
#define M 32
#define N 128
```
**思路**：宏观定义了常量M = 32， N = 128

3.
```c
int do_insert(sqlite3 *db);                                        // 该函数可传入1个参数: 数据库名
int do_delete(sqlite3 *db);                                        //
int do_show(sqlite3 *db);                                          //  
int call_back(void *param, int column, char **value, char **name); //该函数可传进4个参数：param，整型column， 
int do_show_1(sqlite3 *db);                                        //
int do_update(sqlite3 *db);                                        //
```
**思路**：定义了6个返回值为整型的函数：do_insert，do_delete， do_show， call_back，do_show_1，do_update.

### main函数部分
4 . 第一部分:打开或创建数据库
```c
 int main(int argc, char *argv[])
{
	sqlite3 *db;
	char *errmsg;
	char clean[M];
	int cmd;

	if (sqlite3_open("./my.db", &db) != SQLITE_OK)         //文件的路径为./my.db
  {
		printf("%s\n", sqlite3_errmsg(db));
		return -1;
	}
 ```
 **思路**：使用if语句。当用sqlite3_open函数打开名为my.db的数据库，返回值为0时证明打开数据库成功（如果没有该数据库那就创建新的数据库。）当返回值不为0时执行
 if语句,报告错误。
 
 **知识点**：
   * sqlite里最常用到的是sqlite3 *类型。从数据库打开开始，sqlite就要为这个类型准备好内存，直到数据库关闭，整个过程都需要用到这个类型。当数据库
 打开时开始，这个类型的变量就代表了你要操作的数据库，即句柄。
   * int   sqlite3_open(char *path,sqlite3   **db);   //有open必有close
      功能：打开sqlite数据库

      path:数据库文件路径(如果不存在，则创建)

      db:指向sqlite句柄的指针

      返回值:如果是SQLITE_OK则表示操作正常。相关的返回值sqlite定义了一些宏。具体这些宏的含义可以参考sqlite3.h文件。
   * #define sqlite_ok =返回时值为0   
 
 5. 第二部分
```c
	int ret;
	//sql语句在编写时,如果需要分行写,那么需要添加连接符'\',而且连接符的后边不要带有空格
	if ((ret = sqlite3_exec(db, "create table stu(id integer, name vchar(32) not null,\
		score integer not null)", NULL, NULL, &errmsg)) != SQLITE_OK)
	{
		if (ret == 1)
		{
			printf("%s\n", errmsg);
			sqlite3_close(db);
			return -1;
		}
	}
```
**思路**:使用if语句进行判断，当用sqlite3_exec（）函数执行sql语句的返回值ret为0时，成功执行sql语句并执行回调函数（此处无回调函数）。返回值ret不为0时执行if语句内容且当
ret为1时显示错误信息并关闭数据库。
**知识点**：
  * sqlite3_exec函数的使用：
  
       int sqlite3_exec(sqlite3 *db, const char *sql, sqlite3_callback callback, void *,char **errmsg);
            功能:执行sql语句
               参数:
                 db:数据库句柄
                 sql:sql语句
                 callback:回调函数,每成功执行一次sql语句就执行一次callback函数
                 void *:给回调函数传的参数
                 errmsg:错误信息
  * #define sqlite_error = 返回值为1
6. 第三部分
```c
	while (1)
	{
		printf("\e[32m*** 1:insert  2:delete  3:show  4:update  5:quit ***\e[0m\n");
		printf("please input your comd > ");

		if (scanf("%d", &cmd) != 1)
		{
			puts("input error");
			fgets(clean, sizeof(clean), stdin);
			continue;
		}

		switch (cmd)
		{
		case 1:
			do_insert(db);
			break;
		case 2:
			do_delete(db);
			break;
		case 3:
			do_show(db);
			//do_show_1(db);
			break;
		case 4:
			do_update(db);
			break;
		case 5:
			goto RET;
		default:
			break;
		}
	}

RET:
	sqlite3_close(db);
	return 0;
}
```
