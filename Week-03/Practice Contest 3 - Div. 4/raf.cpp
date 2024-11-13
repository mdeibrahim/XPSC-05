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
        int n, q;
        cin >> n >> q;
        vector<int> vec(n);
        vector<tuple<int, int, int>> tpl;
        int x = 0, y = 0, z = 0;
        tpl.push_back({x, y, z});
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if (vec[i] == 1)
                x++;
            if (vec[i] == 2)
                y++;
            if (vec[i] == 3)
                z++;
            tpl.push_back({x, y, z});
        }

        while (q--)
        {
            int findex, lindex;
            cin >> findex >> lindex;
            if ((lindex - findex + 1) % 2 == 1)
                cout << "No" << endl;
            else if (lindex - findex + 1 == 2)
            {
                if (vec[findex-1] != vec[lindex-1])
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
            else
            {
                tuple<int, int, int> temp1 = tpl[lindex];
                tuple<int, int, int> temp2 = tpl[findex - 1];

                int a = get<0>(temp1) - get<0>(temp2);
                int b = get<1>(temp1) - get<1>(temp2);
                int c = get<2>(temp1) - get<2>(temp2);
                //cout << a << " " << b << " " << c << endl;
                if (a == 0 || b == 0 || c == 0)
                {
                    cout << "No" << endl;
                }
                else
                {
                    int mini = (a < b && a < c) ? a : ((b < c) ? b : c);
                    a = (a % mini == 0) ? a / mini : a / mini + 1;
                    b = (b % mini == 0) ? b / mini : b / mini + 1;
                    c = (c % mini == 0) ? c / mini : c / mini + 1;
                    cout << ((a + b + c == 4) ? "Yes" : "No") << endl;
                }
            }
            //  for(auto [a,b,c]:tpl)cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
}
