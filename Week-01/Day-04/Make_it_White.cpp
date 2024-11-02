#include <bits/stdc++.h>
using namespace std;

int fastlast(string s)
{
    int first, last;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            first = i;
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
        {
            last = i + 1;
            break;
        }
    }
    return (last - first);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << fastlast(s) << endl;
    }
    return 0;
}