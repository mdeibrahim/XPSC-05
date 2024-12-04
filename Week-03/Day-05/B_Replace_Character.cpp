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
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        vector<pair<char, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), [](const pair<char, int> &a, const pair<char, int> &b)
             { return a.second < b.second; });

        // for (auto x : vec)
        // {
        //     cout << x.first << " " << x.second << endl;
        // }

        if (mp.size() == 1)
            cout << s;
        else
        {
            char ch = vec[0].first;               //--
            char ch1 = vec[vec.size() - 1].first; //++
            for (int i = 0; i < n; i++)
            {
                if (s[i] == ch)
                {
                    s[i] = ch1;
                    break;
                }
            }
            cout<<s;
        }
        cout << '\n';
    }

    return 0;
}
