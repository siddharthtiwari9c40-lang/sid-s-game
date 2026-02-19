#include <stdio.h>
#include <stdlib.h>
struct node {
    int info;
    struct node *next;
    struct node *prev;
};

struct noad *head =NULL;
struct noad*tail=NULL;

void treval(){
    struct node*curr=head;
    while(curr!=NULL){
        print("%d",curr->info);
        curr=curr->prev;
    }
}

int search(int x){
    struct node*temp=head;
    while ((temp!=NULL)){
        if(temp->info==x){
            return 1;
        }
    }
    temp=temp->next;
    return 0;
}

int length(){
    int count=0;
    struct node*temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insert(){
    struct node *newnode =(struct node *)malloc(sizeof(struct node));
    newnode->info=1;
    newnode->next=NULL;
    newnode->prev=NULL;
    // head=newnode;-- for new
    // tail=newnode;

    // head->prev=newnode;
    // newnode->next=head; -- begaining
    // head=newnode;

    // tail->next=newnode;
    // newnode->prev=tail;-- end
    // tail=newnode;

    newnode->next=curr->next;
    newnode->prev=curr;
    curr->next->pre=newnode;
    curr->next=newnode;
}

void deleate(){
    // head->next->prev=NULL; - start
    // head=head->next;
    // tail->prev->next=NULL; -- end
    // tail-tail->prev;

    curr->next->prev=curr->prev;
    curr->prev->next=curr->next;    //--middle
    free(curr);

}