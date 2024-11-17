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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int com = n - 2;
         sort(v.begin(), v.end());

        int a = -1, b = -1;
        bool flag = false;
        int left = 0, right = n - 1;

        while (left < right)
        {
            int product = v[left] * v[right];
            if (product == com)
            {
                a = v[left];
                b = v[right];
                flag = true;
                break;
            }
            else if (product < com)
            {
                left++;
            }
            else
            {
                right--;
            }//cout<<right;
        }
        cout << a << " " << b << endl;
    }
}
