#include <stdio.h>
#include <stdlib.h>

void ReHeapifyDown(int heap[], int start, int finish)
{
    int Lchild, Rchild, max, index, temp;
    Lchild = 2 * start;
    Rchild = Lchild + 1;
    if(Lchild <= finish)
    {
        max = heap[Lchild];
        index = Lchild;
        if(Rchild <= finish)
        {
            if(heap[Rchild] > max)
            {
                max = heap[Rchild];
                index = Rchild;
            }
        }
        if(heap[start] < heap[index])
        {
            temp = heap[start];
            heap[start] = heap[index];
            heap[index] = temp;
            ReHeapifyDown(heap, index, finish);
        }
    }
}

void Heapify(int heap[], int n)
{
    int i, index;
    index = n / 2;
    for(i = index; i >= 1; i--)
        ReHeapifyDown(heap, i, n);
}

void HeapSort(int heap[], int n)
{
    int i, temp;
    Heapify(heap, n);
    for(i = n; i >= 1; i--)
    {
        temp = heap[1];
        heap[1] = heap[i];
        heap[i] = temp;
        ReHeapifyDown(heap, 1, i-1);
    }
}

int main()
{
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements separated by space: ");
    for(i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    HeapSort(arr, n);
    printf("\nThe sorted array is: ");
    for(i = 1; i <= n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
