#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node*next;
};

struct node*front=NULL;
struct node*rear=NULL;
struct node*head=NULL;

void enqueue(){
       int x;
        printf("enter the element to be inserted = ");
        scanf("%d",&x);
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        newnode->info=x;
        newnode->next=NULL;
        if(rear==NULL){
            front=rear=newnode;
        }else{

            rear->next=newnode;
            rear=newnode;
        }
    }

// struct node*pre=NULL;   
// struct node*temp=head;
// while(temp!=){
//     pre=temp;
//     temp=temp->next;

void dequeue(){
    if(rear==NULL){
        printf("stack is empty");
    }else{
        printf("deleted = %d",rear->info);
        rear=rear->next;
    }
}


void main(){
    int o;
    while (1)
    {
        printf("/n1. push\n2. pop\n3. peep\n4. display\nenter your choice== ");
        scanf("%d",&o);
        switch(o)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        default:
        exit(0);
        }
    }
    
}