#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    for(long long j=0;j<t;j++)
    {

        long long a,b;
        cin>>a>>b;
        long long temp=0;
        temp=__gcd(a,b);
        long long sum=0;
        sum=(a*b)/temp;
        cout<<temp<<" "<<sum<<endl;


    }
    return 0;
}
