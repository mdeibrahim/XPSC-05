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
        map<int, int> mp;
        vector<int> vc;
        // vc.push_back(100005);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x] = i + 1;
        }
        for (auto x : mp)
            vc.push_back(x.second);
        sort(vc.begin(), vc.end());

        // for (auto x : vc)
        //     cout<<x<<" ";

        set<int> st;
        int cnt = 1;
        for (int i = 1; i < vc.size(); i++)
        {
            if (vc[i - 1] + 1 == vc[i])
                cnt++;
            else
            {
                cnt = 1;
            }
        }
        cout << n - cnt << endl;
    }
}
