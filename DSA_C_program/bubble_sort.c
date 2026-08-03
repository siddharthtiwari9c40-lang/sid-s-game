#include<stdio.h>
#include<stdlib.h>

void get(int **, int *);
void display(int *, int);
void bsort(int *, int);

void main(){
    int *a = NULL, n;
    get(&a,&n);
    printf("Array elements before sorting\n");
    display(a,n);
    bsort(a,n);
    printf("Array elements after sorting\n");
    display(a,n);
    free(a);
}
    
void get(int **p, int *i){
    int j=0;
    printf("How many elements you want to store in the array: ");
    scanf("%d",i);
    *p = (int *)malloc(*i * sizeof(int));
    if(*p == NULL){
        printf("Memory allocation failed");
        exit(1);
    }
    printf("Enter the array elements\n");
    for(j=0;j<*i;j++){
        scanf("%d",(*p+j));
    }
}

void display(int *p, int i){
    int j=0;
    printf("%d elements of array are shown below\n", i);
    for(j=0;j<i;j++){
        printf("%d\n",*(p+j));
    }
}

void bsort(int *p, int i){
    int j, k, temp;
    for(j=0;j<i-1;j++){
        for(k=0;k<i-1-j;k++){
            if(*(p+k) > *(p+k+1)){
                temp = *(p+k);
                *(p+k) = *(p+k+1);
                *(p+k+1) = temp;
            }
        }
    }
}