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
        int nosong, needsongs, language;
        cin >> nosong >> needsongs >> language;
        vector<int> slength;

        while (nosong--)
        {
            int x, y;
            cin >> x >> y;
            if (y == language)
                slength.push_back(x);
        }
        sort(slength.rbegin(), slength.rend());
        // needsongs = min(needsongs, (int)slength.size());
        // cout<<slength.size()<<" "<<needsongs<<endl;

        if (slength.size() < needsongs)
        {
            cout << -1 << endl;
        }
        else
        {
            ll sum = accumulate(slength.begin(), slength.begin() + needsongs, 0LL);
            cout << sum << endl;
        }
    }

    return 0;
}
