#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k;
    vector <int> b(arr, arr + n);
    sort(b.begin(), b.end(), greater<int>());
    for(int i = 0; i < n; i++)
    {
        if(binary_search(b.begin(), b.begin() + k, arr[i], greater<int>()))
            cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
