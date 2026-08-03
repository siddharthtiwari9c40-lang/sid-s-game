#include <stdio.h>
#include <stdlib.h>

struct node{
    int coeff;
    int expo;
    struct node *next;
};

struct node *head = NULL;

void display();
void insert(int, int);

void main(){
    insert(5, 8);
    insert(2, 3);
    insert(7, 1);
    display();
}

void insert(int c, int e){

    struct node *newnode =
    (struct node *)malloc(sizeof(struct node));

    newnode->coeff = c;
    newnode->expo = e;
    newnode->next = NULL;

    if(head == NULL){
        head = newnode;
        return;
    }

    struct node *temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newnode;
}

void display(){

    struct node *temp = head;

    if(temp == NULL){
        printf("Empty");
        return;
    }

    while(temp != NULL){

        if(temp->expo == 0){
            printf("%d", temp->coeff);
        }
        else if(temp->expo == 1){
            printf("%dx", temp->coeff);
        }
        else{
            printf("%dx^%d", temp->coeff, temp->expo);
        }

        temp = temp->next;

        if(temp != NULL){
            printf(" + ");
        }
    }
}