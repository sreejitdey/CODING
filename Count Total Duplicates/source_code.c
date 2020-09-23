#include <stdio.h>

int main()
{
    int i, j, n, temp, count = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int visited[n];
    for(i = 0; i < n; i++)
        visited[i] = 0;
    for(i = 0; i < n; i++)
    {
        if(visited[i] != 1)
        {
            temp = 1;
            visited[i] = 1;
            for(j = i+1; j < n; j++)
            {
                if(arr[i] == arr[j])
                {
                    visited[j] = 1;
                    temp++;
                }
            }
            if(temp > 1)
                count++;
        }
    }
    printf("%d", count);
    return 0;
}
