#include <stdio.h>

int main() {
    int a,b,c,total;
    float perc;
    printf("enter the marks in first subject=");
    scanf("%d",&a);
    printf("enter the marks in second subject=");
    scanf("%d",&b);
    printf("enter the marks in third subject=");
    scanf("%d",&c);
    total=a+b+c;
    printf("your tatal score=%d\n",total);
    perc=(a+b+c)/3;
    printf("your tatal percent=%f\n",perc);
    if (perc>=40) {
        printf("you have passed your exam..");
    } else {
        printf("you have failed your exam..");
    }        
    

}
