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
        vector<int> vec(n);
        map<int, int> mp;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            mp[vec[i]]++;
        }
        for (auto x : mp)
        {
            st.insert(x.second);
        }
        int it = *st.rbegin();
        if (mp.size() == 1)
            cout << 0 << endl;
        else
            cout << n - it << endl;
    }
}
