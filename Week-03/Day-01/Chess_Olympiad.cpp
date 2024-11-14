#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

   int w,d,l;
   cin>>w>>d>>l;
   int r=4-(w+d+l);
   double op=l+(0.5*d);
   double my=w+(0.5*d);
   cout<<(((my+(double)r)>op)?"Yes":"No")<<endl;
}
