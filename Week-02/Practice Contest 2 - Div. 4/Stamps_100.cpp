#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n - 2;)
        {
            if (s[i] == '1')
            {
                for (int j = i + 1; j < n; j++)
                    s[j] = '0';
                break;
            }
            else
                i++;
        }
        cout << s << endl;
    }

    return 0;
}