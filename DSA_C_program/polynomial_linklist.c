#include <stdio.h>
#include <stdlib.h>

struct node{
    int coeff;
    int expo;
    struct node *next;
};

struct node *head = NULL;
// 4x^2+2x+1
void display();
void insert(int, int);

void main(){
    insert(4, 2);
    insert(2, 1);
    insert(1, 0);
    display();
}

void insert(int c, int e){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->coeff = c;
    newnode->expo = e;
    newnode->next = NULL;
    if (head == NULL){
        head = newnode;
    }
    struct node *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}
void display(){
    struct node *temp = head;
    if (temp == NULL)
        printf("Empty");
    while (temp != NULL){
        printf("%dx^%d", temp->coeff, temp->expo);
        temp = temp->next;
        if (temp != NULL)
            printf("+");
    }
}