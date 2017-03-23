/*海强的*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cgic.h"
#include <sqlite3.h>

#define M 32
#define N 128

void HandleSubmit();
void ShowForm();
int do_insert(sqlite3 *db, int id, char *name, int score);
sqlite3 * sqlopen();
int do_show();
int do_delete();
int do_update();
void do_show_1();

int cgiMain (void){
  cgiHeaderContentType("text/html");
  fprintf(cgiOut, "<HTML><meta charset=\"UTF-8\"><HEAD>\n");//配置中文；
  fprintf(cgiOut, "<TITLE>个人信息</TITLE></HEAD>\n");
  fprintf(cgiOut, "<BODY><H1>Personal information</H1>\n");
  if (cgiFormSubmitClicked("submit") == cgiFormSuccess){
    HandleSubmit();
    fprintf(cgiOut, "<hr>\n");
  }
  if (cgiFormSubmitClicked("showdate") == cgiFormSuccess){
    do_show();
  }
  if (cgiFormSubmitClicked("delete") == cgiFormSuccess){
    do_delete();
    do_show();
  }
  if (cgiFormSubmitClicked("update") == cgiFormSuccess){
    do_update();
    do_show();
  }
  if (cgiFormSubmitClicked("delete") != cgiFormSuccess && cgiFormSubmitClicked("showdate") != cgiFormSuccess && cgiFormSubmitClicked("update") != cgiFormSuccess){
    ShowForm();
  }
  fprintf(cgiOut, "</BODY></HTML>\n");
  return 0;
}

void HandleSubmit(){
  char id[M];
  char name[N];
  char score[M];
  cgiFormStringNoNewlines("id", id, M);
  cgiFormStringNoNewlines("name", name, N);
  cgiFormStringNoNewlines("score", score, M);
  if (strlen(id) == 0 || strlen(name) == 0 || strlen(score) == 0){
    fprintf(cgiOut, "please input content\n");
  }
  else {
    fprintf(cgiOut, "Id: ");
    cgiHtmlEscape(id);
    fprintf(cgiOut, "<BR>\n");
    fprintf(cgiOut, "Name: ");
    cgiHtmlEscape(name);
    fprintf(cgiOut, "<BR>\n");
    fprintf(cgiOut, "Score: ");
    cgiHtmlEscape(score);
    fprintf(cgiOut, "<BR>\n");
    int idt, scoret;
    sqlite3 *db;
    idt = atoi(id);
    scoret = atoi(score);
    db = sqlopen();
    do_insert(db, idt, name, scoret);
  }
}

sqlite3 * sqlopen(){
  sqlite3 *db;
  char *errmsg;
  if (sqlite3_open("./db/my.db", &db) != SQLITE_OK){
    printf("%s\n", sqlite3_errmsg(db));
  }
  int ret;
  if ((ret = sqlite3_exec(db, "create table stu(id integer, name vchar(32) not null, score integer not null)", NULL, NULL, &errmsg)) != SQLITE_OK) {
    if (ret != 1){
      printf("%s\n", errmsg);
      sqlite3_close(db);
    }
  }
  return db;
}

void ShowForm(){
  fprintf(cgiOut, "<form method=\"POST\" enctype=\"multipart/form-data\" ");
  fprintf(cgiOut, "	action=\"");
  cgiValueEscape(cgiScriptName);
  fprintf(cgiOut, "\">\n");
  fprintf(cgiOut, "<p>Id :<p>\n");
  fprintf(cgiOut, "<input type=\"text\" name=\"id\">\n");
  fprintf(cgiOut, "<p>Name :<p>\n");
  fprintf(cgiOut, "<input type=\"text\" name=\"name\">\n");
  fprintf(cgiOut, "<p>Score :<p>\n");
  fprintf(cgiOut, "<input type=\"text\" name=\"score\">\n");
  fprintf(cgiOut, "<BR><BR>\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"submit\" value=\"Submit\">\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"showdate\" value=\"Showdate\">\n");
  fprintf(cgiOut, "</form>\n");
}

int do_insert(sqlite3 *db, int id, char *name, int score){
  char sql[128];
  char *errmsg;
  sprintf(sql, "insert into stu values(%d, '%s', %d)", id, name, score);
  if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK){
    printf("%s\n", errmsg);
    return -1;
  }
  sqlite3_close(db);
  return 0;
}

int do_show(sqlite3 * db){
  char *errmsg;
  char **result, **temp;
  int nrow;
  int ncolumn;
  int i, j;
  db = sqlopen();
  if (sqlite3_get_table(db, "select * from stu order by id", &result, &nrow, &ncolumn, &errmsg) != SQLITE_OK){
    printf("%s\n", errmsg);
    return -1;
  }
  else{
    temp = result;
    fprintf(cgiOut, "<table border = \"1\">\n");
    for (i = 0; i < nrow + 1; i++){
      fprintf(cgiOut, "<tr>\n");
      for (j = 0; j < ncolumn; j++){
        printf("<td>%-15s</td>", *(temp++));
      }
      fprintf(cgiOut, "</tr>\n");
    }
  }
  fprintf(cgiOut, "</table>");
  sqlite3_free_table(result);
  sqlite3_close(db);
  do_show_1();
  return 0;
}

void do_show_1(){
  fprintf(cgiOut, "<form method=\"POST\" enctype=\"multipart/form-data\" ");
  fprintf(cgiOut, "	action=\"");
  cgiValueEscape(cgiScriptName);
  fprintf(cgiOut, "\">\n");
  fprintf(cgiOut, "<br>\n");
  fprintf(cgiOut, "Id&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp: <input type=\"text\" name=\"id\">\n");
  fprintf(cgiOut, "<br><br>\n");
  fprintf(cgiOut, "Score: <input type=\"text\" name=\"score\">\n");
  fprintf(cgiOut, "<br><br>\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"delete\" value=\"Delete\">\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"update\" value=\"Update\">\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"return\" value=\"Return\">\n");
  fprintf(cgiOut, "</form>\n");
}

int do_delete(sqlite3 * db){
  char id[M];
  char sql[N] = {0};
  char *errmsg;
  cgiFormStringNoNewlines("id", id, M);
  int idd;
  idd = atoi(id);
  db = sqlopen();
  sprintf(sql, "delete from stu where id = %d", idd);
  if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK){
    printf("%s\n", errmsg);
    return -1;
  }
  sqlite3_close(db);
  return 0;
}

int do_update(sqlite3 * db){
  char id[M];
  char score[M];
  char sql[N] = {0};
  char *errmsg;
  cgiFormStringNoNewlines("id", id, M);
  int idt;
  idt = atoi(id);
  cgiFormStringNoNewlines("score", score, M);
  int scoret;
  scoret = atoi(score);
  if (strlen(score) == 0){
    printf("please input score!!!");
  }
  else {
    db = sqlopen();
    sprintf(sql, "update stu set score = %d  where id = %d", scoret, idt);
    if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK){
      printf("%s\n", errmsg);
      return -1;
    }
    sqlite3_close(db);
  }
  return 0;
}
