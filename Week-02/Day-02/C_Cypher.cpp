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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            int nn;
            cin >> nn;
            int U = 0, D = 0;
            string s;
            cin >> s;
            for (int i = 0; i < nn; i++)
            {
                if (s[i] == 'D')
                    D++;
                else
                    U--;
            }
            arr[i] += (U + D);
            if (arr[i] > 9)
                arr[i] %= 10;
            else if (arr[i] < 0)
                arr[i] += 10;
        }
        for (auto x : arr)
            cout << x << " ";
        cout << endl;
    }
}
