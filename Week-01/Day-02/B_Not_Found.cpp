#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> ss(s.begin(), s.end());
    for(char ch='a';ch<='z';ch++)
    {
        if(ss.find(ch)==ss.end())
        {
            cout<<ch<<endl;
            return 0;
        }
    }
    cout << "None" << endl;
}
