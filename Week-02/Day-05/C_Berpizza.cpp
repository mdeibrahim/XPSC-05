#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll i = 1, j, k, m, n, c = 0, t, x, y;
    cin >> t;

    bool vis[t + 3] = {false};
    priority_queue<pair<ll, ll>> pq;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            cin >> x;
            pq.push({x, --c});
        }


        else if (n == 2)
        {
            while (vis[i])
                i++;
            vis[i] = true;
            cout << i << " ";
        }


        else
        {
            while (true)
            {
                x = -pq.top().second;

                pq.pop();
                if (!vis[x])
                {
                    vis[x] = true;
                    cout << x << " ";
                    break;
                }
            }
        }  
    }



    // while (!q.empty())
    // {
    //     pair<ll,ll>pp=q.top();
    //     cout<<pp.first<<" "<<pp.second<<endl;
    //     q.pop();
    // }
    
}
