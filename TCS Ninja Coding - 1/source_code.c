#include <stdio.h>

int fibonacci(int n)
{
    int t1 = 0, t2 = 1, i, next;
    for(i = 1; i <= n; i++)
    {
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return(t1);
}

int prime(int n)
{
    int size = n * 10;
    int i, j, count = 0, flag;
    for(i = 2; i <= size; i++)
    {
        flag = 0;
        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            count++;
            if(count == n)
                return(i);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("%d", prime(n/2));
    else
        printf("%d", fibonacci(n/2 + 1));
    return 0;
}
