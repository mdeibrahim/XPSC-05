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
        ll cntn = 0, cnt0 = 0, sum = 0;
        vector<ll> arrp, arrn;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            if (x < 0)
            {
                cntn++;
                arrn.push_back(x);
            }
            else
            {
                arrp.push_back(x);
            }
            if (x == 0)
                cnt0++;
            sum += abs(x);
        }

        sort(arrp.begin(), arrp.end());
        sort(arrn.begin(), arrn.end());
        // for(auto x:arrn)cout<<x<<" ";
        if (cntn % 2 == 0 || cnt0 > 0)
            cout << sum << endl;
        else
        {
            if (arrp.size() > 0)
            {
                if (abs(arrn[arrn.size() - 1]) > arrp[0])
                    cout << sum - 2 * arrp[0] << endl;
                else
                    cout << sum - 2 * abs(arrn[arrn.size() - 1]) << endl;
            }
            else
            {
                cout << sum - 2 * abs(arrn[arrn.size() - 1]) << endl;
            }
        }
        // cout<<endl;
    }
}
