#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node*next;
};

struct node*top=NULL;

void push(){
       int x;
        printf("enter the element to be inserted = ");  
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
void peep(){
    if(top==NULL){
        printf("stack is empty");
    }else{
        printf("%d\n",top->info);
    }   
}

void display(){
    struct node*temp=top;
    if(top==NULL){
        printf("stack is empty");
    }else{
        while(temp!=NULL){
            printf("\t%d\n",temp->info);
            temp=temp->next;
        }
    }
}

void pop(){
    struct node*temp=top;
    if(top==NULL){
        printf("link list is empty");
    }else{
        printf("poped value = %d",top->info);
        top=top->next;
    }
}

void main(){
    int o;
    while (1)
    {
        printf("\n1. push\n2. pop\n3. peep\n4. display\nenter your choice== ");
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