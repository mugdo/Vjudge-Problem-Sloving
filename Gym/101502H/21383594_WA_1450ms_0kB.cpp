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
        double  p=log(a);
        double pk=pow(a,b);
        //cout<<"p="<<p<<endl;
         double q=log(d);
         double qk=pow(c,d);
        //cout<<"q="<<q<<endl;

        if(pk<qk)
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
