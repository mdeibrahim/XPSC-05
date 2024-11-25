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
        string s, ss;
        cin >> s >> ss;

        int cnts = s.size() - 2, cntss = ss.size() - 2;
        char sch = s.back(), ssch = ss.back();

        if (sch != ssch)
        {
            if ((sch == 'S') || (sch == 'M' && ssch == 'L') || (sch == 'S' && ssch == 'M'))
                cout << "<" << endl;
            else
                cout << ">" << endl;
        }
        else
        {
            if (sch == 'S')
                cout << (cnts < cntss ? ">" : (cnts == cntss ? "=" : "<")) << endl;
            else if (sch == 'L')
                cout << (cnts > cntss ? ">" : (cnts == cntss ? "=" : "<")) << endl;
            else
                cout << "=" << endl;
        }
    }

    return 0;
}
