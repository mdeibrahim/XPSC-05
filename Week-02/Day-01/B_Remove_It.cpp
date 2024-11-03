#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t, x;
    cin >> t >> x;
    vector<int> v;
    while (t--)
    {
        int p;
        cin >> p;
        if(p==x)continue;
        v.push_back(p);
    }
for(auto p:v)cout<<p<<" ";
}
