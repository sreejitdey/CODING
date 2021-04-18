#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, ne = 1, min = 999, mincost = 0, a, b, u, v;
    printf("Enter the numbers of nodes: ");
    scanf("%d", &n);
    int cost[n][n];
    int visited[n];
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
        visited[i] = 0;
    visited[1] = 1;
    while(ne < n)
    {
        min = 999;
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= n; j++)
            {
                if(cost[i][j] < min)
                {
                    if(visited[i] != 0)
                    {
                        min = cost[i][j];
                        a = i;
                        u = i;
                        b = j;
                        v = j;
                    }
                }
            }
        }
        if((visited[u] == 0) || (visited[v] == 0))
        {
            printf("\nEdge %d: (%d, %d)\tCost: %d", ne++, a, b, min);
            mincost += min;
            visited[b] = 1;
        }
        cost[a][b] = 999;
        cost[b][a] = 999;
    }
    printf("\n\nMinimum cost: %d\n\n", mincost);
    return 0;
}
