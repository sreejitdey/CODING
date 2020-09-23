#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, r, min, max, count;
    cin >> s;
    cin >> r;
    int size[s];
    for(int i = 0; i < s; i++)
        cin >> size[i];
    sort(size, size + s);
    for(int t = 1; t <= r; t++)
    {
        cin >> min;
        cin >> max;
        count = 0;
        for(int i = 0; i < s; i++)
        {
            if(size[i] > max)
                break;
            if(size[i] >= min && size[i] <= max)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
