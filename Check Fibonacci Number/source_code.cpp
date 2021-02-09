#include <bits/stdc++.h>

using namespace std;

bool isPerfectSquare(int n)
{
    int s = sqrt(n);
    return(s * s == n);
}

int main()
{
    int n;
    cin >> n;
    if(isPerfectSquare(5 * n * n + 4))
        cout << "IsFibo";
    else if(isPerfectSquare(5 * n * n - 4))
        cout << "IsFibo";
    else
        cout << "IsNotFibo";
    return 0;
}
