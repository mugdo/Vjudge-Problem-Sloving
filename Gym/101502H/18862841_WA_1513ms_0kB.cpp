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
        int p=pow(a,b);
        //cout<<"p="<<p<<endl;
        int q=pow(c,d);
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
