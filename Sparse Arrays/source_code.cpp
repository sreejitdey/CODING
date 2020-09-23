#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int occurrence(char str[][20], int n, char query[])
{
    int visited[n];
    int count = 0;
    for(int i = 0; i < n; i++)
        visited[i] = 0;
    for(int i = 0; i < n; i++)
    {
        if(strcmp(str[i], query) == 0)
        {
            visited[i] = 1;
            count++;
        }
    }
    return count;
}

int main()
{
    int n, q;
    cin >> n;
    char str[n][20];
    for(int i = 0; i < n; i++)
        cin >> str[i];
    cin >> q;
    char queries[q][20];
    for(int i = 0; i < q; i++)
    {
        cin >> queries[i];
        int count = occurrence(str, n, queries[i]);
        cout << count << endl;
    }
    return 0;
}
