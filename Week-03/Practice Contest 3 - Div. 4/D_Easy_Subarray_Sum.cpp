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
        vector<int> arr(n);
        int cnts = 0, cnte = 0, cnt = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] <= 0)
                cnte++;
            else
                break;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <=0 )
                cnts++;
            else
                break;
        }
        for (int i = cnts; i < arr.size() - cnte; i++)
        {
            if (arr[i] < 0)
                cnt++;
        }
        cout << cnt << endl;
        // cout<<cnt<<" "<<cnts<<" "<<cnte<<endl;
        // cout << ((arr.size() == cnt) ? 0 : cnt) << endl;
    }
}
