#include <bits/stdc++.h>

using namespace std;

bool checkPrime(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, count = 0, temp = 0, sum = 5, k = 5;
    cin >> n;
    while(sum <= n)
    {
        if(checkPrime(sum) == 1 && temp != sum)
            count++;
        temp = sum;
        if(checkPrime(k) == 1)
            sum += k;
        k++;
    }
    cout << count;
    return 0;
}
