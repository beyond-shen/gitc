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

//void Text();

int cgiMain(){
  cgiHeaderContentType("text/html");
  fprintf(cgiOut, "<HTML lang=\"en\">\n");
  fprintf(cgiOut, "<HEAD>\n");
  fprintf(cgiOut, "<meta charset=\"UTF-8\">\n");
  fprintf(cgiOut, "<TITLE>登记个人信息</TITLE>\n");
  fprintf(cgiOut, "<BODY><h1 stype=\"color:blue\">Your Data</h1>\n");
  if ((cgiFormSubmitClicked("testcgic") == cgiFormSuccess) ||
  (cgiFormSubmitClicked("saveenvironment") == cgiFormSuccess)){
    HandleSubmit();
    fprintf(cgiOut, "<hr>\n");
  }
    ShowForm();

    fprintf(cgiOut, "</BODY></HTML>\n");
    return 0;
}

void HandleSubmit(){
  sqlite3 *db;
  sqlopen();
  Dataform();
  db = sqlopen();
  sqlite3_close(db);
  //Text();
}
int do_insert(sqlite3 *db, int id, char * name, int score){
  char sql[128];
  char * errmsg;
  int a;
  sprintf(sql, "insert into jichuban(id, name, score)values(%d, '%s', %d);", id, name, score);
  fprintf(cgiOut,"%s",sql);
  a = sqlite3_exec(db, sql, NULL, NULL, &errmsg);
  fprintf(cgiOut, "%d", a);
  if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK){
    fprintf(cgiOut, "%d", a);
    printf("%s\n", errmsg);
  }
  return 0;
}

void Dataform(){
  char id[81];
  char name[81];
  char score[81];
  int idt, scoret;
  sqlite3 * db;
  cgiFormStringNoNewlines("id", id, 81);
  fprintf(cgiOut, "ID:");
  cgiHtmlEscape(id);
  fprintf(cgiOut, "<br>\n");
  cgiFormStringNoNewlines("name", name, 81);
  fprintf(cgiOut, "Name:");
  cgiHtmlEscape(name);
  fprintf(cgiOut, "<br>\n");
  cgiFormStringNoNewlines("score", score, 81);
  fprintf(cgiOut, "Score:");
  cgiHtmlEscape(score);
  fprintf(cgiOut, "<BR>\n");
  idt = atoi(id);
  scoret = atoi(score);
  db = sqlopen();
  do_insert(db, idt, name, scoret);
}

sqlite3 * sqlopen(){
  sqlite3 * db;
  char * errmsg;
  int ret;
  if(sqlite3_open("./db/my.db", &db) != SQLITE_OK){
    printf("%s\n",sqlite3_errmsg(db));
  }
  if((ret = sqlite3_exec(db, "create table jichuban(id integer, name vchar(32) not null,score integer not null)", NULL, NULL, &errmsg)) != SQLITE_OK){
    if(ret != 1){
      printf("%s\n", errmsg);
      sqlite3_close(db);
    }
  }
  return db;
}








/*  void  Text(){
    char title[20];
    char content[300];
    cgiFormString("Title", title, 20);
    fprintf(cgiOut, "Title:\n");
    cgiHtmlEscape(title);
    fprintf(cgiOut, "<br>\n");
    cgiFormString("Content", content, 300);
    fprintf(cgiOut, "Content:");
    fprintf(cgiOut, "<br>\n");
    cgiHtmlEscape(content);
    fprintf(cgiOut, "<br>\n");
  }
*/
void ShowForm(){
	fprintf(cgiOut, "<form method=\"POST\" enctype=\"multipart/form-data\" ");
  fprintf(cgiOut, "action=\" ");
  cgiValueEscape(cgiScriptName);
  fprintf(cgiOut, "\"");
  fprintf(cgiOut, "<p>ID:</p>\n");
	fprintf(cgiOut, "<input type=\"text\" name=\"id\">\n");
  fprintf(cgiOut, "<p>Name:</p>\n");
	fprintf(cgiOut, "<input type=\"text\" name=\"name\">\n");
  fprintf(cgiOut, "<p>Score:</p>\n");
	fprintf(cgiOut, "<input type=\"text\" name=\"score\">\n");
  //fprintf(cgiOut, "<p>Title</p>\n");
  //fprintf(cgiOut, "<h3 stype=\"color:red\"><input type=\"text\" name=\"Title\"></h1>\n");
  //fprintf(cgiOut, "<br>\n");
  //fprintf(cgiOut, "<p>Content</p>\n");
  //fprintf(cgiOut, "<textarea name=\"Content\" rows=\"20\" cols=\"40\">\n");
//  fprintf(cgiOut, "</textarea>\n");
  fprintf(cgiOut, "<Hr>\n");
  fprintf(cgiOut, "<br>\n");
	fprintf(cgiOut, "<input type=\"submit\" name=\"saveenvironment\" value=\"Save Environment\">\n");
	fprintf(cgiOut, "</form>\n");
}
