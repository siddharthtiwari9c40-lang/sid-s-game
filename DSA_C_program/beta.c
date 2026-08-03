#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node*next;
};

struct node*top =NULL;
void push(){
    int x;
    printf("enter the element to push = ");
    scanf("%d",&x);
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->info=x;
    newnode->next=NULL;
    if(top==NULL){
        top=newnode;
    }else{
        newnode->next=top;
        top=newnode;
    }
}

void display(){
    struct node*temp=top;
    while(temp!=NULL){
        printf("%d\n",temp->info);
        temp=temp->next;
    }
}

void pop(){
    struct node*temp=top;
    top=top->next;
}