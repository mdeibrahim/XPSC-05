#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int n, siraja = 0, dima = 0;
    cin >> n;
    int arr[n], k = 1;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0, j = n - 1; !(i > j);)
    {
        if (k % 2 == 1)
        {
            if (arr[i] > arr[j])
            {
                siraja = siraja + arr[i];
                i++;
            }
            else
            {
                siraja = siraja + arr[j];
                j--;
            }
        }
        else
        {
            if (arr[i] > arr[j])
            {
                dima = dima + arr[i];
                i++;
            }
            else
            {
                dima = dima + arr[j];
                j--;
            }
        }
        k++;
        // if(i>j)break;;
    }
    cout << siraja << " " << dima << endl;

    return 0;
}