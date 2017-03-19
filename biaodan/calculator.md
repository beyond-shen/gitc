# 简易加减乘除计算器
### index.html程序
```sh
$ sudo cp index.html    /var/www/html/
```
```html
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <title>Document</title>
</head>
<body>

  <form action="cgi-bin/cgi" method="GET">
      a = : <input type="text" name="a" />
        <select name="k">
        <option value="1">+</option>
        <option value="2">-</option>
        <option value="3">x</option>
        <option value="4">/</option>
        </select>
      b = : <input type="text" name="b" />
      <input type="submit" name="" value="Sumbit">
  </form>
</body>
</html>
```
### cgi.c程序
```sh
$ sudo cp a.out   /usr/lib/cgi-bin/cgi 
```
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  char a[100];
  double i, j;
  int k;
  char *data;
  printf("Content type: text/html\n\n");
  printf("<html lang=\"en\">\n");
  printf("<meta charset=\"UTF-8\">\n");
  printf("<head><title>An html page from a cgi</title>\n");
  printf("<style type=\"text/css\">");
  printf("</style></head>");
  printf("<body>\n");
  data = getenv("QUERY_STRING");
  if(data == NULL){
    printf("error!!!\n");
  }

    //printf("%s\n", data);
    sscanf(data, "a=%lf&k=%ld&b=%lf", &i,&k,&j);
    printf("a= %lf, b =%lf\n", i, j);
    switch(k){
      case 1:
        printf("<Hr />");
        printf("result =%.3lf\n", i + j);
        break;
      case 2:
        printf("<Hr />");
        printf("result = %.3lf\n", i - j);
        break;
      case 3:
        printf("<Hr />");
        printf("result = %.3lf\n", i * j);
        break;
      case 4:
        printf("<Hr />");
        printf("result = %.3lf\n", i *1.0 / j);
        break;
    }

  printf("</body>\n");
  printf("</html>\n");

  fflush(stdout);
  return 0;
}
```
### 知识
1. 一般写HTML的格式：

```html
<!DOCTYPE html>       //声明
<html>                
<head>                       
<title>文档的标题</title>  
</head>

<body>
文档的内容......
</body>

</html>
```
2. <head>标签
```html
<head> 元素是所有头部元素的容器。

<head> 元素必须包含文档的标题（title），可以包含脚本、样式、meta 信息 以及其他更多的信息。

以下列出的元素能被用在 <head> 元素内部：

  *  <title> （在头部中，这个元素是必需的）
  *  <style>  
  *  <base>   
  *  <link>   
  *  <meta>
  *  <script>
  *  <noscript>
```
3. <form> 标签 :用于创建供用户输入的 HTML 表单。

```html
<form> 元素包含一个或多个如下的表单元素：
    
    <method> : 规定用于发送表单数据的 HTTP 方法---get/post
    <size>: 定义输入的字段
    <action>:  规定当提交表单时向何处发送表单数据
    <input> :
    name:input元素名字     value： input元素的值  type：input元素的类型   width：input字段宽度
    <select>
    <option>
    <label>
    
```

