#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> distinct_count(n);
    unordered_map<int, bool> seen;

    int count = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        if (!seen[a[i]])
        {
            seen[a[i]] = true;
            count++;
        }
        distinct_count[i] = count;
    }

    while (m--)
    {
        int li;
        cin >> li;
        li--;
        cout << distinct_count[li] << endl;
    }

    return 0;
}
