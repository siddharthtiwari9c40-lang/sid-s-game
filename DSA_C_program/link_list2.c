#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node*next;
};

struct node*head=NULL;

void insert(){
    int i,x,n;
    struct node*temp;
    printf("enter the number of elements you want to enter = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the element to be inserted = ");
        scanf("%d",&x);
        newnode->info=x;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
        }else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
}           

void display(){
    struct node*temp=head;
    while(temp!=NULL){
        printf("\t%d",temp->info);
        temp=temp->next;
    }

}

void delval(){
    int x;
    struct node*temp=head,*pre=NULL;
    printf("\nenter the element to be deleted = ");
    scanf("%d",&x);
    if(head==NULL){
        printf("link list is empty");
    }else if(temp->info==x){
        head=temp->next;
        free(temp);
    }
    while(temp!=NULL && temp->info!=x){
        pre=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("not found");
    }
    pre->next=temp->next;
    free(temp);
    
}

int main() {
    insert();
    display();
    delval();
    display();
}