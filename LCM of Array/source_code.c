#include <stdio.h>

int GCD(int a, int b)
{
    if(b == 0)
        return a;
    else
        return GCD(b, a % b);
}

int findLCM(int arr[], int n)
{
    int lcm = arr[0];
    int i;
    for(i = 1; i < n; i++)
        lcm = (lcm * arr[i]) / GCD(lcm, arr[i]);
    return lcm;
}

int main()
{
    int arr[50];
    int i = 0, n = 0;
    while(1)
    {
        scanf("%d", &arr[i]);
        i++; n++;
        if(getchar() == '\n')
            break;
    }
    int lcm = findLCM(arr, n);
    printf("%d", lcm);
    return 0;
}
