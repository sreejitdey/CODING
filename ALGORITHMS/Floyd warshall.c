#include <stdio.h>
#include <stdlib.h>

#define infinity 9999

void display(int matrix[50][50], int n)
{
    int i, j;
    printf("\nMATRIX:\n\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("\t%d", matrix[i][j]);
        printf("\n\n");
    }
    printf("\n");
}

int minimum(int a, int b)
{
    if(a <= b)
        return a;
    else
        return b;
}

int main()
{
    int i, j, k, n;
    int adj[50][50], path[50][50];
    printf("Enter the number of vertex: ");
    scanf("%d", &n);
    printf("\nEnter the weighted matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);
    }
    display(adj, n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(adj[i][j] == infinity)
                path[i][j] = 7;
            else
                path[i][j] = adj[i][j];
        }
    }
    for(k = 0; k < n; k++)
    {
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
                path[i][j] = minimum(path[i][j], (path[i][k] + path[k][j]));
        }
    }
    display(path, n);
    return 0;
}
