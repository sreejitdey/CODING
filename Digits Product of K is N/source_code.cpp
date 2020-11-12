#include <iostream>

using namespace std;

int main()
{
    int n, i, j = 0, res[50];
    cin >> n;
    if(n < 10)
    {
        cout << n + 10;
        return 0;
    }
    for(i = 9; i > 1; i--)
    {
        while(n % i == 0)
        {
            n = n / i;
            res[j] = i;
            j++;
        }
    }
    if(n > 10)
    {
        cout << "Not Possible";
        return 0;
    }
    for (i = j - 1; i >= 0; i--)
        cout << res[i];
    return 0;
}
