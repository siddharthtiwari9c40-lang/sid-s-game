#include<stdio.h>
#include<stdlib.h>
void insert(int*p,int m,int*s,int*f,int*r);
void display(int*p,int f,int r);
void del(int*p,int*s,int*f,int*r);
int main(){
    int o, a[5],fr=-1,re=-1,ms=5,sz=0;
    while(1){
        printf("enter 1 for push\nenter 2 for pop\npress 3 for display\n==  ");
        scanf("%d",&o);
        if(o==1){
            insert(a,ms,&sz,&fr,&re);
        }else if(o==2){
            del(a,&sz,&fr,&re);
        }else if(o==3){
            display(a,fr,re);
        }else{
            exit(0);
        }
    }
}

void insert(int*p,int m,int*s,int*f,int*r){
    int o;
    if(*r==m-1){
        printf("overflow");
    }else{
        printf("enter the value to be pushed= ");
        scanf("%d",&o);
        (*r)++;
        *(p+(*r))=o;
        (*s)++;
        if((*f)==-1){
            (*f)++;
        }
    }
}

void del(int*p,int*s,int*f,int*r){
    if(*r==-1){
        printf("underflow");
    }else{
        (*f)++;
        if(*f>*r){
            *f=-1;
            *r=-1;
        }
    }
}

void display(int*p,int f,int r){
    for(int i =f;i<=r;i++){
        printf("index = %d value = %d\n",i,*(p+i));
    }

}