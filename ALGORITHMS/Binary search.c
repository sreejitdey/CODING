#include<stdio.h>
#include<stdlib.h>

void BinarySearch(int A[], int n, int x)
{
    int low, mid, high, temp = 0;
    low = 0;
    high = n;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(x < A[mid])
            high = mid - 1;
        else if(x > A[mid])
            low = mid + 1;
        else
        {
            temp = 1;
            break;
        }
    }
    if(temp == 0)
        printf("\nElement not found!\n");
    else
        printf("\nElement found at %d no. position!\n", (mid + 1));
}

int main()
{
    int n, i, ele, x;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements in ascending order: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter the element you want to search: ");
    scanf("%d", &ele);
    BinarySearch(arr, n, ele);
    return 0;
}
