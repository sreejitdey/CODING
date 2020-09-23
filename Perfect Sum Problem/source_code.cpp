#include <bits/stdc++.h>

using namespace std;

void SumOfSubsets(int arr[], int n, int num, int k)
{
    int subset[n];
    for(int i = 0; i < n; i++)
        subset[i] = -1;
    int sum = 0;
    int j = n - 1;
    while(num > 0)
    {
        if(num % 2 == 1)
            sum += arr[j];
        subset[j] = num % 2;
        num /= 2;
        j--;
    }
    if(sum == k)
    {
        for(int i = 0; i < n; i++)
        {
            if(subset[i] == 1)
                cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k;
    for(int num = 1; num <= pow(2, n); num++)
        SumOfSubsets(arr, n, num, k);
    return 0;
}
