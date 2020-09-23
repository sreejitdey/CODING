#include <bits/stdc++.h>

using namespace std;

int bitScore(int num)
{
    int n = num, max = 0, min = 9;
    while(n != 0)
    {
        int rem = n % 10;
        if(rem > max)
            max = rem;
        if(rem < min)
            min = rem;
        n = n / 10;
    }
    int score = (max * 11 + min * 7) % 100;
    return score;
}

int calculatePairs(int scores[], int n)
{
    int visited[10], pairs = 0;
	for(int i = 0; i <= 9; i++)
        visited[i] = 0;
    for(int i = 1; i <= n; i += 2)
    {
        for(int j = i + 2; j <= n; j += 2)
        {
            if(scores[i] == scores[j])
            {
                if(visited[scores[i]] < 2)
                    visited[scores[i]]++;
            }
        }
	}
	for(int i = 2; i <= n; i += 2)
    {
        for(int j = i + 2; j <= n; j += 2)
        {
            if(scores[i] == scores[j])
            {
                if(visited[scores[i]] < 2)
                    visited[scores[i]]++;
            }
        }
	}
	for(int i = 0; i <= 9; i++)
        pairs += visited[i];
	return pairs;
}

int main()
{
	int n, number;
    cin >> n;
    int scores[n];
    for(int i = 1; i <= n; i++)
    {
        cin >> number;
        scores[i] = bitScore(number) / 10;
    }
	int pairs = calculatePairs(scores, n);
	cout << pairs;
	return 0;
}
