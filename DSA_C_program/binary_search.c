#include <stdio.h>
void bsearch(int *p,int q,int x){
    printf("enter element to search= ");
    scanf("%d",&x);
   int mid,l=0,h=q-1;
   while(l<=h){
    mid=(l+h)/2;
    if(x==*(p+mid)){
        printf("element %d found at location %d ",x,mid);
        break;
    }else if(x<*(p+mid)){
        h=mid-1; // going/moving towards left (1 2 3 4 5 6 7 8)
    }else{
        l=mid+1;
    }if(l>h){
        printf("not found");
    }
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

int main() {
    int a[10], n = 6,x;
    get(a, n);
    display(a, n);
    printf("Array elements after insertion are:\n");
    display(a, n);
    bsearch(a,n,x);
    return 0;
}