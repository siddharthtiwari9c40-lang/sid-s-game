#include <stdio.h>
void lsearch(int *p,int q,int x){
    int i=0;
    printf("enter number to be searched= ");
    scanf("%d",&x);
    for(i=0;i<q;i++){
        if(*(p+i)==x){
            printf("found");
            break;
        }
    }
    if(*(p+i)!=x){
        printf("not found");
    }
}
void get(int *p, int q) {
    int i;
    for (i = 0; i < q; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", p + i);
    }
}

void display(int *p, int q) {
    int i;
    for (i = 0; i < q; i++) {
        printf("%d\n", *(p + i));
    }
}

void insert(int *p, int *q) {
    int i, loc, e;
    printf("Enter the location for insertion: ");
    scanf("%d", &loc);
    printf("Enter the value to be inserted: ");
    scanf("%d", &e);
    (*q) = (*q) + 1;
    for (i = (*q) - 1; i > loc; i--) {
        *(p + i) = *(p + i - 1);
    }   
    *(p + loc) = e;
}

int main() {
    int a[10], n = 6,x;
    get(a, n);
    display(a, n);
    insert(a, &n);
    printf("Array elements after insertion are:\n");
    display(a, n);
    lsearch(a,n,x);
    return 0;
}