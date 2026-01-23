#include <stdio.h>


int main() {
    int a;
    char b,c;
    printf("enter age=");
    scanf("%d",&a);
    printf("enter your gender M/F=");
    scanf(" %c",&b);
    printf("are you married Y/N=");
    scanf(" %c",&c);
    if ( c=='y' ){
        printf("you are insured");
    } else if (a>=30 && b=='m'&& c=='n'){
      printf("you are insured");
    }else if (a>=25 && b=='f'&& c=='n'){
      printf("you are insured"); 
    } else{
        printf("not insured");
    }
          
 }