#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, no = 0;
        cin >> n;

        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++)
        {
            if ((s1[i] == 'R') != (s2[i] == 'R'))
                no++;
        }

        cout << ((no > 0) ? "NO" : "YES") << endl;
    }
    return 0;
}