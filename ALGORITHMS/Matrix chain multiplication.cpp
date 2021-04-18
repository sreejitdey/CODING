#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int MatrixChain(int p[], int n)
{
    int i, l, j, k, q;
    int m[n][n];
    for(i = 1; i <= n; i++)
        m[i][i] = 0;
    for(l = 2; l <= n; l++)
    {
        for(i = 1; i <= (n - l + 1); i++)
        {
            j = i + l - 1;
            m[i][j] = INT_MAX;
            for(k = i; k < j; k++)
            {
                q = m[i][k] + m[k+1][j] + (p[i-1] * p[k] * p[j]);
                if(q < m[i][j])
                    m[i][j] = q;
            }
        }
    }
    return(m[1][n-1]);
}

int main()
{
    int i, n, m, size;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the P values: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //int arr[] = {30, 35, 15, 5, 10, 20, 25};

    size = sizeof(arr) / sizeof(arr[0]);
    m =  MatrixChain(arr, size);
    printf("\nThe minimum number of multiplication is: %d\n", m);
    return 0;
}
