#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int A[], int n)
{
    int i, j, item;
    for(j = 2; j <= n; j++)
    {
        item = A[j];
        i = j - 1;
        while((i >= 1) && (item < A[i]))
        {
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = item;
    }
}

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements: ");
    for(i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    InsertionSort(arr, n);
    printf("\nThe sorted array is: ");
    for(i = 1; i <= n; i++)
        printf(" %d", arr[i]);
    printf("\n");
    return 0;
}
