#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node*lchild;
    struct node*rchild;
};
 struct node*root=NULL;

 int count=0;
 struct node*insertat(struct node*,int,int);

 
void insert(int data){
    count++;
    root = insertat(root,data,count);
}

struct node*insertat(struct node*temp,int v,int index){
    if(index == 1){
        struct node*newnode = (struct node*)malloc(sizeof(struct node));
        newnode->info = v;
        newnode->lchild = NULL;
        newnode->rchild = NULL;
        return newnode;
    } 
    if(index%2 ==0){
        temp->lchild=insertat(temp->lchild,v,index/2);
    }else{
        temp->rchild=insertat(temp->rchild,v,index/2);
    }
    return temp;
 }

 void main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    printf("binary tree created succesfully!!");
 }