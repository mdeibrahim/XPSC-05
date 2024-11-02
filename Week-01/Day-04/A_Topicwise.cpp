#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;

    vector<pair<int, int>> p;
    int s, e;
    ll tp1 = 0, tp2 = 0, tp3 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> s >> e;
        p.push_back({s, e});
        tp1 += (e - s);
    }

    if (n == 1)
    {
        cout << tp1 * p1 << endl;
        return 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int t = p[i + 1].first - p[i].second;

        if (t <= t1)
        {
            tp1 += t;
        }
        else
        {
            tp1 += t1;
            t -= t1;

            if (t <= t2)
            {
                tp2 += t;
            }
            else
            {
                tp2 += t2;
                t -= t2;
                tp3 += t;
            }
        }
    }
    cout << (tp1 * p1 + tp2 * p2 + tp3 * p3) << endl;
    return 0;
}
