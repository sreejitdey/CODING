#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, temp, rank;
    cin >> n;
    int scores[n];
    cin >> scores[0];
    int index = 1;
    for(int i = 1; i < n; i++)
    {
        cin >> temp;
        if(temp != scores[index - 1])
        {
            scores[index] = temp;
            index++;
        }
    }
    cin >> m;
    int alice[m];
    for(int i = 0; i < m; i++)
        cin >> alice[i];
    int j = index - 1;
    for(int i = 0; i < m; i++)
    {
        while(j >= 0 && alice[i] > scores[j])
            j--;
        if(j == -1)
            rank = 1;
        else if(alice[i] == scores[j])
            rank = j + 1;
        else if(alice[i] < scores[j])
            rank = j + 2;
        cout << rank << endl;
    }
    return 0;
}
