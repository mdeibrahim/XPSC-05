#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int cnt[26]{};
    for (auto c : s)
    {
        cnt[c - 'a']++;
    }
    int ans = 0;
    for (auto x : cnt)
    {
        if (x % 2 == 1)
            ans++;
    }

    if (k >= ans - 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}