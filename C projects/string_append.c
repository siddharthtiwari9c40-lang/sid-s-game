#include <stdio.h>
#include <string.h>
/*int main(){
  char name1[]="sid",name2[]="skylar";
  fputs(name1,stdout);
  printf("\n");
  fputs(name2,stdout);
  printf("\n");
  strcat(name1,name2);
  fputs(name1,stdout);
}*/
int usrcat(char*,char*);
int main(){
  char name1[]="sid",name2[]="skylar";
  printf("first string is=");
  fputs(name1,stdout);
  printf("\nsecond string is=");
  fputs(name2,stdout);
  usrcat(name1,name2);
  printf("\nstring after combinatin =");
  fputs(name1,stdout);
}

int usrcat(char*p,char*q){
  int i;
  i=strlen(p);
  p=p+i;
  while(*q!='\0'){
    *p=*q;
    p++;
    q++;
  }
  *p='\0';
}