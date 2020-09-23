#include <stdio.h>

float power(float n, float p)
{
    float i, result = 1;
    for(i = 1; i <= p; i++)
        result = result * n;
    return result;
}

float Root(float n, float p)
{
    float i, precision = 0.000001;
    for(i = 1; power(i, p) <= n; i++);
    for(i--; power(i, p) < n; i += precision);
    return i;
}

int main()
{
    float n, p;
    scanf("%f %f", &n, &p);
    printf("%f", Root(n, p));
    return 0;
}
