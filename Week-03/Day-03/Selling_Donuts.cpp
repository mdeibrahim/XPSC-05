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
        int dotype, customer;
        cin >> dotype >> customer;
        map<int, int> dt, cuwant;
        for (int i = 1; i <= dotype; i++)
        {
            int x;
            cin >> x;
            dt[i] = x;
        }
        for (int i = 0; i < customer; i++)
        {
            int x;
            cin >> x;
            cuwant[x]++;
        }
        int ans=0;
        for(auto x:cuwant)
        {
            if(dt[x.first]<x.second)
            {
                ans+=x.second-dt[x.first];
            }
        }
        cout<<ans<<endl;
    }
}
