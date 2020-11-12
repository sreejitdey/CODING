#include <bits/stdc++.h>

using namespace std;

bool isEqual(int arr[], int n)
{
    unordered_map <int, int> m;
    for(int i = 0; i < n; i++)
        m[arr[i]]++;
    if(m.size() == 1)
        return true;
    else
        return false;
}

int main()
{
    int n, first, second;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    if(n < 2)
    {
        cout << "Invalid Input";
        return 0;
    }
    if(isEqual(arr, n))
    {
        cout << "Equal";
        return 0;
    }
    first = second = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    cout << first << " " << second;
    return 0;
}
