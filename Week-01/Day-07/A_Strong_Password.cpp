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
        string s;
        cin >> s;
        bool flag = true;
        if (s.size() == 1)
        {
            char ss = s[s.size() - 1];
            if (ss == 'z')
                ss--;
            else
                ss++;
            s += ss;
            cout << s << endl;
            flag = false;
        }
        else
        {
            for (size_t i = 0; i < s.size() - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    char ss = s[i] ;
                    if (ss == 'z')
                        ss--;
                    else
                    ss++;
                        s.insert(s.begin() + i + 1, ss);
                    cout << s << endl;
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            char ss = s[s.size() - 1];
            if (ss == 'z')
                ss--;
            else
                ss++;
            s += ss;
            cout << s << endl;
        }
    }
}
