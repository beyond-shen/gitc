# Git 
### git 
1. 什么是git？

      答：git是一款免费、开源的分布式版本控制软件。
## git 安装
### ubuntu linux 安装方法：
```sh
1. $ sudo apt-get install git
```
### Mac ox 安装方法：
```sh
1. brew install git
```
## 创建git本地仓库
```sh
1. $ mkdir git
2. $ cd git
3. $ mkdir c
4. $ cd c
5. $ git init
6. 显示创建好一个空的git仓库。 
```
## 增加文件
1. 复制已有的文件到当前目录里：
```sh
1. $ cp -a/-r 源 目标（'.':当前目录） 
or
   $ mv 源文件（或目录） 目标
```
2. 创建1个新文件。
```sh
1. $ touch hello.c
2. $ vim hello.c  //输出hello world字符串的C语言的程序（代码）
```
## 查看目录状态
查看当前目录下的文件在git仓库中的状态。
```sh
1. $ git status
```
## 跟踪文件
将当前目录下的所有文件跟踪。
```sh
1. $ git add .
```
## 配置个人用户信息
为提交增加个人用户信息。
```sh
1. $ git config --global user.name "Hsiao shen"
2. $ git config --global user.email "Hsiao_shen@outlook.com"
3. $ git config --global core.editor vim/emac  // 配置git编辑模式
```
## 提交
向本地git仓库提交跟踪了的文件。
```sh
1. $ git commit
```
```
1. First commit
2. 
3. Init commit.
```
## 查看提交信息
查看提交相关信息。
```sh
1. $ git log
```
```
1. 第一行：commit ID
2. 第二行：提交作者的姓名和email
3. 第三行：提交的时间
4. 第四行：提交信息标题
5. 第五行：提交信息具体内容
```
## git diff
1. 删除文件后，恢复文件。
```
1. $ rm -rf hello.c
2. $ git status
3. $ git checkout hello.c
```
2. 从版本库里删除文件。（真正的删除文件）
```sh
1. $ git rm hello.c (or) rm hello.c
2. $ git status
3. $ git add .
4. $ git commit
```
## 版本间的切换
根据commitID（哈希值），可以进行版本间的切换。
```sh
1. git reset --hard commitID
```
## 忽略文件
忽略不需要跟踪到git仓库里的文件。
```sh
1. $ touch .gitignore
2. $ touch .gitignore
3. $ vim .gitignore
4. -----
5. a.out
6. -----
7. git add .
8. $ git commit
```
## github
1. 注册github帐号：beyond-shen
   * 注册邮箱:shenyongzhe@outook.com/Hsiao_shen@outlook.com (注意不要使用qq.com)
2. 创建gitc仓库
3. 从github将创建的gitc仓库， 克隆到本地。
```sh
1. $ git clone https://github.com/beyond-shen/gitc.git
```
4. 将本地仓库与github仓库进行同步，将本地推送到服务器上。
```sh
1. $ git push orgin master
2. input username:
3. input password:
```
5. 更新本地仓库， 与github仓库进行同步。将服务器提交拉取到本地。
```sh
1. $ git pull
```
