#include<stdio.h>
#include<stdlib.h>
void pop(int *p,int *q);
void push (int *p,int m,int *q);
void display(int *p, int t);
int main(){
    int a[5],max=5,top=-1,o;
    while(1){
        printf("enter 1 for push\nenter 2 for pop\npress 3 for display\n==  ");
        scanf("%d",&o);
        if(o==1){
            push(a,max,&top);
        }else if(o==2){
            pop(a,&top);
        }else if(o==3){
            display(a,top);
        }else{
            exit(0);
        }
    }
}
void push (int *p,int m,int *q){
    int x;
    if(*q==m-1){
        printf("overflow\n");
    }else{
        printf("enter the value to be pushed = ");
        scanf("%d",&x);
        (*q)++;
        *(p+(*q))=x;
    }
}
void pop(int *p,int *q){
    int x;
    if(*q==-1){
        printf("underflow\n");
    } else{
        x=*(p+(*q));
        (*q)--;
        printf("popped\n");
    }
}

void display(int *p, int t){
    for(int i=t;i>=0;i--){
        printf("index= %d  Element = %d \n",i,*(p+i));
    }
}    