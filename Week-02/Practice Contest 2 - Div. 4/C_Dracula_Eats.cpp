#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;cin>>n;
        if(n<2){
            cout<<0<<endl;
        }
        else
        {
            int cnt=1;
        n-=2;
        cnt+=n/7;
        cout<<cnt<<endl;
        }
        
    }
}
