#include <stdio.h>
#include <string.h>
/*int main() {
  char name[100],i,copy[100],*ptr;
  printf("enter your name=");
  fgets(name,100,stdin);
  strcpy(copy,name);
  printf("content of copy=");
  fputs(copy,stdout);
} */ 
int uscopy(char*,char*);
int main(){
  char name[100],i,copy[100],*ptr;
  printf("enter your name=");
  fgets(name,100,stdin);
  uscopy(copy,name);
  printf("content of copy=");
  fputs(copy,stdout);
}

int uscopy(char*p1,char*p2){
  while(*p2!='\0'){
    *p1=*p2;
    p1++;
    p2++;
  }
  *p1='\0';
}