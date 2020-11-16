#include <bits/stdc++.h>

using namespace std;

int fun(int arr[], int n)
{
    int max = 0;
    vector <int> visited(n, 0);
    for(int i = 0; i < n; i++)
    {
        if(visited[i] == 1)
            continue;
        int count = 1;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                visited[j] = 1;
                count++;
            }
        }
        if(count > max)
            max = count;
    }
    return n - max;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << fun(arr, n);
    return 0;
}
