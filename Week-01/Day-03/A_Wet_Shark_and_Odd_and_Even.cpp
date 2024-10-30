#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, sum = 0;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n);
    ll s_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            s_odd = arr[i];
            break;
        }
    }
    if(sum%2==0)
    cout<<sum<<endl;
    else cout<<sum-s_odd<<endl;
}
