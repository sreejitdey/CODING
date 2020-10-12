#include <bits/stdc++.h>

using namespace std;

long XOR(const long n)
{
    if(n % 4 == 0)
        return n;
    else if(n % 4 == 1)
        return 1;
    else if(n % 4 == 2)
        return n + 1;
    else
        return 0;
}

int main()
{
    long q, l, r;
    cin >> q;
    for(long t = 1; t <= q; t++)
    {
        cin >> l;
        cin >> r;
        long sum = 0;
        for(long i = l; i <= r; i++)
            sum += XOR(i);
        cout << sum << endl;
    }
    return 0;
}
