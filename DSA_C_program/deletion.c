#include <stdio.h>
#include <stdlib.h>
void get(int *p,int n);
void display(int *q,int n);
int lsearch(int*q,int n,int p);
void bsearch_(int*q,int n,int p);
void delval(int *p,int *n);
void insert(int *p, int *q);
int main() { 
    int a[10], n = 6,x,u,fnd,z;
    get(a, n);
    display(a, n);
    printf("enter 1 for binary search\nenter 2 for linear search\nenter 3 to delete an value\nenter 4 to insert new value\n== ");
    scanf("%d",&u);
    if(u==1){
        bsearch_(a,n,x);
    }else if(u==2){
        lsearch(a,n,x);
    }else if(u==3){
        delval(a,&n);
        display(a, n);
    }else if(u==4){
        insert(a, &n);
        display(a, n);
    }else{
        exit(0);
    }
    return 0;
} 
int lsearch(int *p,int q,int x){
    int i=0;
    printf("enter number to be searched= ");
    scanf("%d",&x);
    for(i=0;i<q;i++){
        if(*(p+i)==x){
            printf("found");
            return i;
            break;
        }
    }
    if(*(p+i)!=x){
        printf("not found");
        return -1;
    }
}
void bsearch_(int *p,int q,int x){
    printf("enter element to search= ");
    scanf("%d",&x);
   int mid,l=0,h=q-1;
   while(l<=h){
    mid=(l+h)/2;
    if(x==*(p+mid)){
        printf("element %d found at location %d\n ",x,mid);
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
void delval(int *p,int *n){
    int i,x,ind;
    ind=lsearch(p,*n,x);
    if (*n == 0) {
        printf("Underflow\n");
        return;
    }if(*n==-1){
        printf("Value not found\n");
        return;
        
    } 
    for(i=ind;i<(*n)-1;i++){
        *(p+i)=*(p+i+1);
    }
    (*n)--;
    printf("deletion complete\n");
    
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
