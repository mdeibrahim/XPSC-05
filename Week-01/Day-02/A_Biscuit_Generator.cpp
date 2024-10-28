#include <bits/stdc++.h>
using namespace std;

int main()
{
    int u_sec, u_bis, tbis;
    int ttime;
    cin >> u_sec >> u_bis >> ttime;

    tbis = (ttime / u_sec) * u_bis;
    cout << tbis << endl;
}
