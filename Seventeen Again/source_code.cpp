#include <bits/stdc++.h>

using namespace std;

int loveSeventeen(string S)
{
    int i = 0;
    while(i < S.size() - 1 && S.size() != 0)
    {
        if((S[i] == '8' && S[i + 1] == '9') || (S[i] == '9' && S[i + 1] == '8'))
        {
            S.erase(i, 2);
            if(i != 0)
                i--;
        }
        else
            i++;
    }
    return S.size();
}

int main()
{
    string S;
    cin >> S;
    cout << loveSeventeen(S);
    return 0;
}
