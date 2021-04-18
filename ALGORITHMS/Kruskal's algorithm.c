#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, ne = 1, min = 999, mincost = 0, a, b, u, v;
    printf("Enter the numbers of vertex: ");
    scanf("%d", &n);
    int cost[n][n];
    int parent[n];
    printf("Enter the cost of the adjacency matrix:\n");
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }
    for(i = 1; i <= n; i++)
        parent[i] = 0;
    while(ne < n)
    {
        min = 999;
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= n; j++)
            {
                if(cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = i;
                    u = i;
                    b = j;
                    v = j;
                }
            }
        }
        while(parent[u] != 0)
            u = parent[u];
        while(parent[v] != 0)
            v = parent[v];
        if(u != v)
        {
            ne++;
            printf("\nEdge: (%d, %d)\tCost: %d", a, b, min);
            mincost += min;
            parent[v] = u;
        }
        cost[a][b] = 999;
        cost[b][a] = 999;
    }
    printf("\n\nMinimum cost: %d\n", mincost);
    return 0;
}
