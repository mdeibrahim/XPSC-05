#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    string s,ss;
    int cnt=0;
    cin>>s>>ss;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=ss[i])
        cnt++;
    }
    cout<<cnt<<endl;
}
