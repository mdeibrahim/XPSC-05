'not cpmpleted'

#include <bits/stdc++.h>
    using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    string s, ss, fs;
    cin >> s;
    fs = s;

    int t;
    cin >> t;
    ll n = fs.size();
    ll m = fs.size();
    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            char ch;
            if (fs[i] <= 90)
                ch = fs[i] + 32;
            else
                ch = fs[i] - 32;
            fs += ch;
        }
        n *= 2;
        if (fs.size() >= 500)
            break;
    }
    for (int i = 0; i < t; i++)
    {
        ll x;
        cin >> x;
        x--;
        while (x >= m)
        {
            x %= m;
            if (x >= m)
            {
                x = m - 1 - x;
            }
        }
        cout << fs[x] << " ";
    }
}
