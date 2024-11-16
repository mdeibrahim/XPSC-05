#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int t;
    cin >> t;
    map<int,int>mp;
    while (t!=0)
    {
       int n=t%10;
       mp[n]++;
       t/=10;
    }
    if(mp[1]==1&&mp[2]==2&&mp[3]==3)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}
