#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
     
        if(a==b&&a!=c)
        {
            cout<<"2"<<endl;
        }
        else if(a==c&&a!=b)
        {
            cout<<"2"<<endl;
        }
         else if(b==c&&a!=b)
        {
            cout<<"2"<<endl;
        }
        else
        {
           cout<<"3"<<endl;
        }
    }

    return 0;
}

