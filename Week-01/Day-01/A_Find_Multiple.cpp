#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int i, ans = -1;

    // if (a <= c)
    //     i = 1;
    // else
    //     i = a / c;
    // while (ans <= b + c)
    // {
    //     ans = c * i;
    //     if (ans < b && ans > a)
    //     {
    //         cout << ans << endl;
    //         return 0;
    //     }
    //     i++;
    // }
    // cout << -1 << endl;

    
    while (true)
    {
        if(c>=a&&c<=b){
            cout<<c<<endl;
            return 0;
        }
        if(c>b){
            cout<<-1<<endl;
            return 0;
        }
        c+=c;
    }
}
