#include <bits/stdc++.h>

using namespace std;

int findMax(string s1, string s2)
{
    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == '3')
            s1[i] = '8';
    }
    for(int i = 0; i < s2.size(); i++)
    {
        if(s2[i] == '3')
            s2[i] = '8';
    }
    int max = stoi(s1) + stoi(s2);
    return max;
}

int findMin(string s1, string s2)
{
    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == '8')
            s1[i] = '3';
    }
    for(int i = 0; i < s2.size(); i++)
    {
        if(s2[i] == '8')
            s2[i] = '3';
    }
    int min = stoi(s1) + stoi(s2);
    return min;
}

int main()
{
    int m, n;
    cin >> m >> n;
    string s1 = to_string(m);
    string s2 = to_string(n);
    cout << findMin(s1, s2) << " " << findMax(s1, s2);
    return 0;
}
