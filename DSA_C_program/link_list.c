#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

    struct node {
        int info;
        struct node *next;
    };
    struct node *head=NULL;

void delete(struct node*head,int x){
    struct node*temp=head,*pre=NULL;
    //made this to not change the actual value of the head outside as we are treversing the list
    if (temp==NULL){  //we have reached the end of the list
        printf("the list is empty");
    } else{
        while(temp!=NULL && temp->info!=x){// we will enter this till we reach end or find the value 
            pre=temp;
            temp=temp->next;
        }
        if(temp==NULL){ //we have reached the end of the list
            printf("element not found");
        }
        if(temp->next==NULL){
            head=NULL;
            free(temp);
        }
        if(pre==NULL){
            head=temp->next;
        }
        if(temp==NULL){
            pre->next=NULL;
        }
        if(temp!=NULL){
            pre->next=temp->next;
            free(temp);
        }
    }
}
void insert(int n){
    int i,x;
    for(i=0;i<n;i++){
        struct node *newnode =(struct node *)malloc(sizeof(struct node));
        printf("enter the values to be added = ");
        scanf("%d",&x);
        newnode->info=x;
        newnode->next=NULL;
        struct node *current =head; 
        if(head==NULL){
            head=newnode;
        }else{
            while (current->next!=NULL)
            {
                current=current->next;
            }
            current->next=newnode;   
        }
    }
}
void display(){
    struct node *current =head;
    while(current!=NULL){
        printf("\nvalue= %d",current->info);
        current=current->next;
    }
}
int main(){
    int n,x;
    printf("enter the no. of elements you want to enter = ");
    scanf("%d",&n);
    insert(n);
    display();
    printf("enter the no. you want to deleate = ");
    scanf("%d",&x);
    delete(head,x);

}    