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
        int n, n1;
        cin >> n >> n1;
        string s, s1;
        cin >> s;
        set<int> st;

        for (int i = 0; i < n1; i++)
        {
            int x;cin>>x;
            x--;
            st.insert(x);
        }

        cin >> s1;
        sort(s1.begin(),s1.end());
        auto it=st.begin();
        
        for (int i = 0; i < st.size(); i++)
        {
            s[*it] = s1[i];
            it++;
        }
         cout << s << endl;
    }
}
