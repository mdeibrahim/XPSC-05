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
        int n;
        cin >> n;
        string s, s1;
        cin >> s >> s1;
        int cnt = 0;
        int cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R' && s1[i] == 'S')
                cnt++;
            else if (s[i] == 'S' && s1[i] == 'P')
                cnt++;
            else if (s[i] == 'P' && s1[i] == 'R')
                cnt++;

            if (s1[i] == 'R' && s[i] == 'S')
                cnt1++;
            else if (s1[i] == 'S' && s[i] == 'P')
                cnt1++;
            else if (s1[i] == 'P' && s[i] == 'R')
                cnt1++;
        }
        cout << ((cnt > cnt1) ? 0 : (cnt == cnt1) ? 1
                                                  : (((cnt1 - cnt) / 2) + 1))
             << endl;
        // if(cnt>cnt1)cout<<0<<endl;
        // else if(cnt==cnt1)cout<<1<<endl;
        // else cout<<(((cnt1-cnt)/2)+1)<<endl;
    }
}
