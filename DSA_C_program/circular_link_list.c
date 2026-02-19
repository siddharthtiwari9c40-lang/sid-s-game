#include <stdio.h>
#include <stdlib.h>
struct node {
    int info;
    struct node *next;
};

struct node *tail =NULL;

void travel(){
    struct node*temp=tail->next;
    int count=0,sum=0;
    do{
        count++;
        sum=sum+temp->info;
        printf("%d",temp->info);
        temp=temp->next;
    }
    while(temp!=tail);
}

int search(int x){
    struct node*temp=tail->next;
    do{
        if(temp->info==x){
            return 1;
            temp=temp->next;
        }
    }while(temp!=tail);
    return 0;
}

void insert(){
    int x,n;
    printf("enter the number of values to be inserted= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        struct node*newnode=(struct node*)(malloc(sizeof(struct node)));
        printf("enter the value to be inserted = ");
        scanf("%d",&x);
        newnode->info=x;
        newnode->next=NULL;
        if(tail==NULL){
            newnode->next=newnode;
            tail=newnode;
        }else{
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;   
        }
    }
}

void del(){
    int x,i;
    printf("enter the value to be deleted = ");
    scanf("%d",&x);
    if(tail==NULL){
        printf("link list is empty");
    }else{
        struct node*temp=tail->next;
        do{
            temp=temp->next;
        }while(temp!=tail && temp->info!=x);
        if(tail==temp){
            printf("value not found");
        }else{
            if(temp==tail->next){
                tail->next=temp->next;
                free(temp);
            }else if(temp==tail){

            }
        }
    }
}


void main(){
    insert();
    travel();
}