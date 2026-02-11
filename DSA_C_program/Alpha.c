#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
struct node {
    int info;
    struct node *next;
};
void search(int e)
{
    struct node *current = head;
    while(current!=NULL){
        if(current->info==e){
            printf("element is present");
        }
        current= current->next;
    }
    if(current==NULL){
        printf("not present");
    }
}

int main(){

}
//write a c function to add a value after a specific node in the link list

void insert(int e, int j){
    struct node *newnode =(struct node *)malloc(sizeof(struct node)):
    newnode-> info=e;
    newnode-> next = NULL;
    struct node *current = head;
    while(current->info!=j){
        current=current->next;
    }
    newnode->next=current->next;
    current->next=newnode;
    
}