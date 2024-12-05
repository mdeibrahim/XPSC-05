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
        int n, k;
        cin >> n >> k;
        ll sum = 0;
        int cnt=0;
        vector<string> vc(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (sum + vc[i].size() > k)
                break;
            sum += vc[i].size();
            cnt++;
        }
        cout<<cnt<<endl;
    }
}
