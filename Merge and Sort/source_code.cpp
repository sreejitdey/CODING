#include <bits/stdc++.h>

using namespace std;

vector <int> sortArrays(int n1, vector <int> A1, int n2, vector <int> A2)
{
    vector <int> sortedArray;
    int i = 0, j = 0;
    while(i < n1 && j < n2)
    {
        if(A1[i] < A2[j])
            sortedArray.push_back(A1[i++]);
        else
            sortedArray.push_back(A2[j++]);
    }
    while(i < n1)
        sortedArray.push_back(A1[i++]);
    while(j < n2)
        sortedArray.push_back(A2[j++]);
    return sortedArray;
}

int main()
{
    int n1, n2;
    cin >> n1;
    vector <int> A1(n1);
    for(int i = 0; i < n1; i++)
        cin >> A1[i];
    cin >> n2;
    vector <int> A2(n2);
    for(int i = 0; i < n2; i++)
        cin >> A2[i];
    vector <int> ptr = sortArrays(n1, A1, n2, A2);
    int n = n1 + n2;
    for(int i = 0; i < n; i++)
        cout << ptr[i] << " ";
    cout << endl;
    return 0;
}
