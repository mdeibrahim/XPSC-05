#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(int n)
{
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

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
        vector<int> v;

        if (n <= 4)
        {
            cout << -1 << endl;
            continue;
        }

        int last = 0;
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " ";
            last = i;
        }
        int i = (n % 2 == 0) ? n : n - 1;
        //bool flag = true;

        for (; i > 0; i -= 2)
        {
            if (isPrime(i + last))
            {
                v.push_back(i);
                //flag = false;
                continue;
            }
            cout << i << " ";
        }

        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << '\n';
    }
}
