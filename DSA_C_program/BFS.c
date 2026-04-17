#include<stdio.h>
#include<stdlib.h>

int queue[50], front = -1, rear = -1;


void input(int m[50][50], int *n){
    int i, j;
    printf("Enter number of vertices: ");
    scanf("%d", n);

    for(i = 0; i < *n; i++){
        for(j = 0; j < *n; j++){
            printf("m[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}


void display(int m[50][50], int n){
    int i, j;
    printf("\nMatrix:\n");

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void enqueue(int x){
    if(rear == 49){
        printf("Queue overflow\n");
        return;
    }
    if(front == -1) front = 0;
    queue[++rear] = x;
}

int dequeue(){
    if(front == -1){
        return -1;
    }
    int x = queue[front];
    if(front == rear){
        front = rear = -1;
    } else {
        front++;
    }
    return x;
}

int isEmpty(){
    return (front == -1);
}

void BFS(int graph[50][50], int n){
    int visited[50] = {0};
    int i, start;

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    visited[start] = 1;
    enqueue(start);

    printf("BFS Traversal: ");

    while(!isEmpty()){
        int v = dequeue();
        printf("%d ", v);

        for(i = 0; i < n; i++){
            if(graph[v][i] == 1 && visited[i] == 0){
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
}


int main(){
    int m[50][50], n;
    input(m, &n);
    display(m, n);
    BFS(m, n);
}