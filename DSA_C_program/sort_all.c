#include<stdio.h>
#include<stdlib.h>

void get(int **, int *);
void display(int *, int);
void bsort(int *, int);
void selection_sort(int *, int);
void insertion_sort(int *, int);
void merge_sort(int *, int );

void main(){
    int *a = NULL, n,z;
    get(&a,&n);
    printf("Array elements before sorting\n");
    display(a,n);
    printf("enter 1 for bubble sort\nenter 2 for selection sort\nenter 3 for insertion sort\nenter 4 for merge sort\n== ");
    scanf("%d",&z);
    if(z==1){
        bsort(a,n);
    }else if(z==2){
        selection_sort(a, n);
    }else if(z==3){
        insertion_sort(a, n);
    }else if(z==4){
        merge_sort(a,n);
    }else{
        exit(0);
    }
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
    printf("Enter the array elements:");
    for(j=0;j<*i;j++){
        scanf("%d",(*p+j));
    }
}

void display(int *p, int i){
    int j=0;
    printf("%d elements of array are shown below\n\n", i);
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

void selection_sort(int *p, int q){
    int i, j, s, temp;
    for (i = 0; i < (q - 1); i++){
        s = i; 
        for (j = i + 1; j < q; j++){
            if (*(p + j) < *(p + s)){
                s = j; 
            }   
        }
        if (s != i){
            temp = *(p + i);
            *(p + i) = *(p + s);
            *(p + s) = temp;
        }
    }
}

void insertion_sort(int *p, int q){
    int i, j, temp;
    for (i = 1; i < q; i++)
    {
        temp = *(p + i);
        j = i - 1;
        while (j >= 0 && temp < *(p + j))
        {
            *(p + j + 1) = *(p + j);
            j--;
        }
        *(p + j + 1) = temp;
    }
}

void merge_sort(int *p, int q){
    int i, j, k, m;   
    if(q > 1){
        m = q / 2;
        merge_sort(p, m);
        merge_sort(p + m, q - m);
        int temp[100];
        i = 0;
        j = m;
        k = 0;
        while(i < m && j < q){
            if(*(p + i) < *(p + j)){
                *(temp + k) = *(p + i);
                k++;
                i++;
            } else {
                *(temp + k) = *(p + j);
                k++;
                j++;
            }
        }while(i < m){
            *(temp + k) = *(p + i);
            k++;
            i++;
        }while(j < q){
            *(temp + k) = *(p + j);
            k++;
            j++;
        }for(i = 0; i < q; i++){
            *(p + i) = *(temp + i);
        }
    }
}