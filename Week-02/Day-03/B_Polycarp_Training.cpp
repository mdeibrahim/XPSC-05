#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    vector<int> arr(t);
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    auto it=arr.begin();
    for (int i = 0; i < t; i++)
    {
        if (arr[i] < i+1)
        arr.erase(it+i);
    }
}
