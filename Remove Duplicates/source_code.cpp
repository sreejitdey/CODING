#include <bits/stdc++.h>

using namespace std;

string removeDuplicates(string str, int n)
{
    string finalstr = "";
    int visited[n];
    for(int i = 0; i < n; i++)
        visited[i] = 0;
    for(int i = 0; i < n; i++)
    {
        if(visited[i] != 1)
        {
            finalstr += str[i];
            for(int j = i + 1; j < n; j++)
            {
                if(visited[j] != 1)
                {
                    if(str[i] == str[j])
                        visited[j] = 1;
                }
            }
        }
    }
    return finalstr;
}

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    cout << removeDuplicates(str, n);
    return 0;
}
