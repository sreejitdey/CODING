#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n, i, *arr;
    char ch;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("\nEnter the integers separated by space: ");
    for(i = 0; i < n; i++)
        scanf("%d%c", &arr[i], &ch);
    BubbleSort(arr, n);
    printf("\nThe sorted array is: ");
    for(i = 0; i < n; i++)
        printf(" %d", arr[i]);
    printf("\n");
    return 0;
}
