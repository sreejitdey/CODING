#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, pair = 0, count;
    cin >> n;
    int colors[n], visited[n];
    for(int i = 0; i < n; i++)
        cin >> colors[i];
    for(int i = 0; i < n; i++)
        visited[i] = 0;
    for(int i = 0; i < n; i++)
    {
        if(visited[i] != 1)
        {
            visited[i] = 1;
            count = 1;
            for(int j = i + 1; j < n; j++)
            {
                if(colors[i] == colors[j])
                {
                    count++;
                    visited[j] = 1;
                }
            }
            pair += count / 2;
        }
    }
    cout << pair << endl;
    return 0;
}
