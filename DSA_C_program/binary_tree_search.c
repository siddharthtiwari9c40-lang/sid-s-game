#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node*lchild;
    int key;
    struct node*rchild;
};

struct node * root = NULL;

struct node*createnode(int value){
    struct node *newnode =(struct node*)malloc(sizeof(struct node));
    newnode->key = value;
    newnode->lchild = NULL;
    newnode->rchild = NULL;
    return newnode;
}

void inorder(struct node*temp){
    if(temp!=NULL){
        inorder(temp->lchild);
        printf("%d\t",temp->key);
        inorder(temp->rchild);
    }
}

void postorder(struct node*temp){
    if(temp!=NULL){
        postorder(temp->lchild);
        postorder(temp->rchild);
        printf("%d\t",temp->key);
    }
}
void preorder(struct node*temp){
    if(temp!=NULL){
        printf("%d\t",temp->key);
        preorder(temp->lchild);
        preorder(temp->rchild);
    }
}

void bst_insert(int val){
    struct node*newnode = createnode(val);
    if(root == NULL){
        root = newnode;
        return;
    }else{
        struct node*current = root;
        struct node*parent = NULL;
        while(current!= NULL){
            parent = current;
            if(val<current->key){
                current=current->lchild;
            }else{
                current=current->rchild;
            }
        }
        if(val<parent->key){
            parent ->lchild = newnode;
        }else{
            parent ->rchild = newnode;
        }
    }
}

int main(){
    int val[10]={30,40,10,25,50,40,22,90,80,60},i;
    for(i=0;i<10;i++){
        bst_insert(val[i]);
    }
    printf("\ninorder treversal is = ");
    inorder(root);
    printf("\npost order treversal is = ");
    preorder(root);
    printf("\npst order treversal = ");
    postorder(root);
    return 0;  
}