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
        string s;
        cin >> s;
        while (true)
        {
            bool flag = true;
            for (int i = 1; i < s.size(); i++)
            {
                if (s[i - 1] < s[i] && s[i] > '1' && s[i - 1] < s[i] - 1)
                {
                    s[i]--;
                    swap(s[i - 1], s[i]);
                    flag = false;
                }
            }
            if (flag)
                break;
        }
        cout << s << endl;
    }
}
