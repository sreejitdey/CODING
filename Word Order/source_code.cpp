#include <iostream>
#include <string>

using namespace std;

int occurrence(string word[], int distinct[], int n)
{
    int i, j, visited[n], count = 0, temp;
    for(i = 0; i < n; i++)
        visited[i] = 0;
    for(i = 0; i < n; i++)
    {
        if(visited[i] != 1)
        {
            visited[i] = 1;
            temp = 1;
            for(j = i + 1; j < n; j++)
            {
                if(word[i] == word[j])
                {
                    visited[j] = 1;
                    temp++;
                }
            }
            distinct[count] = temp;
            count++;
        }
    }
    return count;
}

int main()
{
    int i, n;
    cin >> n;
    string word[n];
    for(i = 0; i < n; i++)
        cin >> word[i];
    int distinct[n];
    int count = occurrence(word, distinct, n);
    cout << count << endl;
    for(i = 0; i < count; i++)
        cout << distinct[i] << " ";
    cout << endl;
    return 0;
}
