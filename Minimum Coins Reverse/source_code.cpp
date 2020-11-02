#include <bits/stdc++.h>

using namespace std;

int flip(vector <int> &A, int next)
{
    int count = 0;
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] != next)
            count++;
        if(next == 0)
            next = 1;
        else
            next = 0;
    }
    return count;
}

int solution(vector <int> &A)
{
    return min(flip(A, 0), flip(A, 1));
}

int main()
{
    int input;
    vector <int> A;
    while(cin >> input)
    {
        A.push_back(input);
        if(getchar() == '\n')
            break;
    }
    cout << solution(A);
    return 0;
}
