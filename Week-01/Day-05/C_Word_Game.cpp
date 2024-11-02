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
        int n;
        cin >> n;
        vector<string> vec[3];
        map<string, int> mp;
        string s;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s;
                vec[i].push_back(s);
                mp[s]++;
            }
        }
        int k = 0;
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            int cnt = 0;
            for (auto x : vec[i])
            {
                if (mp[x] == 2)
                    cnt++;
                else if (mp[x] == 1)
                    cnt += 3;
            }
            arr[k] = cnt;
            k++;
        }
        cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    }
}