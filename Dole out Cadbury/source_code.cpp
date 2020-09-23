#include <bits/stdc++.h>

using namespace std;

int countSeperate(int a, int b)
{
    int count = 0;
    while(a != b)
    {
        if(a > b)
        {
            a -= b;
            count++;
        }
        else if(b > a)
        {
            b -= a;
            count++;
        }
        else
            count++;
    }
    return(count + 1);
}

int main()
{
    int p, q, r, s, total = 0;
    cin >> p;
    cin >> q;
    cin >> r;
    cin >> s;
    for(int a = p; a <= q; a++)
    {
        for(int b = r; b <= s; b++)
            total += countSeperate(a, b);
    }
    cout << total;
    return 0;
}
