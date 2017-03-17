#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>

#define M 32
#define N 128

int do_insert(sqlite3 *db)
{
  int id;
  char name[M] = {0};
  int score;
  char sql[N] = {0};
  char *errmsg;

  printf("input  student id > ");
  scanf("%d", &id);

  printf("input  student name > ");
  scanf("%s", name);

  printf("input  student score > ");
  scanf("%d", &score);

  sprintf(sql, "insert into jichuban values(%d, '%s', %d)", id, name, score);
  if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK)
  {
    printf("%s\n", errmsg);
    return -1;
  }
  printf("\e[32minsert OK !\e[0m\n");
	return 0;
}
int do_delete(sqlite3 *db){

}

int main(int argc, char * argv[]){
  sqlite3 *db;
  char *errmsg;
  char clean[M];
  int cmd;

  if(sqlite3_open("./shen.db", &db) != SQLITE_OK){
    printf("%s\n",sqlite3_errmsg(db));
    return -1;
  }

  int ret;
  if((ret = sqlite3_exec(db, "create table jichuban(id integer, name vchar(32) not null,score integer not null)", NULL, NULL, &errmsg)) != SQLITE_OK){
    if(ret == 1){
      printf("%s\n", errmsg);
      sqlite3_close(db);
      return -1;
    }
  }
  while(1){
    printf("\e[31m*** 1:insert ***\e[0m\n");
    printf("number > ");
    if (scanf("%d", &cmd) != 1)
		{
			puts("input error");
			fgets(clean, sizeof(clean), stdin);
			continue;
    }
    switch (cmd){
      case 1:
        do_insert(db);
        break;
      case 2:
        goto RET;
    }
  }
RET:
    sqlite3_close(db);
    return 0;
}
