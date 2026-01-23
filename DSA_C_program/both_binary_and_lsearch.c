#include <stdio.h>
#include <stdlib.h>
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
void bsearch_(int *p,int q,int x){
    printf("enter element to search= ");
    scanf("%d",&x);
   int mid,l=0,h=q-1;
   while(l<=h){
    mid=(l+h)/2;
    if(x==*(p+mid)){
        printf("element %d found at location %d ",x,mid);
        break;
    }else if(x<*(p+mid)){
        h=mid-1; // going/moving towards left
    }else{
        l=mid+1;
    }
    }
    if(l>h){
        printf("not found");
    }
   
}
void get(int *p, int q) {
    int i;
    for (i = 0; i < q; i++) {
        printf("Enter element %d: ", i+1);
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
    int a[10], n = 6,x,u;
    get(a, n);
    display(a, n);
    printf("enter 1 for binaary search\nenter 2 for linear search\n== ");
    scanf("%d",&u);
    if(u==1){
        bsearch_(a,n,x);
    }else if(u==2){
        lsearch(a,n,x);
    }else{
        exit(0);
    }
    
    return 0;
} 