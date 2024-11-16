#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '|')
        {
            cout << cnt << " ";
            cnt = 0;
        }
        else
            cnt++;
    }
}
