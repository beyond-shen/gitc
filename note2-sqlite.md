# SQlite
## 什么是SQlite？
答：SQLite是一个进程内的库，实现了自给自足的、无服务器的、零配置的、事务性的 SQL 数据库引擎。它是一个零配置的数据库，这意味着与其他数据库一样，您不需要在系统中配置。
   就像其他数据库，SQLite 引擎不是一个独立的进程，可以按应用程序需求进行静态或动态连接。SQLite 直接访问其存储文件。
## ubuntu中安装与卸载sqlite3数据库
```sh
1. **安装**: $ sudo apt-get install sqlite3
2. **卸载**: $ sudo remove --purge sqlite3
3. **修复**: $ sudo apt -f install
```
## 安装sqlite3的C语言库
```sh
1. sudo apt-get update
2. sudo apt-get install  libsqlite3-dev
检查是否安装成功： cd  /usr/include 中查看是否有sqlite3.h文件
```
## sqlite3的基本命令
   * 建数据库：
```
    sqlite3 test.db /*注意sqlite的版本*/
```

   * 查看帮助：
```
    sqlite> .help
```
   * 文件存放位置：
```
   sqlite> .database
```
   * 退出：
```
    sqlite> .quit
```
   * 查看表：
```
    sqlite> .tables
```
   * 显示表的结构：
```
    sqlite> .schema
```
## sqlite3常见语句

    1. 创建表：
```
    sqlite> create table usr(id integer primary key, name text, age integer null, gender text,
    salary real not null);
```
    2. 删除表:
```
    sqlite> drop table usr；
```
    3. 插入数据：
```
    sqlite> insert into usr(id, name, age, salary) values(2, ‘liu’, 20, 6000);
```
    4. 删除数据:
```
    sqlite> delete from usr where id = 2 and name = ‘lisi’；//删除一条记录

    sqlite> delete from usr where id = 2 or name = ‘lisi’；// and(与）or（或）
```
    5. 修改数据：
```
    sqlite> update usr set gender = ‘man’，name = ‘lisi’ where id = 3;
```
    6. 查询数据：
```
    sqlite> select * from usr where id = 2;
```
    7. 修改表的名称:
```
    sqlite> alter table oldname rename to newname;
```
