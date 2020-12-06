#include <bits/stdc++.h>

using namespace std;

string stringChallenge(string str)
{
    string temp = "";
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == ' ')
            temp = temp + ' ';
        else
            temp = temp + to_string((int)str[i]);
    }
    return temp;
}

int main()
{
    string str;
    getline(cin, str);
    cout << stringChallenge(str);
    return 0;
}
