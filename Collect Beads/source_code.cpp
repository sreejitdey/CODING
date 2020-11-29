#include <bits/stdc++.h>

using namespace std;

int rotateEasy(string S)
{
    vector <string> dict;
    for(int i = 0; i < S.size(); i++)
    {
        string str = S.substr(i, S.size()) + S.substr(0, i);
        dict.push_back(str);
    }
    int count = dict.size();
    vector <string> :: iterator itr1;
    vector <string> :: iterator itr2;
    for(itr1 = dict.begin(); itr1 != dict.end(); itr1++)
    {
        string rev = *itr1;
        reverse(rev.begin(), rev.end());
        itr2 = find(dict.begin(), dict.end(), rev);
        if(itr2 != dict.end())
            continue;
        else
            count++;
    }
    return count;
}

int main()
{
    string S;
    cin >> S;
    cout << rotateEasy(S);
    return 0;
}
