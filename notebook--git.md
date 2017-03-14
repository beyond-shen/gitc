# Git 
![](https://ss2.bdstatic.com/70cFvnSh_Q1YnxGkpoWK1HF6hhy/it/u=3432955071,2879031477&fm=23&gp=0.jpg)
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
![](http://p1.bqimg.com/1949/f4ee3239fb478b87s.png)
## 创建git本地仓库
```sh
1. $ mkdir git
2. $ cd git
3. $ mkdir c
4. $ cd c
5. $ git init
6. 显示创建好一个空的git仓库。 
```
![](http://i1.piimg.com/1949/ebcb840f705f8ea2s.png)


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
![](http://i1.piimg.com/1949/9669b91fafd69810s.png)
## 查看目录状态
查看当前目录下的文件在git仓库中的状态。
```sh
1. $ git status
```
![](http://i1.piimg.com/1949/7ef7de56dc443641s.png)
## 跟踪文件
将当前目录下的所有文件跟踪。
```sh
1. $ git add .
```
![](http://i1.piimg.com/1949/170017fa02a803bcs.png)
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
![](http://p1.bpimg.com/1949/28e02a748dd14653s.png)

![](http://p1.bpimg.com/1949/d4c33e94132472abs.png)
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
![](http://i1.piimg.com/1949/14f358f7040fd0a0s.png)

## git diff
1. 删除文件后，恢复文件。
```
1. $ rm -rf hello.c
2. $ git status
3. $ git checkout hello.c
```
![](http://p1.bpimg.com/1949/da987f5f36d5655bs.png)
2. 从版本库里删除文件。（真正的删除文件）
```sh
1. $ git rm hello.c (or) rm hello.c
2. $ git status
3. $ git add .
4. $ git commit
```
3. git diff commitId-1 commitId-2
![](http://i1.piimg.com/1949/be9c5d8c57195fdds.png)

![](http://i1.piimg.com/1949/e28f65d9578ce778s.png)
@@-2，6 +2，7@@
从第二行提取，‘-’是修改前，修改前6行，（红色删除）。‘+’是修改后，修改后7行，绿色为新增内容。
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
![](https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1489501082783&di=b904631605fb95c3297a6585c50e72c8&imgtype=0&src=http%3A%2F%2F7xil0e.com1.z0.glb.clouddn.com%2Fteacher%2F55360816dfddb.png)

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
![](http://p1.bpimg.com/1949/f4f9b7a81f5794ffs.png)
5. 更新本地仓库， 与github仓库进行同步。将服务器提交拉取到本地。
```sh
1. $ git pull
```
![](http://p1.bpimg.com/1949/b78564340c56f267s.png)

## 参考图

![](https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1489500476643&di=b5be43576b26a23d57b8d3b7553c072b&imgtype=0&src=http%3A%2F%2Fwww.uml.org.cn%2Fpzgl%2Fimages%2F2012113023.png)

![](https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1489501380315&di=9375badd0f74935dbd36a77f06dc8739&imgtype=0&src=http%3A%2F%2Fwww.114390.com%2Fupload_article%2Ffile_images%2Farticle%2F201409%2Fgit_big_jb51.jpg)
