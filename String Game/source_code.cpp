#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    int k;
    cin >> s;
    cin >> t;
    cin >> k;
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        if(t[i] > s[i])
        {
            int d = t[i] - s[i];
            if(d < 1 || d > k)
            {
                cout << "No";
                return 0;
            }
        }
        if(t[i] < s[i])
        {
            int d = 122 - s[i] + t[i] - 96;
            if(d < 1 || d > k)
            {
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    return 0;
}
