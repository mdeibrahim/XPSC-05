#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    map<string, string> mp;
    while (t--)
    {
        string s, ss;
        cin >> s >> ss;
        bool flag = true;
        for (auto &x : mp)
        {
            if (x.second == s)
            {
                x.second = ss;
                flag = false;
                break;
            }
        }
        if (flag)
            mp[s] = ss;
    }
    cout<<mp.size()<<endl;
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}
