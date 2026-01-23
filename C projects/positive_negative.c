#include<stdio.h>

int main(){
    int a,b;
    printf("enter the number you want to check=");
    scanf("%d",&a);
    if (a<0){
        printf("your number is negative.");
    } else if (a>0){
        printf("your number is positive.");
     } else {
        printf("your number is zero.");
     }

}