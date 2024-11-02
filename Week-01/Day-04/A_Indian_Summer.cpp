#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    string ss;

    map<string, int> mp;
    for (int i = 0; i < t; i++)
    {
        getline(cin, ss);
        mp[ss]++;
    }
    cout << mp.size() << endl;

    // for(auto x:mp)cout<<x.first<<" "<<endl;
}
