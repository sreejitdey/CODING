#include <stdio.h>
#include <stdlib.h>

int cost[100][100], dist[100];

void Dijkstra(int n, int v)
{
    int i, w, u, min, count, flag[100];
    for(i = 1; i <= n; i++)
    {
        flag[i] = 0;
        dist[i] = cost[v][i];
    }
    count = 2;
    while(count <= n)
    {
        min = 99;
        for(w = 1; w <= n; w++)
        {
            if((dist[w] < min) && (! flag[w]))
            {
                min = dist[w];
                u = w;
            }
        }
        flag[u] = 1;
        count++;
        for(w = 1; w <= n; w++)
        {
            if(((dist[u] + cost[u][w]) < dist[w]) && (! flag[w]))
                dist[w] = dist[u] + cost[u][w];
        }
    }
}

int main()
{
    /*
    n = 5
    cost[100][100] =   {0, 2, 0, 0, 6
                        0, 0, 4, 0, 3
                        0, 0, 0, 2, 0
                        0, 0, 0, 0, 0
                        0, 0, 2, 1, 0}
    v = 1
    */

    int i, j, v, n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the cost matrix:\n");
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }
    printf("Enter the source vertex: ");
    scanf("%d", &v);
    Dijkstra(n, v);
    printf("\nThe shortest path is:\n\n");
    for(i = 1; i <= n; i++)
    {
        if(i != v)
            printf("%d -> %d : cost = %d\n", v, i, dist[i]);
    }
}
