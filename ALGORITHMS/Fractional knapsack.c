#include <stdio.h>
#include <stdlib.h>

void Knapsack(int n, int  weight[], int profit[], int capacity)
{
    int i, u;
    float tp = 0, x[n];
    u = capacity;
    for(i = 0; i < n; i++)
        x[i] = 0;
    for(i = 0; i < n; i++)
    {
        if(weight[i] > u)
            break;
        else
        {
            x[i] = 1.0;
            tp += profit[i];
            u -= weight[i];
        }
    }
    if(i < n)
        x[i] = (float)u / (float)weight[i];
    tp += (x[i] * profit[i]);
    printf("\nRatio array: ");
    for(i = 0; i < n; i++)
        printf("%0.3f ", x[i]);
    printf("\n\nMaximum profit: %0.3f\n", tp);
}

int main()
{
    int i, j, n, capacity;
    printf("Enter total number of objects: ");
    scanf("%d", &n);
    int weight[n], profit[n];
    float ratio[n], temp;
    printf("Enter weights one by one: ");
    for(i = 0; i < n; i++)
        scanf("%d", &weight[i]);
    printf("Enter profits one by one: ");
    for(i = 0; i < n; i++)
        scanf("%d", &profit[i]);
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);
    for(i = 0; i < n; i++)
        ratio[i] = (float)profit[i] / (float)weight[i];
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(ratio[i] < ratio[j])
            {
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;
                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;
                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;
            }
        }
    }
    Knapsack(n, weight, profit, capacity);
    return 0;
}
