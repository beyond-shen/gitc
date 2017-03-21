#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cgic.h"
#include <sqlite3.h>

void Name();
void HandleSubmit();
void ShowForm();
void Text();

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
    do_insert() ;
    fprintf(cgiOut, "</BODY></HTML>\n");
    return 0;
}

void HandleSubmit(){
  Name();
  Text();
}
void Name(){
  char lastname[81];
  char firstname[81];
  cgiFormStringNoNewlines("Last name", lastname, 81);
  fprintf(cgiOut, "LastName:");
  cgiHtmlEscape(lastname);
  fprintf(cgiOut, "<br>\n");
  cgiFormStringNoNewlines("First name", firstname, 81);
  fprintf(cgiOut, "FirstName:");
  cgiHtmlEscape(firstname);
  fprintf(cgiOut, "<BR>\n");
  }
  void  Text(){
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

void ShowForm(){
	fprintf(cgiOut, "<form method=\"POST\" enctype=\"multipart/form-data\" ");
  fprintf(cgiOut, "action=\" ");
  cgiValueEscape(cgiScriptName);
  fprintf(cgiOut, "\"");
  fprintf(cgiOut, "<p>Last Name</p>\n");
	fprintf(cgiOut, "<input type=\"text\" name=\"Last name\">\n");
  fprintf(cgiOut, "<p>First Name</p>\n");
	fprintf(cgiOut, "<input type=\"text\" name=\"First name\">\n");
  fprintf(cgiOut, "<p>Title</p>\n");
  fprintf(cgiOut, "<h3 stype=\"color:red\"><input type=\"text\" name=\"Title\"></h1>\n");
  fprintf(cgiOut, "<br>\n");
  fprintf(cgiOut, "<p>Content</p>\n");
  fprintf(cgiOut, "<textarea name=\"Content\" rows=\"20\" cols=\"40\">\n");
  fprintf(cgiOut, "</textarea>\n");
  fprintf(cgiOut, "<Hr>\n");
  fprintf(cgiOut, "<br>\n");
	fprintf(cgiOut, "<input type=\"submit\" name=\"saveenvironment\" value=\"Save Environment\">\n");
	fprintf(cgiOut, "</form>\n");
}
