#include<stdio.h>
#include<stdlib.h>

void display(int *p,int i){
    int j;
    for(j=0;j<i;j++){
        printf("\n%d",*(p+j));
    }
}

void get(int **p,int *i){
    int j;
    *p=(int *)malloc(*i*sizeof(int));
    printf("enter how many elements = ");
    scanf("%d",i);
    if(*p==NULL){
        printf("memory allocation failed");
    }else{
        for(j=0;j<*i;j++){
            printf("enetr the number = ");
            scanf("%d",(*p+j));
        }
    }
}

void selection_sort(int *p,int i){
    int j,k,s,temp;
    for(j=0;j<i-1;j++){
        s=j;
        for(k=j+1;k<i;k++){
            if(*(p+k)<*(p+s)){
                s=k;
            }
        }
        if(s!=j){
            temp=*(p+j);
            *(p+j)=*(p+s);
            *(p+s)=temp;
        }
    }
}
int main(){
    int *n=NULL,i;
    get(&n,&i);
    selection_sort(n,i);
    display(n,i);
} 