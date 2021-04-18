#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int KMP(char substr[], char str[])
{
    int N, M, i, j;
    N = strlen(str);
    M = strlen(substr);
    int *d = (int *)malloc(M * sizeof(int));
    d[0] = 0;
    for(i = 0, j = 0; i < M; i++)
    {
        while((j > 0) && (substr[j] != substr[i]))
            j = d[j-1];
        if(substr[j] == substr[i])
        {
            j++;
            d[i] = j;
        }
    }
    for(i = 0, j = 0; i < N; i++)
    {
        while((j > 0) && (substr[j] != str[i]))
            j = d[j-1];
        if(substr[j] == str[i])
            j++;
        if(j == M)
        {
            free(d);
            return(i - j + 1);
        }
    }
    free(d);
    return(-1);
}

int main()
{
    char str[100], substr[100];
    int position;
    printf("Enter string: ");
    gets(str);
    printf("Enter substring: ");
    gets(substr);
    position = KMP(substr, str);
    if(position != -1)
        printf("\nPosition starts at: %d\n", (position + 1));
    else
        printf("\nMatch not found!\n");
    return 0;
}
