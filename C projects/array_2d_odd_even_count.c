#include <stdio.h>
int main() {
    int a[3][3], i, j;
    int even = 0, odd = 0;
    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    printf("\nTotal Even Elements = %d\n", even);
    printf("Total Odd Elements = %d\n", odd);
}
