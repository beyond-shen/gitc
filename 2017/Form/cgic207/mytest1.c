/*一面操作*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cgic.h"
#include <sqlite3.h>

void Dataform();
void HandleSubmit();
void ShowForm();
int do_insert(sqlite3 *db, int id, char * name, int score);
sqlite3 * sqlopen();
int Show();
int Delete();
int show1();
int Update();

int cgiMain(){
  cgiHeaderContentType("text/html");
  fprintf(cgiOut, "<HTML lang=\"en\">\n");
  fprintf(cgiOut, "<HEAD>\n");
  fprintf(cgiOut, "<meta charset=\"UTF-8\">\n");
  fprintf(cgiOut, "<TITLE>学生管理系统</TITLE>\n");
  fprintf(cgiOut, "<BODY background=\"http://i1.piimg.com/1949/827d0476e11e4066.jpg\"><h1   align=\"center\" style=\"color:blue\">学生管理系统</h1>\n");
  if(cgiFormSubmitClicked("show") ==cgiFormSuccess){
    Show();
  }
  if(cgiFormSubmitClicked("delete") == cgiFormSuccess){
    Delete();
  }
  if(cgiFormSubmitClicked("update") == cgiFormSuccess){
    Update();
  }
  if ((cgiFormSubmitClicked("testcgic") == cgiFormSuccess) ||
  (cgiFormSubmitClicked("saveenvironment") == cgiFormSuccess)){
    HandleSubmit();
  }

  if(cgiFormSubmitClicked("show") != cgiFormSuccess){
    if(cgiFormSubmitClicked("delete") != cgiFormSuccess){
      if(cgiFormSubmitClicked("update") != cgiFormSuccess){
        ShowForm();
      }
    }
  }
    fprintf(cgiOut, "</BODY></HTML>\n");
    return 0;
}

void HandleSubmit(){
  sqlite3 *db;
  db = sqlopen();
  Dataform();
  sqlite3_close(db);
}
int do_insert(sqlite3 *db, int id, char * name, int score){
  char sql[128];
  char * errmsg;
  sprintf(sql, "insert into jichuban1(编号, 姓名, 分数)values(%d, '%s',  %d);", id, name, score);
  if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK){
    printf("%s\n", errmsg);
  }
  return 0;
}

void Dataform(){
  char id[81]={};
  char name[81]={};
  char score[81]={};
  int idt, scoret;
  sqlite3 * db;
  db = sqlopen();
  if (cgiFormStringNoNewlines("id", id, 81) == 0){
    if (cgiFormStringNoNewlines("name", name, 81) == 0){
      cgiFormStringNoNewlines("score", score, 81);
      fprintf(cgiOut, "ID:");
      cgiHtmlEscape(id);
      fprintf(cgiOut, "<br>\n");
      fprintf(cgiOut, "Name:");
      cgiHtmlEscape(name);
      fprintf(cgiOut, "<br>\n");
      fprintf(cgiOut, "Score:");
      cgiHtmlEscape(score);
      fprintf(cgiOut, "<BR>\n");
      idt = atoi(id);
      scoret = atoi(score);
      do_insert(db, idt, name, scoret);
    }
    else{
      sqlite3_close(db);
      fprintf(cgiOut, " NAME NOT NULL");
    }
  }
  else{
    sqlite3_close(db);
    fprintf(cgiOut, "ID NOT NULL!!!");
  }
}

sqlite3 * sqlopen(){
  sqlite3 * db;
  char * errmsg;
  int ret;
  if(sqlite3_open("./db/my.db", &db) != SQLITE_OK){
    printf("%s\n",sqlite3_errmsg(db));
  }
  if((ret = sqlite3_exec(db, "create table jichuban1(编号 integer, 姓名 text not null,分数 integer not null)", NULL, NULL, &errmsg)) != SQLITE_OK){
    if(ret != 1){
      printf("%s\n", errmsg);
      sqlite3_close(db);
    }
  }
  return db;
}

void ShowForm(){
	fprintf(cgiOut, "<form method=\"POST\" enctype=\"multipart/form-data\" style=\"text-align:center\" ");
  fprintf(cgiOut, "action=\" ");
  cgiValueEscape(cgiScriptName);
  fprintf(cgiOut, "\">\n");
	fprintf(cgiOut, "学号：<input type=\"text\" name=\"id\">\n");
  fprintf(cgiOut, "<br>\n");
	fprintf(cgiOut, "姓名：<input type=\"text\" name=\"name\">\n");
  fprintf(cgiOut, "<br>\n");
	fprintf(cgiOut, "分数：<input type=\"text\" name=\"score\">\n");
  fprintf(cgiOut, "<br>\n");
  fprintf(cgiOut, "<br>\n");
	fprintf(cgiOut, "<input type=\"submit\" name=\"saveenvironment\" value=\"提交\" style = \"color:red;height:30px;width:80px\">\n");

	fprintf(cgiOut, "<input type=\"submit\" name=\"show\" value=\"显示\" style=\"color:green;height:30px;width:80px\">\n");
	fprintf(cgiOut, "<input type=\"submit\" name=\"delete\" value=\"刷新\" style = \"color:red;height:30px;width:80px\">\n");
	fprintf(cgiOut, "<input type=\"submit\" name=\"delete\" value=\"删除\" style = \"color:blue;height:30px;width:80px\">\n");
	fprintf(cgiOut, "<input type=\"submit\" name=\"update\" value=\"修改\" style = \"color:green;height:30px;width:80px\">\n");
	fprintf(cgiOut, "</form>\n");


}

int Show(){
  fprintf(cgiOut, "<h2 align=\"center\">学生信息</h2>");
  sqlite3 * db;
  db = sqlopen();
  show1();
  sqlite3_close(db);
  	fprintf(cgiOut, "<form method=\"POST\" enctype=\"multipart/form-data\" style=\"text-align:center\" ");
    fprintf(cgiOut, "action=\" ");
    cgiValueEscape(cgiScriptName);
    fprintf(cgiOut, "\">\n");
	fprintf(cgiOut, "<input type=\"submit\" name=\"return\" value=\"返回\"   style = \"color:red\">\n");
  fprintf(cgiOut, "</form>");
  return 0;
}


int show1(){
  char *errmsg;
  char **result, **temp;
  int nrow, ncolumn;
  int i, j;
  sqlite3 * db;
  db = sqlopen();
  if(sqlite3_get_table(db,"select * from jichuban1 order by 编号", &result, &nrow, &ncolumn, &errmsg) != SQLITE_OK){
    fprintf(cgiOut, "%s\n", errmsg);
  }
  else{
    temp = result;
    fprintf(cgiOut, "<table border = \"1\" cellspacing = \"0\" cellpadding= \"0\" align=\"center\" width = \"1000\" background=\"file:///home/linux/Pictures/fengus20.jpg\">");
    for(i = 0; i < nrow + 1; i++){
      fprintf(cgiOut, "<tr>");
      for (j = 0; j < ncolumn; j++){
        if(i == 0){
          fprintf(cgiOut, "<th>%-15s</th>", *(temp++));
        }
        else{
				  fprintf(cgiOut, "<td>%-15s</td>", *(temp++));
        }
      }
      fprintf(cgiOut, "</tr>");
			putchar(10);
    }
    fprintf(cgiOut, "</table>");
  }
  sqlite3_free_table(result);
  return 0;
}


int Delete(){
  char number[81];
  char sql[128] = {0};
  char *errmsg;
  int idt1;
  sqlite3 * db;
  db = sqlopen();
  cgiFormStringNoNewlines("id",number,81);
  idt1 = atoi(number);
  if(idt1 != 0){
    sprintf(sql, "delete from jichuban1 where 编号 = %d", idt1);
    if(sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK){
      fprintf(cgiOut,"%s\n",errmsg);
    }
    show1();
    sqlite3_close(db);
    fprintf(cgiOut, "<form method=\"POST\" enctype=\"multipart/form-data\"  style=\"text-align:center\" ");
    fprintf(cgiOut, "action=\" ");
    cgiValueEscape(cgiScriptName);
    fprintf(cgiOut, "\">\n");
    fprintf(cgiOut, "<input type=\"submit\" name=\"return\" value=\"返回\"   style = \"color:red\">\n");
    fprintf(cgiOut, "</form>");
  }
  else{
    sqlite3_close(db);
    ShowForm();
    fprintf(cgiOut, "NOT NULL");
  }
  return 0;
}

int Update(){
  char id[81];
  char score[81];
  char sql[128];
  sqlite3 * db;
  char * errmsg;
  db = sqlopen();
  int a, b;
  cgiFormStringNoNewlines("id", id, 81);
  cgiFormStringNoNewlines("score", score, 81);
  a = atoi(id);
  b = atoi(score);
  if(a != 0){
    sprintf(sql, "update jichuban1 set 分数 = %d  where 编号 = %d", b, a);
  	if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK)
  	{
  		printf("%s\n", errmsg);
    }
    puts("update OK !");
    show1();
    sqlite3_close(db);
  }
  else{
    sqlite3_close(db);
    fprintf(cgiOut, "NOT NULL!!!!");
  }
  return 0;
}
