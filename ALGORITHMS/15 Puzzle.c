#include <stdio.h>
#include <stdlib.h>

int table[4][4];
int i, j, temp;

void MoveUp()
{
    for(i = 3; i >= 0; i--)
    {
        for(j = 3; j >= 0; j--)
        {
            if((table[i][j] == 0) && (i != 3))
            {
                temp = table[i+1][j];
                table[i+1][j] = 0;
                table[i][j] = temp;
            }
        }
    }
}

void MoveDown()
{
    for(i = 0; i <= 3; i++)
    {
        for(j = 0; j <= 3; j++)
        {
            if((table[i][j] == 0) && (i != 0))
            {
                temp = table[i-1][j];
                table[i-1][j] = 0;
                table[i][j] = temp;
            }
        }
    }
}

void MoveLeft()
{
    for(i = 3; i >= 0; i--)
    {
        for(j = 3; j >= 0; j--)
        {
            if((table[i][j] == 0) && (j != 3))
            {
                temp = table[i][j+1];
                table[i][j+1] = 0;
                table[i][j] = temp;
            }
        }
    }
}

void MoveRight()
{
    for(i = 0; i <= 3; i++)
    {
        for(j = 0; j <= 3; j++)
        {
            if((table[i][j] == 0) && (j != 0))
            {
                temp = table[i][j-1];
                table[i][j-1] = 0;
                table[i][j] = temp;
            }
        }
    }
}

void DisplayTable()
{
    printf("\n\n");
    for(i = 0; i <= 3; i++)
    {
        for(j = 0; j <= 3; j++)
        {
            if(table[i][j] == 0)
                printf("\t");
            else
                printf("%d\t", table[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n");
}

int CheckForFinish()
{
    int count = 1;
    for(i = 0; i <= 3; i++)
    {
        for(j = 0; j <= 3; j++)
        {
            if(table[i][j] == count)
                count++;
        }
    }
    if(count == 16)
        return 1;
    else
        return 0;
}

void MoveNumbers()
{
    int s = 0;
    char key;
    printf("Move up : 'u'");
    printf("\nMove down : 'd'");
    printf("\nMove left : 'l'");
    printf("\nMove right : 'r'");
    printf("\nEXIT : 'e'\n\n");
    while(0 < 1)
    {
        scanf("%c", &key);
        switch(key)
        {
            case 'l' :  MoveLeft();
                        DisplayTable();
                        break;
            case 'r':   MoveRight();
                        DisplayTable();
                        break;
            case 'u':   MoveUp();
                        DisplayTable();
                        break;
            case 'd':   MoveDown();
                        DisplayTable();
                        break;
            case 'c':   s = CheckForFinish();
                        if(s == 1)
                        {
                            printf("\nGame completed successfully!!\n");
                            exit(0);
                        }
                        else
                        {
                            printf("\nContinue with move!!\n");
                            MoveNumbers();
                        }
                        break;
            case 'e':   exit(0);
        }
    }
}

void OwnSetup()
{
    for(i = 0; i <= 3; i++)
    {
        for(j = 0; j <= 3; j++)
            scanf("%d", &table[i][j]);
    }
    DisplayTable();
    MoveNumbers();
}

int main()
{
    printf("Enter puzzle table:\n");
    OwnSetup();
    return 0;
}
