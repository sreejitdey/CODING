#include <stdio.h>

int main()
{
    int n, amount, h, th, fh, t, i, j, k, l, sum1, sum2, sum3, sum4, max = 0;
    scanf("%d %d %d %d %d %d", &n, &amount, &h, &th, &fh, &t);
    for(i = 0; i <= h; i++)
    {
        sum1 = i * 100;
        if(sum1 == amount && i <= n && i > max)
            max = i;
        if(sum1 < amount)
        {
            for(j = 0; j <= th; j++)
            {
                sum2 = sum1 + j * 200;
                if(sum2 == amount && (i + j) <= n && (i + j) > max)
                    max = i + j;
                if(sum2 < amount)
                {
                    for(k = 0; k <= fh; k++)
                    {
                        sum3 = sum2 + k * 500;
                        if(sum3 == amount && (i + j + k) <= n && (i + j + k) > max)
                            max = i + j + k;
                        if(sum3 < amount)
                        {
                            for(l = 0; l <= t; l++)
                            {
                                sum4 = sum3 + l * 1000;
                                if(sum4 == amount && (i + j + k + l) <= n && (i + j + k + l) > max)
                                    max = i + j + k + l;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d", max);
    return 0;
}
