#include <stdio.h>

int main()
{
    int n, r1, r2, a, b, i;
    scanf("%d", &n);
    scanf("%d", &r1);
    scanf("%d", &r2);
    a = 1;
    b = 1;
    for(i = 1; i <= n/2; i++)
    {
        printf("%d ", a);
        a = a * r1;
        printf("%d ", b);
        b = b * r2;
    }
    printf("\n");
    return 0;
}
