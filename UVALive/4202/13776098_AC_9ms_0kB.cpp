#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a=0,b=0;
        int c=0,d=0;
        int a1=0,b1=0,c1=0,d1=0;
        //cin>>s1>>s2;
        scanf("%d:%d",&a,&b);
        scanf("%d:%d",&c,&d);
        scanf("%d:%d",&a1,&b1);
        scanf("%d:%d",&c1,&d1);
        //cout<<"i="<<i<<" a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<" a1="<<a1<<" b1="<<b1<<" c1="<<c1<<" d1="<<d1<<endl;
        int p=0,q=0,r=0,z=0;
        int p1=0,q1=0,r1=0,z1=0;
        p=a*60+b;
        q=c*60+d;
        r=a1*60+b1;
        z=c1*60+d1;
        if(max(p,r)<=min(q,z))
        {
            cout<<"Case"<<" "<<i<<": "<<"Mrs Meeting"<<endl;
        }
        else
        cout<<"Case"<<" "<<i<<": "<<"Hits Meeting"<<endl;



    }
    return 0;
}
