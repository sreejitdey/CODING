#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int n, k, val;
    cin >> n;
    string str;
    cin >> str;
    cin >> k;
    for(int i = 0; i < n; i++)
    {
        if((int)str[i] >= 97 && (int)str[i] <= 122)
        {
            val = (int)str[i] + k;
            if(val > 122)
            {
                while(val < 97 || val > 122)
                    val = 96 + val - 122;
            }
            cout << (char)val;
        }
        else if((int)str[i] >= 65 && (int)str[i] <= 90)
        {
            val = (int)str[i] + k;
            if(val > 90)
            {
                while(val < 65 || val > 90)
                    val = 64 + val - 90;
            }
            cout << (char)val;
        }
        else
            cout << str[i];
    }
    cout << endl;
    return 0;
}
