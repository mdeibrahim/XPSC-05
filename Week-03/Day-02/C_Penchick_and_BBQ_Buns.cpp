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

        if (n % 2 == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 0)
                    cout << i - 1 << " ";
                else
                    cout << i << " ";
            }
        }
        else
        {
            if (n < 26)
            {
                cout << -1;
            }
            else
            {
                for (int i = 1; i <= 10; i++)
                {
                    if (i == 1 || i == 10)
                    {
                        cout << 1 << " ";
                        continue;
                    }

                    if (i % 2 == 0)
                        cout << i << " ";
                    else
                        cout << i - 1 << " ";
                }
                for (int i = 11; i <= 22; i++)
                {
                    if (i % 2 == 0)
                        cout << i-1 << " ";
                    else
                        cout << i << " ";
                }
                for (int i = 23; i <= n; i++)
                {
                    if (i == 23 || i == 27)
                    {
                        cout << 3 << " ";
                        continue;
                    }
                    if (i == 26)
                    {
                        cout << 1 << " ";
                        continue;
                    }
                    if (i % 2 == 0)
                        cout << i << " ";
                    else
                        cout << i - 1 << " ";
                }
            }
        }

        cout << '\n';
    }
}
