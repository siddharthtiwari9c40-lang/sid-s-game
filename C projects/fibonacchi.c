#include <stdio.h>
int main() {
     int n,x1,x2,x3,i;
    printf("Enter how many Fibonacci numbers to print: ");
    scanf("%d", &n);
    x1=1;
    x2=1;
    printf("Fibonacci Series: ");
    printf("%d\n%d",x1,x2);
    for(i=3;i<=n;i++){
        x3=x1+x2;
        x1=x2;
        x2=x3;
        printf("\n %d",x3);
    }
    return 0;
}