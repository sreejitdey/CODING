#include <bits/stdc++.h>

using namespace std;

int checkAnagram(string s1, string s2)
{
    int n1 = s1.size();
    int n2 = s2.size();
    if(n1 != n2)
        return 0;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for(int i = 0; i < n1; i++)
    {
        if(s1[i] != s2[i])
            return 0;
    }
    return 1;
}

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int temp = checkAnagram(s1, s2);
    if(temp == 1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
