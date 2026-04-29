#include <stdio.h>
#define MAX 10

int visited[MAX];

void DFS(int graph[MAX][MAX], int n, int v);

int main()
{
    int n, i, j, start;
    int graph[MAX][MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("graph[%d][%d] = ", i, j);
            scanf("%d", &graph[i][j]);
        }
    }
    printf("\nAdjacency Matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    printf("DFS Traversal: ");
    DFS(graph, n, start);

    return 0;
}
void DFS(int graph[MAX][MAX], int n, int v)
{
    int i;
    visited[v] = 1;
    printf("%d ", v);
    for (i = 0; i < n; i++)
    {
        if (graph[v][i] == 1 && visited[i] == 0)
        {
            DFS(graph, n, i);
        }
    }
}

