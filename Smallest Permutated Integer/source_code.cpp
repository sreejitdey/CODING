#include <bits/stdc++.h>

using namespace std;

int main()
{
    int code;
    cin >> code;
    string str = to_string(code);
    sort(str.begin(), str.end());
    int i = 0;
    while(str[i] == '0')
        i++;
    swap(str[0], str[i]);
    int result = stoi(str);
    cout << result;
    return 0;
}
