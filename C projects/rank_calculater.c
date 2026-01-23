#include <stdio.h>


int main() {
    int a,b,c,d,e;
    float p;
    printf("enter the marks in first subject=");
    scanf("%d",&a);
    printf("enter the marks in 2nd subject=");
    scanf("%d",&b);
    printf("enter the marks in 3rd subject=");
    scanf("%d",&c);
    printf("enter the marks in 4th subject=");
    scanf("%d",&d);
    printf("enter the marks in 5th subject=");
    scanf("%d",&e);
    p=(a+b+c+d+e)/5;
    if (p>=60){
        printf("first division");
    }
      if(p>=50 && p<=59) {
        printf("second division");
    }
      if(p>=40){
        printf("third division");
    } else{
        printf("fail");
    }
          
 }
