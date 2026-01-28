#include <stdio.h>
#include <stdlib.h>
void insert(int *p,int ms,int *s,int *f,int *r);
void delete(int *p,int*s,int*f,int*r);
void display(int *p, int f,int r);
int main(){
    int o,a[5],ms=5,re=-1,fr=-1,sz=0;
    while(1){
    printf("1 for insert\n2 for display\n3 for delete\n== ");
    scanf("%d",&o);
    if(o==1){
        insert(a,ms,&sz,&fr,&re);
    } else if(o==2){
        display(a,fr,re);
    }else if(o==3){
        delete(a,&sz,&fr,&re);
    }else{
        exit(0);
    }
}
}

void insert(int *p,int ms,int *s,int *f,int *r){
    int e;
    if(*r==ms-1){
        printf("overflow\n");
    }else{
        printf("enter the element= ");
        scanf("%d",&e);
        *r=(*r)+1;
        *(p+(*r))=e;
        (*s)++;
        if((*f)==-1){
            (*f)++;
        }
    }
}
void delete(int *p,int*s,int*f,int*r){
    int e;
    if(*f==-1){
        printf("underflow\n");
    } else{
        e=*(p+(*f));
        (*f)++;
        if((*f)>(*r)){
            *f=-1;
            *r=-1;
        }
    }
}

void display(int *p, int f,int r) {
    int i;
    for (i = f; i <= r; i++) {
        printf("%d\n", *(p + i));
    }
}