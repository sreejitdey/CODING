#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int c = 0; c < t; c++)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int sum = 0, temp = arr[0];
        for(int i = 1; i < n; i++)
        {
            temp += arr[i];
            sum += temp;
        }
        cout << sum << endl;
    }
    return 0;
}
