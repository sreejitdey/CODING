#include <bits/stdc++.h>

using namespace std;

string MirrorSentence(string S)
{
    string temp = "", result = "";
    int n = S.size();
    for(int i = n - 1; i >= 0; i--)
    {
        if(S[i] == ' ')
        {
            reverse(temp.begin(), temp.end());
            result = result + temp + ' ';
            temp = "";
        }
        else
            temp = temp + S[i];
    }
    if(temp != "")
    {
        reverse(temp.begin(), temp.end());
        result = result + temp;
    }
    return result;
}

int main()
{
    string S;
    getline(cin, S);
    cout << MirrorSentence(S);
    return 0;
}
