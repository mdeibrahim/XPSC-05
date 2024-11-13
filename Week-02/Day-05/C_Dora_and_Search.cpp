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
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            st.insert(vec[i]);
        }

        int l = 0;
        int r = n - 1;

        int currentl = l;
        int currentr = r;

        while (l <= r)
        {
            auto it = st.begin();
            auto ite = st.rbegin();
            int maxi = *it;  // 6
            int mini = *ite; // 1
            if (maxi == vec[l] || mini == vec[l])
            {
                st.erase(vec[l]);
                l++;
            }
            if (maxi == vec[r] || mini == vec[r])
            {
                st.erase(vec[r]);
                r--;
            }
            if (currentl == l && currentr == r)
                break;
            else
            {
                currentl = l;
                currentr = r;
            }
        }
        // for(auto x:st)cout<<x<<" ";
        if (currentl >= currentr)
            cout << -1 << endl;
        else
            cout << currentl + 1 << " " << currentr + 1 << endl;
    }
}
