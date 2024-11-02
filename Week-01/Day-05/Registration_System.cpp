#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;
    map<string, int> mp;
    while (test--)
    {
        string s;
        cin >> s;
        if (mp.count(s) == 0)
            cout << "OK" << endl;
        else
            cout << s << mp[s] << endl;
        mp[s]++;
    }

    // for (auto it : mp)
    //     cout << it.first << " " << it.second << endl;
    return 0;
}