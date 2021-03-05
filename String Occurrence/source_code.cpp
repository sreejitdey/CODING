#include <iostream>

using namespace std;

int countOccure(string parent, string sub)
{
    int parentLen = parent.size();
    int subLen = sub.size();
    int count = 0, i, j;
    for(i = 0; i <= parentLen - subLen; i++)
    {
        for(j = 0; j < subLen; j++)
        {
            if(parent[i + j] != sub[j])
                break;
        }
        if(j == subLen)
        {
            count++;
            j = 0;
        }
    }
    return count;
}

int main()
{
    string parent, sub;
    getline(cin, parent);
    getline(cin, sub);
    cout << countOccure(parent, sub);
    return 0;
}
