#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t, n;
    cin >> t >> n;
    vector<pair<string, string>> v;
    map<string, string> mp;
    for (int i = 0; i < t; i++)
    {
        string s, ss;
        cin >> s >> ss;
        mp[ss] = s;
    }

    for (int i = 0; i < n; i++)
    {
        string s, ss;
        cin >> s >> ss;
        string sss(ss.begin(), ss.end() - 1);
        cout << s << " " << ss << " #" << mp[sss] << endl;
    }
}
