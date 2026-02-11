#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
struct node {
    int info;
    struct node *next;
};
struct node *head=NULL;

void insert(int n){
    int i,x;
    for(i=0;i<=n;i++){
        struct node *newnode =(struct node *)malloc(sizeof(struct node));
        printf("enter the values to be added");
        scanf("%d",&x);
        newnode->info=x;
        newnode->next=NULL;
        struct node *current =head;
        if(head==NULL){
            head=newnode;
        }else{
            while (current!=NULL)
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
        printf("value",current->info);
        current=current->next;
    }
}
int main(){
    int n;
    printf("enter the no. of elements you want to enter = ");
    scanf("%d",&n);
    insert(n);
    display();
}    