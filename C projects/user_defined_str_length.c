#include <stdio.h>
#include <string.h>
int usf(char*);
int main() {
  char c[20]="siddharth";
  int l;
    l=usf(c);
    printf("length of string by user defined function=%d\n",l);
    printf("length of string by pre defined function=%d\n",strlen(c));
}

int usf(char*p){
  int i=0;
  while(*p!='\0'){
    i++;
    p++;
  }
  return i;
}                      