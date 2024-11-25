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
        int n, k;
        cin >> n >> k;
        string s, key;
        cin >> s >> key;
        vector<int> vs, vk, vc;
        for (int i = 0; i < n; i++)
        {
            vs.push_back(s[i] - 48);
        }
        for (int i = 0; i < k; i++)
        {
            vk.push_back(key[i] - 48);
        }
        ll cnt=0,sum=0;;
        for (int i = 0; i < n; i++)
        {
            if(cnt==k)
            {
             vc.push_back(sum);
             sum=0;cnt=0;
             continue;
            }
        }
        // cout<<s<<" "<<key<<endl;
        int f = s[1] - 48;
        cout << f << endl;
    }
}
