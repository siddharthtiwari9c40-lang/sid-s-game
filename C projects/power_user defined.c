#include <stdio.h>
int power(int,int);
int main(){
    int a,b,c;
    printf("enter a number=");
    scanf("%d",&a);
    printf("enter the power=");
    scanf("%d",&c);

    b=power(a,c);
    printf("%d raised to power %d = %d",a,c,b);
    return 0;
}

int power(int a,int c){
    int i=1,j=1;
    while (j<=c){
        i=i*a;
        j++;
    }
    return i;
}
    