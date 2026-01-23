#include<stdio.h>

int main() {
    float a,b;
    printf("enter the number you want to check=");
    scanf("%f",&a);
    if (a>=10 && a<=50) {
        printf("number is between 10 and 50.");
    } else {
        printf("number is not between 10 and 50.");
    }
    return 0;
}    