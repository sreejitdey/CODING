#include <bits/stdc++.h>

using namespace std;

string encoding(string str, int n)
{
    string letter = "";
    string digit = "";
    string encodedStr = "";
    for(int i = 0; i <= n; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            letter += str[i];
            if(digit != "")
            {
                sort(digit.begin(), digit.end());
                encodedStr += digit;
                digit = "";
            }
        }
        if(str[i] >= 48 && str[i] <= 57)
        {
            digit += str[i];
            if(letter != "")
            {
                sort(letter.begin(), letter.end());
                encodedStr += letter;
                letter = "";
            }
        }
    }
    if(letter != "")
    {
        sort(letter.begin(), letter.end());
        encodedStr += letter;
        letter = "";
    }
    if(digit != "")
    {
        sort(digit.begin(), digit.end());
        encodedStr += digit;
        digit = "";
    }
    return encodedStr;
}

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    string encodedStr = encoding(str, n);
    cout << encodedStr;
    return 0;
}
