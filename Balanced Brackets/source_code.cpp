#include <bits/stdc++.h>

using namespace std;

int isBalanced(string s, int n)
{
    stack <char> st;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else if(s[i] == ')')
        {
            if(st.empty() || st.top() != '(')
                return 0;
            st.pop();
        }
        else if(s[i] == '}')
        {
            if(st.empty() || st.top() != '{')
                return 0;
            st.pop();
        }
        else if(s[i] == ']')
        {
            if(st.empty() || st.top() != '[')
                return 0;
            st.pop();
        }
    }
    if(st.empty())
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    for(int t = 0; t < n; t++)
    {
        string s;
        cin >> s;
        int temp = isBalanced(s, s.length());
        if(temp == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
