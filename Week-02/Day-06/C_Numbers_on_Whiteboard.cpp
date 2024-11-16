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
        ll n;
        cin >> n;
        set<int> st;
        vector<int> vec(n);
        for (int i = 1; i <= n; i++)
        {
            vec[i - 1] = i;
            // st.insert(i);
        }
        cout << 2 << '\n';

        if (n == 2)
            cout << 1 << " " << 2 << '\n';
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (vec[vec.size() - 1] % 2 == vec[vec.size() - 2] % 2)
                {
                    cout << vec[vec.size() - 2] << " " << vec[vec.size() - 1] << '\n';
                    int ne = (vec[vec.size() - 2] + vec[vec.size() - 1]) / 2;
                    vec.erase(vec.begin() + vec.size() - 2);
                    vec.erase(vec.begin() + vec.size() - 1);
                    vec.push_back(ne);
                }
                else
                {
                    cout << vec[vec.size() - 3] << " " << vec[vec.size() - 1] << '\n';
                    int ne = (vec[vec.size() - 3] + vec[vec.size() - 1]) / 2;
                    vec.erase(vec.begin() + vec.size() - 3);
                    vec.erase(vec.begin() + vec.size() - 1);
                    vec.push_back(ne);
                }
            }
        }
    }
}
