#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        unsigned long long a,b,c,d;
        cin>>a>>b>>c>>d;
        double p=b*log(a);

        //cout<<"p="<<p<<endl;
        double q=d*log(c);



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