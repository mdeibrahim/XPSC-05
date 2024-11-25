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
        vector<int> a(n), b(n), c;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // mp[a[i]]=i;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            // mpb[b[i]] = i;
        }

        for (int i = 0; i < n; i++)
        {
            mp[a[i]] = max(a[i], b[i]);
            c.push_back(mp[a[i]]);
        }

        sort(a.begin(), a.end());
        int target = mp[a[n - 1]];
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (mp[a[i]] > target)
            {
                flag = true;
                break;
            }
            else
                continue;
        }

        if (!flag && target > mp[a[n - 2]])
            cout << "Yes" << endl;
        else if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
