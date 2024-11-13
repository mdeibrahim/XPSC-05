// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define pb push_back
// vector<vector<int>> res;

// int main()
// {
//     int tc;
//         cin >> tc;
//         int i=1;
//     while(tc--)
//     {
//         /*int a, b, c;
//             cin >> a >> b >> c;*/
//         vector<int> ar(3);
//         for(int i=0; i<3; i++)
//         {
//             cin >> ar[i];
//         }
//         sort(ar.begin(), ar.end());
//         if(ar[0] == 1 && ar[1] == 1 && ar[2] == 6)
//         {
//             cout <<"Case "<<i<<": "<< "perfectus\n";
//         }
//         else
//         {
//             cout <<"Case "<<i<<": "<<  "invalidum\n";
//         }
//         i++;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

int main()
{
    int tc;
        cin >> tc;
    int cases = 1;
    while(tc--)
    {
        /*int a, b, c;
            cin >> a >> b >> c;*/
        cout << "Case "<< cases <<": ";
        vector<int> ar(3);
        for(int i=0; i<3; i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());
        if(ar[0] == 1 && ar[1] == 1 && ar[2] == 6)
        {
            cout << "perfectus\n";
        }
        else if(ar[0] == 3 && ar[1] == 3 && ar[2] == 3)
        {
            cout << "perfectus\n";
        }
        else if(ar[0] == 0 && ar[1] == 3 && ar[2] == 6)
        {
            cout << "perfectus\n";
        }
        else if(ar[0] == 1 && ar[1] == 2 && ar[2] == 4)
        {
            cout << "perfectus\n";
        }
        else if(ar[0] == 0 && ar[1] == 4 && ar[2] == 4)
        {
            cout << "perfectus\n";
        }
        else
        {
            cout << "invalidum\n";
        }
        cases++;
    }
    return 0;
}