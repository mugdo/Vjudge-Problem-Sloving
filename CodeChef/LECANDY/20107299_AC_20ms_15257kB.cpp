#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n,c;
        cin>>n>>c;
        int a;
        for(int j=0;j<n;j++)
        {
           cin>>a;
           c-=a;
        }
         if(c<0)
    {
        cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }

    return 0;
}
