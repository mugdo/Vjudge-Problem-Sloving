#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        unsigned long long  p=1;
        for(int i=0;i<b;i++)
        {
            p*=a;
        }
        //cout<<"p="<<p<<endl;
        unsigned long long q=1;
        for(int j=0;j<d;j++)
        {
            q*=c;
        }

        //cout<<"q="<<q<<endl;

        if(p<q)
        {
            cout<<"<"<<endl;
        }
        else
        {
            cout<<">"<<endl;
        }
    }
    return 0;
}
