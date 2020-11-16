#include <bits/stdc++.h>

using namespace std;

int fun(int a[], int n, int m)
{
    int res = 101;
    sort(a, a + n);
    for(int i = 0; i <= n - m; i++)
        res = min(res, a[i + m - 1] - a[i]);
    return res;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << fun(a, n, m);
    return 0;
}
