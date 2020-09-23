#include <bits/stdc++.h>

using namespace std;

bool cmp(pair <string, int> &a, pair <string, int> &b)
{
    return(a.second > b.second);
}

void showRank(map <string, int> &team)
{
    vector <pair <string, int> > v;
    for(auto &it : team)
        v.push_back(it);
    sort(v.begin(), v.end(), cmp);
    for(auto &it : v)
        cout << endl << it.first;
}

int main()
{
    int n, m, s1, s2, temp = 1;
    cin >> n;
    map <string, int> team;
    string name, t1, t2;
    for(int i = 0; i < n; i++)
    {
        cin >> name;
        team.insert(pair <string, int> (name, 0));
    }
    cin >> m;
    for(int c = 1; c <= m; c++)
    {
        cin >> t1; cin >> t2; cin >> s1; cin >> s2;
        if(t1 == t2)
            temp = 0;
        team[t1] += s1;
        team[t2] += s2;
    }
    if(temp == 0)
        cout << endl << "Invalid input";
    else
        showRank(team);
    cout << endl;
    return 0;
}
