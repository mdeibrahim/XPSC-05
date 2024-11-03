#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
      set<string>st;
      int len=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        st.insert(s);

        if(st.size()>len)
        {
            cout<<"NO"<<endl;
            len=st.size();
        }

        else if(st.size()==len)
            {
                cout<<"YES"<<endl;
                 len=st.size();
            }

    }
return 0;

}