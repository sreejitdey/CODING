#include <bits/stdc++.h>

using namespace std;

void SortByPosition(int arr[], int size, int num)
{
    int n = size - num;
    int b[num], c[n], j;
    for(int i = 0; i < num; i++)
        b[i] = arr[i];
    sort(b, b + num);
    j = 0;
    for(int i = num; i < size; i++)
    {
        c[j] = arr[i];
        j++;
    }
    sort(c, c + n);
    j = 0;
    for(int i = 0; i < num; i++)
    {
        arr[j] = b[i];
        j++;
    }
    for(int i = n - 1; i >= 0; i--)
    {
        arr[j] = c[i];
        j++;
    }
    return;
}

int main()
{
    int size, num;
    cin >> size;
    cin >> num;
    int arr[size];
    for(int i = 0; i < size; i++)
        cin >> arr[i];
    SortByPosition(arr, size, num);
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
