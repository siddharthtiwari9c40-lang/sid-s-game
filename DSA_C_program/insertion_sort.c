#include <stdio.h>
#include <stdlib.h>

void get(int **, int *);
void display(int *, int);
void insertion_sort(int *, int);

void main(){
    int *a = NULL, n;
    get(&a, &n);
    printf("Array elements before sorting\n");
    display(a, n);
    insertion_sort(a, n);
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
    printf("%d elements of array are shown below\n", i);
    for (j = 0; j < i; j++){
        printf("%d\n", *(p + j));
    }
}

void insertion_sort(int *p, int q){
    int i, j, temp;
    // i is the index of the element at the i.th element to be insertion into an array
    // sorted sub array
    // temp stores the element at the i.th index
    for (i = 1; i < q; i++)
    {
        temp = *(p + i);
        // j indicate the index of the element with which we are comparing the value of temp
        j = i - 1;
        while (j >= 0 && temp < *(p + j))
        {
            *(p + j + 1) = *(p + j);
            j--;
        }
        *(p + j + 1) = temp;
    }
}