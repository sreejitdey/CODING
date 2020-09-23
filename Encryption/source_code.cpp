#include <bits/stdc++.h>

using namespace std;

int main()
{
    string text;
    cin >> text;
    int L, row, col;
    L = text.length();
    row = int(sqrt(L));
    if(row * row < L)
        col = row + 1;
    else
        col = row;
    int visited[L];
    for(int i = 0; i < L; i++)
        visited[i] = 0;
    for(int i = 0; i < L; i++)
    {
        if(visited[i] != 1)
        {
            for(int j = i; j < L; j += col)
            {
                visited[j] = 1;
                cout << text[j];
            }
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
