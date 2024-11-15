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
        bool flag = true;
        cin >> vec[0];
        for (int i = 1; i < n; i++)
        {
            cin >> vec[i];
            if (vec[i] < vec[i - 1])
            {
                if (abs(vec[i] - vec[i - 1]) == 1)
                {
                    swap(vec[i], vec[i - 1]);
                }
                else
                    flag = false;
            }
        }
        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
