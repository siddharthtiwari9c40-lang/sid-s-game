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
        int x,n;
        printf("enter the number of elements you want to insert= ");
        scanf("d",&x);
}