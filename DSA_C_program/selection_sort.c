#include <stdio.h>
#include <stdlib.h>

void get(int **, int *);
void display(int *, int);
void selection_sort(int *, int);

void main(){
    int *a = NULL, n;
    get(&a, &n);
    printf("Array elements before sorting\n");
    display(a, n);
    selection_sort(a, n);
    printf("Array elements after sorting\n");
    display(a, n);
    free(a);
}

void get(int **p, int *i){
    int j = 0;
    printf("How many elements you want to store in the array: ");
    scanf("%d", i);
    *p = (int *)malloc(*i * sizeof(int));
    if (*p == NULL){
        printf("Memory allocation failed");
        exit(1);
    }
    printf("Enter the array elements\n");
    for (j = 0; j < *i; j++){
        scanf("%d", (*p + j));
    }
}
void display(int *p, int i){
    int j = 0;
    printf("%d-elements of array are shown below\n", i);
    for (j = 0; j < i; j++){
        printf("%d\n", *(p + j));
    }
}

void selection_sort(int *p, int q){
    // q =No. of element
    // p is the pointer variable having the address of the 1st element of array
    int i, j, s, temp;
    for (i = 0; i < (q - 1); i++){
        // i  holds the index of first element smallest
        s = i; // s holdes the position of element in the current pass
        // initially we assume that 1st element is the smallest element.
        for (j = i + 1; j < q; j++){
            if (*(p + j) < *(p + s)){
                s = j; // update the index of the smallest element
            }
        }
        if (s != i){
            temp = *(p + i);
            *(p + i) = *(p + s);
            *(p + s) = temp;
        }
    }
}