#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node 
{
    int data;
    struct Node* left;
    struct Node* right;
};

// Global root and count
struct Node* root = NULL;
int count = 0;

// Create node
struct Node* createNode(int data) 
{
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

// Insert at position (like array index)
struct Node* insertAt(struct Node* temp, int data, int index) 
{
    if (index == 1) {
        return createNode(data);
    }

    if (index % 2 == 0) {
        temp->left = insertAt(temp->left, data, index / 2);
    } else {
        temp->right = insertAt(temp->right, data, index / 2);
    }

    return temp;
}

// Insert function (only data passed)
void insert(int data) 
{
    count++;  // increase node count
    root = insertAt(root, data, count);
}

// Main
int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    insert(70);

    printf("Level-order tree created (without queue).\n");

    return 0;
}