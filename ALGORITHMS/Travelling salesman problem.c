#include <stdio.h>
#include <stdlib.h>

int a[50][50], visited[50];
int cost, n;

int least(int c)
{
    int i, k[50];
    int min = 999;
    int nc = 999;
    for(i = 0; i < n; i++)
    {
        if((a[c][i] !=0) && (visited[i] == 0))
        {
            if(a[c][i] < min)
            {
                min = a[i][0] + a[c][i];
                k[min] = a[c][i];
                nc = i;
            }
        }
    }
    if(min != 999)
        cost += k[min];
    return(nc);
}

void mincost(int city)
{
    int ncity;
    visited[city] = 1;
    printf("%d -> ", city+1);
    ncity = least(city);
    if(ncity == 999)
    {
        ncity = 0;
        printf("%d", ncity+1);
        cost += a[city][ncity];
        return;
    }
    mincost(ncity);
}

int main()
{
    int i, j;
    printf("Enter the number of cities: ");
    scanf("%d", &n);
    printf("Enter the cost matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    for(i = 0; i < n; i++)
        visited[i] = 0;
    printf("\nThe path is: ");
    mincost(0);
    printf("\n");
    printf("\nThe total cost is: %d\n", cost);
    return 0;
}
