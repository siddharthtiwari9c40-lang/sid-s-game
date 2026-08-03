#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node* next;
    struct node* prev;
};

struct node* head = NULL;

void insert(){
    int i,x,n;
    struct node* temp;
    printf("enter the number of elements you want to enter = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the element to be inserted = ");
        scanf("%d",&x);
        newnode->info =x;
        newnode->next =NULL;
        newnode->prev =NULL;
        if(head==NULL){
            head =newnode;
        }else{
            temp =head;
            while(temp->next!=NULL){
                temp =temp->next;
            }
            temp->next =newnode;
            newnode->prev =temp;
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
    struct node* temp = head;
    printf("\nenter the element to be deleted = ");
    scanf("%d",&x);

    if(head==NULL){
        printf("link list is empty");
        return; 
    }
    if(head->info==x){
        head=head->next;
        if(head!=NULL)
            head->prev =NULL;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->info!=x){
        temp =temp->next;
    }
    if(temp==NULL){ 
        printf("not found");
        return;
    }
    if(temp->next!=NULL)
        temp->next->prev =temp->prev;
    if(temp->prev!=NULL)
        temp->prev->next =temp->next;
    free(temp);
}
int main() {
    insert();
    display();
    delval();
    display();
}