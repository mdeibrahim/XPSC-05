#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x*y<=(z*24*60))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
