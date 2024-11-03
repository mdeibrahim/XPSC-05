#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string s;
        cin >> s;
        set<char> st;
        for (auto x : s)
        {
            st.insert(x);
        }
        string dis(st.begin(), st.end());

        size_t size_dis = dis.size();
        char ch[size];

        for (size_t i = 0; i < size; i++)
        {

            size_t found = dis.find(s[i]);
            (found != string ::npos);
            // for(size_t j=0;j<size_dis;i++)
            ch[i]=dis[size_dis-1-found];
        }

        //cout << found << endl;
        for (auto x : ch)
            cout << x;
         cout << endl;
        //      << dis << endl;
    }
}
