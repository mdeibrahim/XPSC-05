
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
        int n, q;
        cin >> n >> q;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            v.push_back(m);
        }
        map<int, int> smp;
        map<int, int> emp;

        for (int i = n - 1; i >= 0; i--)
        {
            smp[v[i]] = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            emp[v[i]] = i + 1;
        }

        while (q--)
        {
            int s, e;
            cin >> s >> e;

            if (smp[s] == 0 || smp[e] == 0)
                cout << "NO" << endl;
            else
            {
                if (smp[s] > emp[e])
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }
            // for(auto m:smp)cout<<m.first<<" "<<m.second<<endl;
        }
    }
}
