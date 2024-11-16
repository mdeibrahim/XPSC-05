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
        ll cell_NO, teacher_NO, qurry;
        cin >> cell_NO >> teacher_NO >> qurry;
        vector<ll> pos_teacher(teacher_NO);
        for (int i = 0; i < teacher_NO; i++)
        {
            cin >> pos_teacher[i];
        }
        sort(pos_teacher.begin(), pos_teacher.end());
        while (qurry--)
        {
            ll pos_student;
            cin >> pos_student;
            auto pos = lower_bound(pos_teacher.begin(), pos_teacher.end(), pos_student);
            if (pos == pos_teacher.begin())
                cout << pos_teacher[0] - 1 << '\n';
            else if (pos == pos_teacher.end())
                cout << cell_NO - pos_teacher[teacher_NO - 1] << '\n';
            else
            {

                ll ans = (*pos - *(pos - 1)) / 2;

                cout << ans << '\n';
            }
            // cout << pos << endl;
        }
    }
}
