#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int c = 0; c < t; c++)
    {
        int n, k;
        cin >> n >> k;
        vector <int> arr(n, -1);
        int temp = 0;
        for(int i = 0; i < n; i++)
        {
            if(i - k >= 0 && arr[i - k] == -1)
                arr[i - k] = i;
            else if(i + k < n && arr[i + k] == -1)
                arr[i + k] = i;
            else
                temp = 1;
        }
        if(temp == 1)
            cout << "-1" << endl;
        else
        {
            for(int i = 0; i < n; i++)
                cout << arr[i] + 1 << " ";
            cout << endl;
        }
    }
    return 0;
}
