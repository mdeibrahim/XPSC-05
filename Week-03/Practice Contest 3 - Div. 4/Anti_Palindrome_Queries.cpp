"not solved"

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
            else if (vec[i] == 2)
                y++;
            else if (vec[i] == 3)
                z++;
            tpl.push_back({x, y, z});
        }

        while (q--)
        {
            int findex, lindex;
            cin >> findex >> lindex;
            findex--;
            lindex--;

            int length = lindex - findex + 1;
            if (length % 2 == 1)
            {
                cout << "No" << endl;
                continue;
            }

            if (length == 2)
            {
                cout << (vec[findex] != vec[lindex] ? "Yes" : "No") << endl;
                continue;
            }

            tuple<int, int, int> temp1 = tpl[lindex + 1];
            tuple<int, int, int> temp2 = tpl[findex];

            int narr[3]{};
            narr[0] = get<0>(temp1) - get<0>(temp2);
            narr[1] = get<1>(temp1) - get<1>(temp2);
            narr[2] = get<2>(temp1) - get<2>(temp2);
            sort(narr, narr + 3);
            if (narr[0] == 0)
            {
                if (narr[1] == narr[2])
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
            else if (narr[0] == narr[1] == 0)
            {
                cout << "No" << endl;
            }
            // else if(narr[0]+narr[1]+narr[2]<(2*narr[0]-1))
            // cout << "No" << endl;
            // else if(narr[1]+narr[2]==narr[0]||narr[1]+narr[2]==narr[0]-1)
            // cout << "Yes" << endl;
            else
            {
                narr[0] = (narr[0] + narr[0] - 1) / narr[0];
                narr[1] = (narr[1] + narr[0] - 1) / narr[0];
                narr[2] = (narr[2] + narr[0] - 1) / narr[0];

                if ((narr[0] == 1 && narr[1] == 2 && narr[2] == 3) || (narr[0] == 1 && narr[1] == 1 && narr[2] == 2) || (narr[0] == 1 && narr[1] == 3 && narr[2] == 4))
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
                // cout << ((a + b + c == 4 || a + b + c == 8|| a + b + c == 6) ? "Yes" : "No") << endl;
            }
        }
    }
    return 0;
}
