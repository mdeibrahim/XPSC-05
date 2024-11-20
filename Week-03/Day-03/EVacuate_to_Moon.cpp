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
        ll cars, nout, hour;
        cin >> cars >> nout >> hour;
        vector<ll> carpaw(cars), outlat(nout);
        for (ll i = 0; i < cars; i++)
        {
            cin >> carpaw[i];
        }
        for (ll i = 0; i < nout; i++)
        {
            cin >> outlat[i];
            outlat[i] *= hour;
        }
        ll sum = 0;
        sort(carpaw.rbegin(), carpaw.rend());
        sort(outlat.rbegin(), outlat.rend());
        // for(auto x:outlat)cout<<x<<" ";
        for (ll i = 0; i < min(carpaw.size(), outlat.size()); i++)
        {
            sum += min(carpaw[i], outlat[i]);
        }
        cout << sum << '\n';
    }
}
