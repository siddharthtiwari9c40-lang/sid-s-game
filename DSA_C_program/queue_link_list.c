#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

void enqueue(){
    int x;
    printf("Enter the element to be inserted = ");
    scanf("%d",&x);
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = x;
    newnode->next = NULL;
    if(rear == NULL){
        front = rear = newnode;
    }else{
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue(){
    if(front == NULL){
        printf("Queue is empty\n");
    }else{
        struct node* temp = front;
        printf("Deleted element = %d\n", front->info);
        front = front->next;
        if(front == NULL)
            rear = NULL;
        free(temp);
    }
}

void peek(){
    if(front == NULL){
        printf("Queue is empty\n");
    }else{
        printf("Front element = %d\n", front->info);
    }
}

void display(){
    if(front == NULL){
        printf("Queue is empty\n");
    }else{
        struct node* temp = front;
        printf("Queue elements: ");
        while(temp != NULL){
            printf("%d ", temp->info);
            temp = temp->next;
        }   
        printf("\n");
    }
}

void main(){
    int o;
    while(1){
        printf("\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\nEnter your choice = ");
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
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}