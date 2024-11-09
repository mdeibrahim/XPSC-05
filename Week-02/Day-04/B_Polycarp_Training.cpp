#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > ans)
        {
           ans++;
        }
    }
    cout << ans << endl;
    // for(auto x:arr)cout<<x<<" ";
}
