#include <stdio.h>

int main()
{
    int r1, r2, r3, n;
    scanf("%d %d %d", &r1, &r2, &r3);
    scanf("%d", &n);
    if(r1 < r3)
    {
        int r = (n * r1) / r3;
        printf("%d", r);
    }
    else
    {
        int r = (n * r3) / r1;
        printf("%d", r);
    }
    return 0;
}
