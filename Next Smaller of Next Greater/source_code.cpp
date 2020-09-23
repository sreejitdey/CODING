#include <iostream>
#include <stack>

using namespace std;

void NextGreater(int arr[], int n, int NG[])
{
    stack<int> S;
    for(int i = n-1; i >= 0; i--)
    {
        while(!S.empty() && arr[S.top()] <= arr[i])
            S.pop();
        if(S.empty())
            NG[i] = -1;
        else
            NG[i] = S.top();
        S.push(i);
    }
}

void NextSmaller(int arr[], int n, int NS[])
{
    stack<int> S;
    for(int i = n-1; i >= 0; i--)
    {
        while(!S.empty() && arr[S.top()] >= arr[i])
            S.pop();
        if(S.empty())
            NS[i] = -1;
        else
            NS[i] = S.top();
        S.push(i);
    }
}

void NextSmallerOfNextGreater(int arr[], int n)
{
    int NG[n], NS[n];
    NextGreater(arr, n, NG);
    NextSmaller(arr, n, NS);
    for(int i = 0; i < n; i++)
    {
        if(NG[i] != -1 && NS[NG[i]] != -1)
            cout << arr[NS[NG[i]]] << " ";
        else
            cout << "-1" << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    NextSmallerOfNextGreater(arr, n);
    return 0;
}
