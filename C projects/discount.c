#include <stdio.h>


int main() {
    int b, disco;
    char a,n;
    printf("are you a member y/n=");
    scanf("%c",&a);
     printf("enter your total bill=");
     scanf("%d",&b);
    if (a=='y' && b>=1000) {
        disco= b - (b/10);
        printf("your amount after discount=%d\n",disco);
    } else {
        printf("no discount for you!.");
    }
}    