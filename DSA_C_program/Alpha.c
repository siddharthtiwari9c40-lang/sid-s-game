#include <stdio.h>
#include <stdlib.h>
void get(int*p,int *n);
void search(int*p,int n);
void display(int*p,int n);
void del(int *p,int *n);
int main(){
    int u,n;
    printf("enter the size of arrey = ");
    scanf("%d",&n);
    int a[n];
    get(a,&n);
    printf("enter 1 for binary search\nenter 2 to delete an value\nenter 3 to display value\n== ");
    scanf("%d",&u);
    if(u==1){
        search(a,n);
    }else if(u==2){
        del(a,&n);
        display(a,n);
    }else if(u==3){
         display(a,n);
    }else{
        exit(0);
    }
    return 0;
}

void get(int*p,int *n){
    int a,i;
    for(i=0;i<*n;i++){
    printf("enter the value = ");
    scanf("%d",(p+i));
    }
}

void search(int*p,int n){
    int x,mid,l=0,h=n-1;
    printf("enter the value to be searched = ");
    scanf("%d",&x);
    
    while(l<=h){
        mid=(l+h)/2;
        if(x==*(p+mid)){
            printf("found");
            break;
        }else if(x<*(p+mid)){
            h=mid-1;
        }else{
            l=mid+1;  
        }
    }
     if(l>h){
        printf("not found");
    
      }  
}
void display(int*p,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",*(p+i));
    }
}

void del(int *p,int *n){
    int o,x,i;
    printf("enter the value to be deleated = ");
    scanf("%d",&o);
    for(i=0;i<*n;i++){
        if(o==*(p+i)){
           break; 
        }
    }
    for(x=i;x<*n-1;x++){
        *(p+x)=*(p+x+1);
    }
    (*n)--;
}
