#include <stdio.h>
#include <string.h>
/*int main(){
  char name1[]="skylar";
  char name2[]="skylar";
  if(strcmp(name1,name2)){
  printf("different");
  } else{
    printf("both are same");
  }
}*/
int usrcmp(char*,char*);
int main(){
  char name1[]="skylar";
  char name2[]="skylar";
 if(usrcmp(name1,name2)){
  printf("different");
  } else{
    printf("both are same");
  }
}
int usrcmp(char*p,char*q){
  while(*p!='\0'&& *q!='\0'){
    if(*p==*q){
      p++;
      q++;
    } else{
      return 1;
    }
  }
    if (*p == '\0' && *q == '\0')
        return 0;
    else
        return 1;
}