#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    int c[m];
    for(int i = 0; i < m; i++)
        cin >> c[i];
    long int arr[n + 1];
    for(int i = 0; i <= n; i++)
        arr[i] = 0;
    arr[0] = 1;
    for(int i = 0; i < m; i++)
    {
        for(int j = c[i]; j <= n; j++)
            arr[j] += arr[j - c[i]];
    }
    cout << arr[n] << endl;
    return 0;
}
