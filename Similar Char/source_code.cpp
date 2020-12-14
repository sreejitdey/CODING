#include <iostream>

using namespace std;

int main()
{
    int n, q, p;
    string s;
    cin >> n;
    cin >> s;
    cin >> q;
    for(int t = 0; t < q; t++)
    {
        cin >> p;
        int count = 0;
        for(int i = 0; i < p - 1; i++)
        {
            if(s[i] == s[p - 1])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
