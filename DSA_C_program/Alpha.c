#include <stdio.h>
#include <stdlib.h>

// Define structure for a node
struct Node 
{
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert nodes level-wise (to maintain complete binary tree)
struct Node* insertLevelOrder(int arr[], int i, int n) 
{
    struct Node* root = NULL;
    if (i < n) 
    {
        root = createNode(arr[i]);
        // insert left child
        root->left = insertLevelOrder(arr, 2*i + 1, n);
        // insert right child
        root->right = insertLevelOrder(arr, 2*i + 2, n);
    }
    return root;
}

// Inorder traversal (for checking)
void inorder(struct Node* root) 
{
    if (root != NULL) 
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void preorder(struct Node* root) 
{
    if (root != NULL) 
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node* root) 
{
    if (root != NULL) 
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
// Main function
int main() 
{
    // 10 different values
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    struct Node* root = insertLevelOrder(arr, 0, 10);
    printf("Inorder Traversal of Complete Binary Tree:\n");
    inorder(root);
    printf("\nPreorder Traversal of Complete Binary Tree:\n");
    preorder(root);
    printf("\npostorder Traversal of Complete Binary Tree:\n");
    postorder(root);
    return 0;
}