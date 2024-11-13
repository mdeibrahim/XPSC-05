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
        ll x, y, z;
        cin >> x >> y >> z;

        if (x == 1)
            cout << y << endl;
        else if (2 * y >= z)
        {
            cout << (x * y) << endl;
        }
        else
        {
            if (x % 2 == 0)
            {
                cout << ((x / 2) * z) << endl;
            }
            else
                cout << (((x / 2) * z) + y) << endl;
        }
    }
}
