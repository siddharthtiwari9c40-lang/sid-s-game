#include <stdio.h>
#include <stdlib.h>
struct node {
    int info;
    struct node *next;
    struct node *prev;
};

struct node *tail =NULL;
struct node *head =NULL;

void display(){
    struct node*temp=head;//tail
    if (temp ==NULL){
        printf("link list is empty");
    }else{
        do{
            printf("value is: ",temp->info);
            temp=temp->next;//prev
        }while(temp!=tail->next);//head->prev
    }
}

void insert(){
        int x,n,y,l;
        struct node*newnode=(struct node*)(malloc(sizeof(struct node)));
        newnode->info=NULL;
        newnode->next=NULL;
        printf("enter the number of elements you want to insert= ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            l=length();
            printf("enter the value to be inserted = ");
            scanf("%d",&x);
            newnode->info=x;
            if(head==NULL){
                head=newnode;
                tail=newnode;
                newnode->next=newnode;
                newnode->prev=newnode;
            }else{
                printf("enter the position where you want to enter the number");
                scanf("%d",&y);
                if(y==1){
                    newnode->next=head;
                    newnode->prev=tail;
                    head->prev=newnode;
                    tail->next=newnode;
                    head=newnode;
                }
                else if(y>l){
                    newnode->next=head;
                    newnode->prev=tail;
                    tail->prev=newnode;
                    head->next=newnode;
                    tail=newnode;

                }else{
                    newnode->prev=temp;
                    newnode->next=temp->next;
                    temp->next->prev=newnode;
                    temp->next=newnode;
                }
            }
        }

}

void delvel(){
    // for 1st
    tail->next =head->next;
    head->next->prev=tail;
    head=head->next;
    // for end
    head->prev=tail->prev;
    tail->prev->next=head;
    tail=tail->prev;
}