#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x, n, b, i;
    cin >> t;
    for(x = 1; x <= t; x++)
    {
        cin >> n;
        cin >> b;
        int arr[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        int sum = 0, max = 0;
        for(i = 0; i < n; i++)
        {
            sum += arr[i];
            if(sum <= b)
                max++;
            else
                break;
        }
        cout << "Case #" << x << ": " << max << endl;
    }
    return 0;
}
