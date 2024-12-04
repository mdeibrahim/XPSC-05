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
        vector<int> vc(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
        }
        sort(vc.rbegin(), vc.rend());
        ll sum = vc[0], cnt = 0;
        //cout<<sum<<endl;
        for (int i = 1; i < n; i++)
        {
            if (sum == k)
                break;
            if (sum + vc[i] > k)
            {
                cnt = k - sum;
                break;
            }
            else
                sum += vc[i];
        }
        if(cnt==0&&sum<k)
        cnt=k-sum;
        cout<<cnt<<"\n";
    }
}
