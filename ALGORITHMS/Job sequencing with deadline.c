#include <stdio.h>
#include <stdlib.h>

void Job(int d[], int p[], int n)
{
    int i, j, t = 0, m, k;
    printf("\nSolution\tSequence\tProfit\n");
    for(i = 1; i <= n; i++)
    {
        printf("%d\t\t%d\t\t%d", i, d[i], p[i]);
        if(t < p[i])
            t = p[i];
        printf("\n");
    }
    for(i = 1; i <= n; i++)
    {
        for(j = i+1; j <= n; j++)
        {
            if(d[i] != d[j])
                m = p[i] + p[j];
            if(d[i] > d[j])
                k = n + 1;
            k++;
            if(m > t)
                t = m;
        }
    }
    printf("\nMaximum profit: %d\n", t);
}

int main()
{
    int i, n;
    printf("Enter the number of jobs: ");
    scanf("%d", &n);
    int d[n], p[n];
    printf("Enter the deadlines one by one: ");
    for(i = 1; i <= n; i++)
        scanf("%d", &d[i]);
    printf("Enter the profits one by one: ");
    for(i = 1; i <= n; i++)
        scanf("%d", &p[i]);
    Job(d, p, n);
    return 0;
}
