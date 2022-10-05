#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==b&&b==c)
        {
            cout<<"*"<<endl;
        }
        else if(a==b&&b!=c)
        {
            cout<<"C"<<endl;
        }
        else if(a!=b&&a==c)
        {
            cout<<"B"<<endl;
        }
        else if(a!=b&&b==c)
        {
            cout<<"A"<<endl;
        }

    }
    return 0;
}