#include <stdio.h>

int main()
{
    int d, s, t = 0, p = 0, x, y;
    scanf("%d %d", &d, &s);
    for(int j = 1; j <= s; j++)
    {
        scanf("%d", &x);
        t += x;
    }
    for(int j = 1; j <= s; j++)
    {
        scanf("%d", &y);
        p += y;
    }
    float rate = (float)p / (float)t;
    for(int i = 2; i <= d; i++)
    {
        t = 0;
        p = 0;
        for(int j = 1; j <= s; j++)
        {
            scanf("%d", &x);
            t += x;
        }
        for(int j = 1; j <= s; j++)
        {
            scanf("%d", &y);
            p += y;
        }
        float r = (float)p / (float)t;
        if(r > rate)
            printf("Increasing\n");
        else if(r < rate)
            printf("Decreasing\n");
        else
            printf("Same\n");
        rate = r;
    }
    return 0;
}
