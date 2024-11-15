#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    int n = t;
    stack<string> st;
    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        mp[x] = 1;
        st.push(x);
    }

    for (int i = 0; i < n; i++)
    {
        string ss=st.top() ; st.pop();
        if(mp[ss]==0)
        continue;
        for(int j=ss.size()-2;j<ss.size();j++)
        {
            cout<<ss[j];
        }
        mp[ss]=0;
       
    }
}
