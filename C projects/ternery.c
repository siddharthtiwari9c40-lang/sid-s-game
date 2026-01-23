#include <stdio.h>

int main() {
    int a,even,odd,ea,oa;
    char b;
    printf("monday=m\n,tuesday=t\n,wednesday=w\n,thursday=u\n,friday=f\n,saturday=s\n");
    printf("enter your no. plate no.=");
    scanf("%d",&a);
    printf("enter what day is it today=");
    scanf(" %c",&b);
    even=a%2==0;
    odd=a%2!=0;
    ea=b=='m'||b=='w'||b=='f';
    oa=b=='t'||b=='u'||b=='s';
    if (even && ea || odd && oa) {
        printf("you can park your car");
    } else {
        printf("you can't park your car");
    }
}        