#include <stdio.h>

int main()
{
    int i, num, rem, binary = 0, decimal;
    scanf("%d", &decimal);
    num = decimal;
    i = 1;
    while(num != 0)
    {
        rem = num % 2;
        binary += rem * i;
        num /= 2;
        i *= 10;
    }
    printf("%d", binary);
    return 0;
}
