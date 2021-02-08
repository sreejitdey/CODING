#include <iostream>

using namespace std;

long long int power(int a, int b)
{
    if(b == 0)
        return 1 % 100000;
    else if(b % 2 == 0)
        return(power(a, b/2) * power(a, b/2)) % 100000;
    else
        return(a * power(a, b/2) * power(a, b/2)) % 100000;
}

int main()
{
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >>  n;
        cout << power(2, n) - 1 << endl;
    }
    return 0;
}
