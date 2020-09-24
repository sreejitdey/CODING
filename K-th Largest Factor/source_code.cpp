#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n;
    cin >> k;
    for(int i = n; i >= 1; i--)
    {
        if(n % i == 0)
            count++;
        if(count == k)
        {
            cout << i;
            break;
        }
    }
    if(count < k)
        cout << "1";
    return 0;
}
