#include <stdio.h>


int main() {
    int b,c,a;
    printf("enter the year of join=");
    scanf("%d",&a);
    printf("enter current year=");
    scanf("%d",&b);
    printf("enter your current salary=");
    scanf("%d",&c);
    if(b-a>10){
        c+=2500;
        printf("your salary with bonus=%d",c);
    }
}