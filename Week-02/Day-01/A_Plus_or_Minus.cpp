#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b;
        if(sum==c)
            cout<<"+"<<endl;
        else
            cout<<"-"<<endl;

    }
  return 0;
}