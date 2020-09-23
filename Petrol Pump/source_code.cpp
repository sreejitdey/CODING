#include <bits/stdc++.h>

using namespace std;

int minTime(int arr[], int n, int sum)
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
    for(int j = sum; j >= 0; j--)
    {
        if(dp[n - 1][j] == 1)
            return j;
    }
  	return 0;
}

int main()
{
    int arr[50], input, sum = 0, n = 0;
    while(cin >> input)
    {
        arr[n++] = input;
        sum += input;
        if(getchar() == '\n')
            break;
    }
    int a = minTime(arr, n, sum/2);
    int b = abs(sum - a);
    if(a > b)
        cout << a << endl;
    else
        cout << b << endl;
    return 0;
}
