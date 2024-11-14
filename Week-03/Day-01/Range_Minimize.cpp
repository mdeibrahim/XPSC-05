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
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        if (n == 3)
            cout << 0 << endl;
        else
        {
            int op1 = vec[n - 1] - vec[2];
            int op2 = vec[n - 3] - vec[0];
            int op3 = vec[n - 2] - vec[1];
            cout << ((op1 < op2 && op1 < op3) ? op1 : ((op2 < op3) ? op2 : op3)) << endl;
        }
    }
}
