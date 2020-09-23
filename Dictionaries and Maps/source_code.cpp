#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string name;
    long int num;
    map <string, long int> phoneBook;
    for(int i = 0; i < n; i++)
    {
        cin >> name;
        cin >> num;
        phoneBook.insert({name, num});
    }
    string query;
    while(cin >> query)
    {
        if(phoneBook.find(query) != phoneBook.end())
            cout << query << "=" << phoneBook.find(query) -> second << endl;
        else
            cout << "Not found" << endl;
    }
    return 0;
}
