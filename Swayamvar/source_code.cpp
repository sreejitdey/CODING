#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, pairs = 0;
    cin >> n;
    string bride, groom;
    cin >> bride;
    cin >> groom;
    for(int i = 0; i < n; i++)
    {
      	int p = 0;
        for(int q = 0; q < n - i; q++)
        {
            if(bride[i] == groom[i])
            {
                pairs++;
              	p = 1;
                break;
            }
            else
            {
                int temp = groom[i];
                for(int j = i; j < n; j++)
                    groom[j] = groom[j + 1];
                groom[n - 1] = temp;
            }
        }
        if(p == 0)
            break;
    }
    cout << (n - pairs);
	return 0;
}
