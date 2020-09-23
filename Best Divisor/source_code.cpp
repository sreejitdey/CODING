#include <bits/stdc++.h>

using namespace std;

int digitSum(int num)
{
    int n = num;
    int sum = 0;
    while(n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    if(n == 1)
        cout << n << endl;
    else
    {
        int sum, max = 1, best_divisor;
        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
            {
                sum = digitSum(i);
                if(sum > max)
                {
                    max = sum;
                    best_divisor = i;
                }
            }
        }
        cout << best_divisor << endl;
    }
    return 0;
}
