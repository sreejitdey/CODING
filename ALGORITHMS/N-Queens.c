#include <stdio.h>
#include <stdlib.h>

int Place(int x[], int n)
{
    int i;
    for(i = 1; i < n; i++)
    {
        if((x[i] == x[n]) || ((i - x[i]) == (n - x[n])) || ((i + x[i]) == (n + x[n])))
            return 0;
    }
    return 1;
}

void Print_Solution(int n, int x[])
{
    int i, j;
    char c[100][100];
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            c[i][j] = '*';
    }
    for(i = 1; i <= n; i++)
        c[i][x[i]] = 'Q';
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            printf("\t%c" , c[i][j]);
        printf("\n\n");
    }
}

void NQueens(int n)
{
    int k = 1, count = 0;
    int x[100];
    x[k] = 0;
    while(k != 0)
    {
        x[k] += 1;
        while((x[k] <= n) && (! Place(x, k)))
            x[k] += 1;
        if(x[k] <= n)
        {
            if(k == n)
            {
                count++;
                printf("\nCount: %d\n\n", count);
                Print_Solution(n, x);
            }
            else
            {
                k++;
                x[k] = 0;
            }
        }
        else
            k--;
    }
}

int main()
{
    int n;
    printf("Enter the number of queens: ");
    scanf("%d", &n);
    NQueens(n);
    return 0;
}
