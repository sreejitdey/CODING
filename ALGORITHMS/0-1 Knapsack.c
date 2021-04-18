#include <stdio.h>
#include <stdlib.h>

int Max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int Knapsack(int n, int p[], int wt[], int capacity)
{
    int i, w;
    int v[100][100];
    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= capacity; w++)
        {
            if((i == 0) || (w == 0))
                v[i][w] = 0;
            else if(wt[i-1] > w)
                v[i][w] = v[i-1][w];
            else
                v[i][w] = Max(v[i-1][w], (p[i-1] + v[i-1][w-wt[i-1]]));
        }
    }
    return(v[n][capacity]);
}

int main()
{
    int i, n, capacity, tp;
    printf("Enter total number of objects: ");
    scanf("%d", &n);
    int wt[n], p[n];
    printf("Enter weights one by one: ");
    for(i = 0; i < n; i++)
        scanf("%d", &wt[i]);
    printf("Enter profits one by one: ");
    for(i = 0; i < n; i++)
        scanf("%d", &p[i]);
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);
    tp = Knapsack(n, p, wt, capacity);
    printf("\nMaximum profit: %d\n", tp);
    return 0;
}
