#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int A[], int low, int high)
{
    int pivot, i, j;
    pivot = A[low];
    i = low;
    j = high;
    while(i < j)
    {
        while(A[i] <= pivot)
            i++;
        while(A[j] > pivot)
            j--;
        if(i < j)
            swap(&A[i], &A[j]);
    }
    swap(&A[low], &A[j]);
    return(j);
}

void QuickSort(int A[], int low, int high)
{
    if(low < high)
    {
        int j = Partition(A, low, high+1);
        QuickSort(A, low, j-1);
        QuickSort(A, j+1, high);
    }
}

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    QuickSort(arr, 0, n-1);
    printf("\nThe sorted array is: ");
    for(i = 0; i < n; i++)
        printf(" %d", arr[i]);
    printf("\n");
    return 0;
}
