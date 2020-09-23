#include <stdio.h>
#include <math.h>

int main()
{
    int i, t, max, category;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d", &max);
        category = log(max)/log(2) + 1;
        printf("%d\n", category);
    }
	return 0;
}
