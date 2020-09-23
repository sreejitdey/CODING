#include <stdio.h>
#include <math.h>

int main()
{
    int i, num, rem, binary, decimal = 0;
    scanf("%d", &binary);
    num = binary;
    i = 0;
    while(num != 0)
    {
        rem = num % 10;
        decimal += rem * pow(2, i);
        num /= 10;
        i++;
    }
    printf("%d", decimal);
    return 0;
}
