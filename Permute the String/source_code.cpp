#include <bits/stdc++.h>

using namespace std;

void permutation(string str, int low, int high)
{
    if (low == high)
        cout << str << endl;
    else
    {
        for(int i = low; i <= high; i++)
        {
            swap(str[low], str[i]);
            permutation(str, low + 1, high);
            swap(str[low], str[i]);
        }
    }
}

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    permutation(str, 0, n - 1);
    return 0;
}
