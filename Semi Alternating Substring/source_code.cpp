#include <bits/stdc++.h>

using namespace std;

int solution(string &S)
{
    int n = S.size();
    if(n < 3)
        return n;
    int count = 1, result = 1;
    for(int i = 1; i < n - 1; i++)
    {
        if(S[i - 1] == S[i] && S[i + 1] == S[i])
        {
            if(count + 1 > result)
                result = count + 1;
            count = 1;
        }
        else
            count++;
    }
    if(count + 1 > result)
        result = count + 1;
    return result;
}

int main()
{
    string S;
    cin >> S;
    cout << solution(S);
    return 0;
}
