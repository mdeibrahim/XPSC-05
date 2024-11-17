#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    char ch;
    cin >> n >> ch;

    string s;
    cin >> s;

    int ans = 0, x = 0;
    for (int t = 0; t < 2; t++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'g')
            {
                x = 0;
            }
            else
            {
                x++;
            }
            if (s[i] == ch && t)
            { // cout<<"t->"<<t<<endl;
                ans = max(ans, x);
            }
        }
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