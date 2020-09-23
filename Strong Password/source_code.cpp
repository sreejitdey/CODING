#include <bits/stdc++.h>
#include <string>

using namespace std;

int isMatched(string str, int n)
{
    int count = 0;
    int visited[n];
    for(int i = 0; i < n; i++)
        visited[i] = 0;
    int temp = 0;
    for(int i = 0; i < n; i++)
    {
        if(visited[i] != 1)
        {
            if((int)str[i] >= 48 && (int)str[i] <= 57)
            {
                visited[i] = 1;
                count++;
                temp = 1;
            }
        }
        if(temp == 1)
            break;
    }
    temp = 0;
    for(int i = 0; i < n; i++)
    {
        if(visited[i] != 1)
        {
            if((int)str[i] >= 97 && (int)str[i] <= 122)
            {
                visited[i] = 1;
                count++;
                temp = 1;
            }
        }
        if(temp == 1)
            break;
    }
    temp = 0;
    for(int i = 0; i < n; i++)
    {
        if(visited[i] != 1)
        {
            if((int)str[i] >= 65 && (int)str[i] <= 90)
            {
                visited[i] = 1;
                count++;
                temp = 1;
            }
        }
        if(temp == 1)
            break;
    }
    temp = 0;
    for(int i = 0; i < n; i++)
    {
        if(visited[i] != 1)
        {
            int x = (int)str[i];
            if((x >= 33 && x <= 46 && x != 34 && x != 39) || x == 64 || x == 94)
            {
                visited[i] = 1;
                count++;
                temp = 1;
            }
        }
        if(temp == 1)
            break;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = isMatched(str, n);
    if(n < 6)
    {
        if(4 - count > 6 - n)
            cout << (4 - count) << endl;
        else
            cout << (6 - n) << endl;
    }
    else
    {
        int count = isMatched(str, n);
        cout << (4 - count) << endl;
    }
    return 0;
}
