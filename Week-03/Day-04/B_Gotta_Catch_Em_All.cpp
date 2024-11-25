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
        ll n, normal, master;
        cin >> n >> normal >> master;
        ll div=master/normal,cnt=0,sum=0;
        vector<int> vc(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
            if(vc[i]<=div)
            {
                sum+=vc[i];
                cnt++;
            }
        }
        //sort(vc.begin(),vc.end());
        sum=(sum*normal)+((n-cnt)*master);
        cout<<sum<<endl;
    }
}
