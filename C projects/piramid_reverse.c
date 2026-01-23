#include <stdio.h>
int main(){
  int i, j, n, num = 1;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (i = n; i >=0; i--) {
        for (j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}