#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    for(int j=0;j<t;j++)
    {

        int a,b;
        cin>>a>>b;
        int temp=0;
        temp=__gcd(a,b);
        long long sum=0;
        sum=(a*b)/temp;
        cout<<temp<<" "<<sum<<endl;


    }
    return 0;
}
