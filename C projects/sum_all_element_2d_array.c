#include <stdio.h>
int main() {
    int a[3][3], i, j, d = 0;
    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            d = d + a[i][j];  
        }
    }
    printf("Sum of all elements of matrix = %d\n", d);
    printf("The matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
