#include <stdio.h>
#include <stdlib.h>

void MergeSort(int arr[], int low, int mid, int high)
{
    int l, i, m, temp[100], k;
    l = low;
    i = low;
    m = mid + 1;
    while((l <= mid) && (m <= high))
    {
        if(arr[l] <= arr[m])
        {
            temp[i] = arr[l];
            l++;
        }
        else
        {
            temp[i] = arr[m];
            m++;
        }
        i++;
    }
    if(l > mid)
    {
        for(k = m; k <= high; k++)
        {
            temp[i] = arr[k];
            i++;
        }
    }
    else
    {
        for(k = l; k <= mid; k++)
        {
            temp[i] = arr[k];
            i++;
        }
    }
    for(k = low; k <= high; k++)
        arr[k] = temp[k];
}

void Partition(int arr[], int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high)/2;
        Partition(arr, low, mid);
        Partition(arr, mid+1, high);
        MergeSort(arr, low, mid, high);
    }
}

int main()
{
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements separated by space: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    Partition(arr, 0, n-1);
    printf("\nThe sorted array is: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
