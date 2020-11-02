#include <bits/stdc++.h>

using namespace std;

int solution(vector <int> &A)
{
    int n = A.size();
    int visited[n];
    for(int i = 0; i < n; i++)
        visited[i] = 0;
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        if(visited[i] != 1)
        {
            int count = 1;
            for(int j = i + 1; j < n; j++)
            {
                if(visited[j] != 1)
                {
                    if(A[i] == A[j])
                    {
                        count++;
                        visited[j] = 1;
                    }
                }
            }
            if(A[i] == count)
            {
                if(A[i] > max)
                    max = A[i];
            }
        }
    }
    return max;
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
