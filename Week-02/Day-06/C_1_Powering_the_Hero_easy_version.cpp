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
        ll n;
        cin >> n;
        vector<ll> vec(n);
        multiset<ll> st;
        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if (vec[i] == 0)
            {
                if (st.size() != 0)
                {
                    auto it = --st.end();
                    sum += *it;
                    st.erase(it);
                }
            }
            else
                st.insert(vec[i]);
        }
        cout << sum << '\n';
    }
}
