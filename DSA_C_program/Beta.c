#include <stdio.h>
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