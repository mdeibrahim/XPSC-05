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
        vector<char> v;
        int b = 0, B = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
                B++;
            else if (s[i] == 'b')
                b++;
            else if (s[i] >= 'A' && s[i] <= 'Z' && B)
                B--;
            else if (s[i] >= 'a' && s[i] <= 'z' && b)
                b--;
            else
                v.push_back(s[i]);
        }
        for (int i = v.size() - 1; i >= 0; i--)
            cout << v[i];
        cout << endl;
    }
}