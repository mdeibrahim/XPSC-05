#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if (a == b)
    {
        cout << a + b << endl;
        return 0;
    }
    else if (abs(a - b) == 1)
    {
        cout << a + b << endl;
        return 0;
    }
    else
    {
        cout << (max(a, b) * 2) - 1 << endl;
        return 0;
    }
}
