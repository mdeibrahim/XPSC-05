#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    stack<string> st;
    string s;
    set<string> se;
    queue<string> q;
    while (t--)
    {
        cin >> s;
        st.push(s);
    }

    // while (!st.empty())
    // {
    //     st.top();
    //     st.pop();
    // }
    while (!st.empty())
    {
        string temp = st.top();
        st.pop();
        if (se.find(temp) == se.end())
        {
            q.push(temp);
            se.insert(temp);
        }
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}
