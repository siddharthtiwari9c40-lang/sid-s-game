#include <stdio.h>
int main() {
    int a,i,j,k;
   printf("enter no of lines = ");
   scanf("%d",&a);
   for(i=a;i>=0;i--){
    for(j=0;j<a-i;j++){
        printf(" ");
    }
    for(j=0;j<i;j++){
        printf("*");
    }
    printf("\n");
   }

}