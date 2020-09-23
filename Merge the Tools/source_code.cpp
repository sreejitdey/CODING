#include <iostream>
#include <string>

using namespace std;

void mergeTheTools(string s, int n, int k)
{
    int r = 0, d = k, visited[n];
    while(d <= n)
    {
        string u = "";
        for(int i = r; i < d; i++)
            visited[i] = 0;
        for(int i = r; i < d; i++)
        {
            if(visited[i] != 1)
            {
                visited[i] = 1;
                u += s[i];
                for(int j = i + 1; j < d; j++)
                {
                    if(s[i] == s[j])
                        visited[j] = 1;
                }
            }
        }
        cout << u << endl;
        r += k;
        d += k;
    }
}

int main()
{
    int n, k;
    string s;
    cin >> s;
    cin >> k;
    n = s.size();
    mergeTheTools(s, n, k);
    return 0;
}
