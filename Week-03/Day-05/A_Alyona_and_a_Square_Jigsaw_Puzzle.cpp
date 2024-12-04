#include <bits/stdc++.h>
using namespace std;

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int current_sum = 0;
        int lsum = 1;
        int lnumber = 1;
        int days = 0;

        for (int i = 0; i < n; i++)
        {
            current_sum += a[i];

            while (current_sum >= lsum)
            {
                if (current_sum == lsum)
                {
                    days++;
                }
                lnumber++;
                lsum += 8 * (lnumber - 1);
            }
        }
        cout << days << '\n';
    }
}
