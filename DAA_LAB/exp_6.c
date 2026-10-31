// #include <stdio.h>

// #include <stdlib.h>

 

// #define MAXV 1000

// #define MAXE 10000

 

// typedef struct {

//     int u, v, w;

// } Edge;

 

// int parent[MAXV], rnk[MAXV];

 

// int findSet(int x) {

//     if (parent[x] != x)

//         parent[x] = findSet(parent[x]);

//     return parent[x];

// }

 

// void unionSet(int a, int b) {

//     a = findSet(a);

//     b = findSet(b);

//     if (a == b) return;

 

//     if (rnk[a] < rnk[b]) parent[a] = b;

//     else if (rnk[a] > rnk[b]) parent[b] = a;

//     else {

//         parent[b] = a;

//         rnk[a]++;

//     }

// }

 

// int compareEdges(const void *a, const void *b) {

//     const Edge *x = (const Edge *)a;

//     const Edge *y = (const Edge *)b;

//     return (x->w > y->w) - (x->w < y->w);

// }

 

// int main(void) {

//     int V, E, i, chosen = 0;

//     long long total = 0;

//     Edge edges[MAXE];

 

//     printf("Enter number of vertices and edges: ");

//     if (scanf("%d%d", &V, &E) != 2 ||

//         V < 1 || V > MAXV || E < 0 || E > MAXE) {

//         printf("Invalid graph size.\n");

//         return 1;

//     }

 

//     printf("Enter each edge as: source destination weight\n");

//     for (i = 0; i < E; i++) {

//         scanf("%d%d%d", &edges[i].u, &edges[i].v, &edges[i].w);

//         if (edges[i].u < 0 || edges[i].u >= V ||

//             edges[i].v < 0 || edges[i].v >= V) {

//             printf("Invalid vertex.\n");

//             return 1;

//         }

//     }

 

//     for (i = 0; i < V; i++) {

//         parent[i] = i;

//         rnk[i] = 0;

//     }

 

//     qsort(edges, E, sizeof(Edge), compareEdges);

 

//     printf("\nEdges selected in the MST:\n");

//     for (i = 0; i < E && chosen < V - 1; i++) {

//         if (findSet(edges[i].u) != findSet(edges[i].v)) {

//             printf("%d -- %d  Weight: %d\n",

//                    edges[i].u, edges[i].v, edges[i].w);

//             total += edges[i].w;

//             unionSet(edges[i].u, edges[i].v);

//             chosen++;

//         }

//     }

 

//     if (chosen != V - 1)

//         printf("Graph is disconnected; MST does not exist.\n");

//     else

//         printf("Total MST Cost = %lld\n", total);

 

//     return 0;

// }

// #include <stdio.h>

// #include <stdlib.h>

// #include <limits.h>

 

// #define MAXV 1000

// #define MAXE 20000

// #define INF LLONG_MAX

 

// typedef struct {

//     int to, weight, next;

// } AdjEdge;

 

// typedef struct {

//     long long key;

//     int vertex;

// } HeapNode;

 

// AdjEdge adj[2 * MAXE];

// int head[MAXV], edgeCount = 0;

// HeapNode heap[4 * MAXE + 10];

// int heapSize = 0;

 

// void addEdge(int u, int v, int w) {

//     adj[edgeCount] = (AdjEdge){v, w, head[u]};

//     head[u] = edgeCount++;

// }

 

// void push(long long key, int v) {

//     int i = ++heapSize;

//     while (i > 1 && heap[i / 2].key > key) {

//         heap[i] = heap[i / 2];

//         i /= 2;

//     }

//     heap[i] = (HeapNode){key, v};

// }

 

// HeapNode popMin(void) {

//     HeapNode result = heap[1], last = heap[heapSize--];

//     int i = 1, child;

//     while (2 * i <= heapSize) {

//         child = 2 * i;

//         if (child + 1 <= heapSize &&

//             heap[child + 1].key < heap[child].key)

//             child++;

//         if (last.key <= heap[child].key) break;

//         heap[i] = heap[child];

//         i = child;

//     }

//     if (heapSize > 0) heap[i] = last;

//     return result;

// }

 

// int main(void) {

//     int V, E, u, v, w, start = 0, visitedCount = 0;

//     int visited[MAXV] = {0};

//     long long key[MAXV];

//     int parent[MAXV];

//     long long total = 0;

 

//     printf("Enter number of vertices and edges: ");

//     if (scanf("%d%d", &V, &E) != 2 ||

//         V < 1 || V > MAXV || E < 0 || E > MAXE) {

//         printf("Invalid graph size.\n");

//         return 1;

//     }

 

//     for (int i = 0; i < V; i++) {

//         head[i] = -1;

//         key[i] = INF;

//         parent[i] = -1;

//     }

 

//     printf("Enter each undirected edge: source destination weight\n");

//     for (int i = 0; i < E; i++) {

//         scanf("%d%d%d", &u, &v, &w);

//         if (u < 0 || u >= V || v < 0 || v >= V || u == v) {

//             printf("Invalid edge.\n");

//             return 1;

//         }

//         addEdge(u, v, w);

//         addEdge(v, u, w);

//     }

 

//     printf("Enter starting vertex (0 to %d): ", V - 1);

//     scanf("%d", &start);

//     if (start < 0 || start >= V) return 1;

 

//     key[start] = 0;

//     push(0, start);

 

//     while (heapSize > 0) {

//         HeapNode cur = popMin();

//         int x = cur.vertex;

//         if (visited[x] || cur.key != key[x]) continue;

 

//         visited[x] = 1;

//         visitedCount++;

//         if (parent[x] != -1) {

//             printf("%d -- %d  Weight: %lld\n",

//                    parent[x], x, key[x]);

//             total += key[x];

//         }

 

//         for (int e = head[x]; e != -1; e = adj[e].next) {

//             int y = adj[e].to, wt = adj[e].weight;

//             if (!visited[y] && wt < key[y]) {

//                 key[y] = wt;

//                 parent[y] = x;

//                 push(key[y], y);

//             }

//         }

//     }

 

//     if (visitedCount != V)

//         printf("Graph is disconnected; MST does not exist.\n");

//     else

//         printf("Total MST Cost = %lld\n", total);

 

//     return 0;

// }

// #include <stdio.h>

// #include <stdlib.h>

// #include <limits.h>

 

// #define MAXV 1000

// #define MAXE 20000

// #define INF LLONG_MAX

 

// typedef struct { int to, w, next; } Edge;

// typedef struct { long long d; int v; } Node;

 

// Edge adj[2 * MAXE];

// int head[MAXV], ec = 0;

// Node hp[4 * MAXE + 10];

// int hs = 0;

 

// void addEdge(int u, int v, int w) {

//     adj[ec] = (Edge){v, w, head[u]};

//     head[u] = ec++;

// }

// void push(long long d, int v) {

//     int i = ++hs;

//     while (i > 1 && hp[i/2].d > d) {

//         hp[i] = hp[i/2]; i /= 2;

//     }

//     hp[i] = (Node){d, v};

// }

// Node popMin(void) {

//     Node r = hp[1], last = hp[hs--];

//     int i = 1, c;

//     while (2*i <= hs) {

//         c = 2*i;

//         if (c+1 <= hs && hp[c+1].d < hp[c].d) c++;

//         if (last.d <= hp[c].d) break;

//         hp[i] = hp[c]; i = c;

//     }

//     if (hs) hp[i] = last;

//     return r;

// }

 

// int main(void) {

//     int V, E, u, v, w, src;

//     long long dist[MAXV];

//     int done[MAXV] = {0};

 

//     printf("Enter number of vertices and edges: ");

//     if (scanf("%d%d", &V, &E) != 2 ||

//         V < 1 || V > MAXV || E < 0 || E > MAXE) return 1;

 

//     for (int i=0; i<V; i++) { head[i] = -1; dist[i] = INF; }

 

//     printf("Enter directed edges: source destination non-negative-weight\n");

//     for (int i=0; i<E; i++) {

//         scanf("%d%d%d", &u, &v, &w);

//         if (u<0 || u>=V || v<0 || v>=V || w<0) {

//             printf("Invalid edge or negative weight.\n"); return 1;

//         }

//         addEdge(u, v, w);

//     }

 

//     printf("Enter source vertex: ");

//     scanf("%d", &src);

//     if (src<0 || src>=V) return 1;

 

//     dist[src] = 0; push(0, src);

//     while (hs) {

//         Node cur = popMin();

//         int x = cur.v;

//         if (done[x] || cur.d != dist[x]) continue;

//         done[x] = 1;

 

//         for (int e=head[x]; e!=-1; e=adj[e].next) {

//             int y=adj[e].to, wt=adj[e].w;

//             if (!done[y] && dist[x] <= LLONG_MAX - wt &&

//                 dist[x] + wt < dist[y]) {

//                 dist[y] = dist[x] + wt;

//                 push(dist[y], y);

//             }

//         }

//     }

//     printf("\nShortest distances from source %d:\n", src);

//     for (int i=0; i<V; i++) {

//         if (dist[i] == INF) printf("%d : INF (unreachable)\n", i);

//         else printf("%d : %lld\n", i, dist[i]);

//     }

//     return 0;

// }

// #include <stdio.h>

// #include <limits.h>

// #define MAXV 1000

// #define MAXE 20000

// #define INF LLONG_MAX

 

// typedef struct { int u, v, w; } Edge;

 

// int main(void) {

//     int V, E, src, negativeCycle = 0;

//     Edge edges[MAXE];

//     long long dist[MAXV];

 

//     printf("Enter number of vertices and edges: ");

//     if (scanf("%d%d", &V, &E) != 2 ||

//         V < 1 || V > MAXV || E < 0 || E > MAXE) return 1;

 

//     printf("Enter directed edges: source destination weight\n");

//     for (int i=0; i<E; i++) {

//         scanf("%d%d%d", &edges[i].u, &edges[i].v, &edges[i].w);

//         if (edges[i].u<0 || edges[i].u>=V ||

//             edges[i].v<0 || edges[i].v>=V) {

//             printf("Invalid vertex.\n"); return 1;

//         }

//     }

 

//     printf("Enter source vertex: ");

//     scanf("%d", &src);

//     if (src<0 || src>=V) return 1;

 

//     for (int i=0; i<V; i++) dist[i] = INF;

//     dist[src] = 0;

 

//     for (int i=1; i<=V-1; i++) {

//         int changed = 0;

//         for (int j=0; j<E; j++) {

//             int u=edges[j].u, v=edges[j].v, w=edges[j].w;

//             if (dist[u] != INF &&

//                 ((w >= 0 && dist[u] <= LLONG_MAX-w) ||

//                  (w < 0 && dist[u] >= LLONG_MIN-w)) &&

//                 dist[u] + w < dist[v]) {

//                 dist[v] = dist[u] + w;

//                 changed = 1;

//             }

//         }

//         if (!changed) break;

//     }

 

//     for (int j=0; j<E; j++) {

//         int u=edges[j].u, v=edges[j].v, w=edges[j].w;

//         if (dist[u] != INF &&

//             ((w >= 0 && dist[u] <= LLONG_MAX-w) ||

//              (w < 0 && dist[u] >= LLONG_MIN-w)) &&

//             dist[u] + w < dist[v]) {

//             negativeCycle = 1;

//             break;

//         }

//     }

 

//     if (negativeCycle) {

//         printf("Reachable negative-weight cycle detected.\n");

//     } else {

//         printf("\nShortest distances from source %d:\n", src);

//         for (int i=0; i<V; i++) {

//             if (dist[i] == INF) printf("%d : INF (unreachable)\n", i);

//             else printf("%d : %lld\n", i, dist[i]);

//         }

//     }

//     return 0;

// }

#include <stdio.h>

 

#define MAXV 1000

#define MAXE 20000

 

int adj[MAXV][MAXV];

int visited[MAXV];

int queue[MAXV];

 

void bfs(int V, int source) {

    int front = 0, rear = 0;

    for (int i=0; i<V; i++) visited[i] = 0;

 

    visited[source] = 1;

    queue[rear++] = source;

 

    printf("BFS reachable order: ");

    while (front < rear) {

        int u = queue[front++];

        printf("%d ", u);

 

        for (int v=0; v<V; v++) {

            if (adj[u][v] && !visited[v]) {

                visited[v] = 1;

                queue[rear++] = v;

            }

        }

    }

    printf("\nReachable count = %d\n", rear);

}

 

void dfs(int u, int V) {

    visited[u] = 1;

    for (int v=0; v<V; v++)

        if (adj[u][v] && !visited[v])

            dfs(v, V);

}

 

int main(void) {

    int V, E, u, v, source;

 

    printf("Enter number of vertices and edges: ");

    if (scanf("%d%d", &V, &E) != 2 ||

        V<1 || V>MAXV || E<0 || E>MAXE) return 1;

 

    for (int i=0; i<V; i++)

        for (int j=0; j<V; j++)

            adj[i][j] = 0;

 

    printf("Enter directed edges for BFS (u v):\n");

    for (int i=0; i<E; i++) {

        scanf("%d%d", &u, &v);

        if (u<0 || u>=V || v<0 || v>=V) return 1;

        adj[u][v] = 1;

    }

 

    printf("Enter BFS source: ");

    scanf("%d", &source);

    if (source<0 || source>=V) return 1;

    bfs(V, source);

 

    /* For DFS connectivity, enter an undirected graph separately. */

    printf("\nEnter number of edges for undirected DFS graph: ");

    scanf("%d", &E);

    for (int i=0; i<V; i++)

        for (int j=0; j<V; j++)

            adj[i][j] = 0;

 

    printf("Enter undirected edges (u v):\n");

    for (int i=0; i<E; i++) {

        scanf("%d%d", &u, &v);

        if (u<0 || u>=V || v<0 || v>=V) return 1;

        adj[u][v] = adj[v][u] = 1;

    }

 
    for (int i=0; i<V; i++) visited[i] = 0;

    dfs(0, V);

    int connected = 1;

    for (int i=0; i<V; i++)

        if (!visited[i]) connected = 0;

 
    if (connected) printf("Undirected graph is connected.\n");

    else printf("Undirected graph is disconnected.\n");

    return 0;

}