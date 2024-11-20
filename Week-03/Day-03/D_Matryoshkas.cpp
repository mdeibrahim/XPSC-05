#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    int ans = 0;
    int last = -1;
    int c = 0;
    int x, y;
    for (auto p : cnt)
    {
        x = p.first;
        y = p.second;
        if (last + 1 != x)
            c = 0;
        ans += max(0, y - c);
        last = x, c = y;
    }

    cout << ans << "\n";
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
