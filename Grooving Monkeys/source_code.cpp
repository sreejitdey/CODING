#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for(int x = 0; x < t; x++)
    {
        cin >> n;
        int pattern[n], arr[n], b[n];
        for(int i = 1; i <= n; i++)
        {
            cin >> pattern[i];
            arr[i] = i;
        }
        int second = 0;
        while(1)
        {
            int temp = 0;
            second++;
            for(int i = 1; i <= n; i++)
                b[pattern[i]] = arr[i];
            for(int i = 1; i <= n; i++)
            {
                arr[i] = b[i];
                if(arr[i] == i)
                    temp++;
            }
            if(temp == n)
                break;
        }
        cout << second << endl;
    }
    return 0;
}
