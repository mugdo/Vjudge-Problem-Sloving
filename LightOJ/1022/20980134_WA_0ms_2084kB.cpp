#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       double k=0;
       double r;
       cin>>r;
       k=(r+r);
       double k1=0;
       k1=pow(k,2);
       double r1=0;
       double pi=0;
       pi=2*acos(0);
        //cout<<"pi="<<pi<<endl;
       r1=pi*r*r;
        //cout<<"r1="<<r1<<endl;
        double b=k1-r1;
        //cout<<b<<endl;
        printf("Case %d: %.9lf ",i+1,b);
        cout<<endl;
    }

    return 0;
}
