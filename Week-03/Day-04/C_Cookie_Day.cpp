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
        int jars, child;
        cin >> jars >> child;
        vector<int> vc;
        for (int i = 0; i < jars; i++)
        {
            int x;
            cin >> x;
            if (x >= child)
            {
                vc.push_back(x % child);
            }
        }
        sort(vc.begin(), vc.end());
        if (vc.empty())
            cout << -1 << endl;
        else
            cout << vc[0]<<endl;;
    }
}
