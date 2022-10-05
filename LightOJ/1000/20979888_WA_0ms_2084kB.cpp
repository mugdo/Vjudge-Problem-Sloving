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
        pi=3.14159265;
        r1=pi*r*r;
        printf("Case %d: %.9f ",i,k1-r1);
        cout<<endl;
    }

    return 0;
}
