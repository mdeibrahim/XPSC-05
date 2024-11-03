#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    map<int, int> mp;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int cnt = 0;

    for (auto [a, c] : mp)
    {
        cnt = max(cnt, c);
    }
    cout << cnt << endl;
}
