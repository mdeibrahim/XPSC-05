#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        string s;
        map<int, int> st1, st0, mp;

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                st0[vec[i]] = 0;
            else
                st1[vec[i]] = 0;
        }

        // for (auto x : st1)
        //     cout << x.first << " ";
        int i = 1;
        for (auto x : st0)
        {
            mp[x.first] = i;
            i++;
        }
        for (auto x : st1)
        {
            mp[x.first] = i;
            i++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << mp[vec[i]] << " ";
        }
        cout << '\n';
    }
}
