#include <stdio.h>
#include <stdlib.h>
void insert(int *p,int ms,int *s,int *f,int *r);
void delete(int *p,int*s,int*f,int*r);
void display(int *p, int f,int r,int ms);
int main(){
    int o,a[5],ms=5,re=-1,fr=-1,sz=0;
    while(1){
        printf("1 for insert\n2 for display\n3 for delete\n== ");
        scanf("%d",&o);
        if(o==1){
            insert(a,ms,&sz,&fr,&re);
        }else if(o==2){
            display(a,fr,re,ms);
        }else if(o==3){
            delete(a,&sz,&fr,&re);
        }else{
            exit(0);
        }
    }
}
void insert(int *p,int ms,int *s,int *f,int *r){
    int e;
    if((*f==0 && *r==ms-1) || (*f==*r+1)){
        printf("overflow\n");
    }else{
        printf("enter the element= ");
        scanf("%d",&e);
        if(*f==-1){
            *f=0;
            *r=0;
        }else{
            *r = (*r + 1) % ms;
        }
        *(p+(*r))=e;
        (*s)++;
    }
}
void delete(int *p,int*s,int*f,int*r){
    int e;
    if(*f==-1){
        printf("underflow\n");
    }else{
        e=*(p+(*f));
        printf("deleted element = %d\n",e);
        if(*f==*r){
            *f=-1;
            *r=-1;
        }else{
            *f = (*f + 1) % 5;
        }
        (*s)--;
    }
}
void display(int *p, int f,int r,int ms){
    int i;
    if(f==-1){
        printf("queue empty\n");
        return;
    }
    i=f;
    while(1){
        printf("%d\n",*(p+i));
        if(i==r)
            break;
        i = (i + 1) % ms;
    }
}
