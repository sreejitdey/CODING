#include <bits/stdc++.h>

using namespace std;

int isSubsetSum(int arr[], int n, int sum)
{
    int dp[n][sum + 1];
    for(int i = 0; i < n; i++)
        dp[i][0] = 1;
    for(int j = 1; j <= sum; j++)
        dp[0][j] = 0;
    dp[0][arr[0]] = 1;
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <= sum; j++)
        {
            if(j < arr[i])
                dp[i][j] = dp[i - 1][j];
            else
            {
                if(dp[i - 1][j] == 1)
                    dp[i][j] = 1;
                else
                    dp[i][j] = dp[i - 1][j - arr[i]];
            }
        }
    }
    return dp[n - 1][sum];
}

int main()
{
    int n, sum;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> sum;
    int temp = isSubsetSum(arr, n, sum);
    if(temp == 1)
        cout << "True";
    else
        cout << "False";
    return 0;
}
