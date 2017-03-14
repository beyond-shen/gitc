#include <stdio.h>
#include <string.h>
char * creathtml(char * obj, const char * tag, const char * ch){
  char a[] = "<";
  char b[] = ">";
  char c[] = "</";
  strcat(obj,a);
  strcat(obj,tag);
  strcat(obj,b);
  strcat(obj,ch);
  strcat(obj,c);
  strcat(obj, tag);
  strcat(obj,b);

  return obj;
}

int main()
{

  printf("Content type: text/html\n\n");
  printf("<html lang=\"en\">\n");
  printf("<meta charset=\"UTF-8\">\n");
  printf("<head><title>An html page from a cgi</title>\n");
  printf("<style type=\"text/css\">");
  printf("h1,h2 {color: black; text-align: left; }\n");
  printf("</style></head>");
  printf("<body background = \"http://img06.tooopen.com/images/20170306/tooopen_sy_200676715868.jpg\">\n");
  char obj[200];
  char tag[30] = "h1";
  char ch[100] = "Hello beijing!";
  creathtml(obj,tag,ch);
  printf("%s\n", obj);
  printf("<h1>全栈H5课程市场咨询培训</h1>\n");
  printf("<h2>1.HTML5导论</h2>\n");
  printf("<h2>什么是HTML5[1]</h2>\n");
  printf("<p>答:广义论及HTML5时，实际指的是包括HTML、css和javaScript在内的一套技术组合。HTML超文本标记语言（英语：<br -/>HyperText Markup Language,简称:HTML）一种用于创建网页的标准标记语言。</p>\n");
  printf("<p>Css是层叠样式表（英语:Cascading Style Sheets, CSS), 又城串样式列表、级联样式表、串接样式表、层叠样式表、階<br -/>鏳式样式，一种用来结构化文档（如HTML文档或XML应用）添加样式（字体，间距和颜色等）的计算机语言，由W3C定<br -/>义和维护。）</p>\n");
  printf("<p>javaScript一种解释型脚本语言，是一种动态类型、基于原型的语言，内置支持类。它的解释器被称为javaScript引擎，<br -/>为浏览器的一部分，广泛用于客户端的脚本语言，最早是在HTML网页上使用，是来给HTML网页增加动态功能。然而现在<br -/>javaScript也可被用于网络服务器，如Node.js。</p>\n");
  printf("<br -/>");
  printf("<h2>发展史[3]</h2>\n");
  printf("<li>HTML 1.0 ———— 在1993年6月作为互联网工程工作小组（IETF）工作草案发布（并非标准）:</li>");
  printf("<li>HTML 2.0 ———— 在1995年11月作为RFC 1866发布，在RFC 2854于2000年6月发布之后被宣布已经过时</li>\n");
  printf("<li>HTML 3.2 ———— 1997年1月14日，W3C推荐标准</li>\n");
  printf("<li>HTML 4.0 ———— 在1997年12月18日，W3C推荐标准</li>\n");
  printf("<li>HTML 4.01(微小改进) ———— 1999年12月24日，W3C推荐标准</li>");
  printf("<li>HTML 5.0 ———— 2014年10月28日，W3C推荐标准</li>\n");
  printf("<p>万维网联盟（World Wide Web Consortium, W3C）,又称W3C理事会。1994年10月在麻省理工学院计算机科学实验室成立。<br -/>创建者是互联网的发明者蒂姆.伯纳斯-李。[4]</p>\n");
  printf("<h1>原来HTML4和现在的HTML5的差异</h1>\n");
  printf("<p>从HTML语法本身也有很大的变化，HTML5增加了更多的新元素在里面.<br -/> HTML语言:<br -/></p>\n");
  printf("<table border = \"1\"  cellpadding=\"0\" cellspacing=\"0\">    <tr><td>HTML4</td><td>HTML5</td></tr><tr><td>单一标记性语言</td><td>增加了新元素，例如有画图元素，多媒化元素等.</td></tr><tr bgcolor =\"AliceBlue\" ><td>程序接口DOM</td><td>增加了列多的API接口，如离线的数据库存储.文档编辑,拖拽控制等.</td></tr></table>\n");
  printf("<p>编程语言:<br -/></p>");
  printf("<table border = \"1\"  cellpadding=\"0\" cellspacing=\"0\">    <tr><td>HTML4</td><td>HTML5</td></tr><tr><td>前端:HTML,CSS,JavaScript</td><td>JavaScript</td></tr><tr bgcolor = \"AliceBlue\"><td>后端:PHP,C,Perl</td><td>JavaScript</td></tr></table>\n");
  printf("<p>数据库:<br -/></p>");
  printf("<table border = \"1\"  cellpadding=\"0\" cellspacing=\"0\">    <tr><td>HTML4</td><td>HTML5</td></tr><tr><td>关系型数据库，Mysql等</td><td>非关系型数据库,如MongoDB</td></tr></table>\n");

  printf("<p>服务器的架:<br -/></p>");
  printf("<table border = \"1\"  cellpadding=\"0\" cellspacing=\"0\">    <tr><td>HTML4</td><td>HTML5</td></tr><tr><td>Linux + Mysql + php + apache</td><td>Docker + NodeJS or Meteor</td></tr></table>\n");
  printf("<p><img src = \"http://p1.bpimg.com/1949/445be84bb2061c23.jpg\"width =\"900\" height =\"600\"></p>\n");


  printf("</body>\n");
  printf("</html>\n");

  fflush(stdout);
  return 0;
}
