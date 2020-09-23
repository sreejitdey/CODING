#include <stdio.h>

int main(int argc, char *a[])
{
	int n, i, temp, count = 0;
	scanf("%d", &n);
	int required[n], available[n];
	for(i = 0; i < n; i++)
		scanf("%d", &required[i]);
	for(i = 0; i < n; i++)
		scanf("%d", &available[i]);
	while(1)
	{
		temp = 0;
		for(i = 0; i < n; i++)
		{
			if(required[i] <= available[i])
            {
                available[i] -= required[i];
                temp++;
            }
			else
            {
                printf("%d", count);
                return 0;
            }
		}
		if(temp == n)
			count++;
	}
}
