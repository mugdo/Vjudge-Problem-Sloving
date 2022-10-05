#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        long long  c1=0,d1=0,c1d1=0;
        long long lcm=0;
        lcm=(c*d)/(__gcd(c,d));
        //cout<<"lcm="<<lcm<<endl;
        c1=(b/c)-((a-1)/c);
        //cout<<"c1="<<c1<<endl;
        d1=(b/d)-((a-1)/d);
        //cout<<"d1="<<d1<<endl;
        c1d1=(b/(lcm))-((a-1)/(lcm));
        //cout<<"c1d1="<<c1d1<<endl;

        cout<<(b-a+1)-(c1+d1-c1d1)<<endl;
    }
    return 0;
}
