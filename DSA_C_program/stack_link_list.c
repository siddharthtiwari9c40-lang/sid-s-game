#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node*next;
};

struct node*head=NULL;

void push(){
       int x;
        printf("enter the element to be inserted = ");
        scanf("%d",&x);
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        newnode->info=x;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
        }else{
            newnode->next=head;
            head=newnode;
        }
    }
void peep(){
    if(head==NULL){
        printf("stack is empty");
    }else{
        printf("%d",head->info);
    }
}

void display(){
    struct node*temp=head;
    if(head==NULL){
        printf("stack is empty");
    }else{
        while(temp!=NULL){
            printf("\t%d\n",temp->info);
            temp=temp->next;
        }
    }
}

void pop(){
    struct node*temp=head;
    if(head==NULL){
        printf("link list is empty");
    }else{
        printf("poped value = %d",head->info);
        head=head->next;
    }
}

void main(){
    int o;
    while (1)
    {
        printf("1. push\n2. pop\n3. peep\n4. display\nenter your choice== ");
        scanf("%d",&o);
        switch(o)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            display();
            break;
        default:
        exit(0);
        }
    }
    
}