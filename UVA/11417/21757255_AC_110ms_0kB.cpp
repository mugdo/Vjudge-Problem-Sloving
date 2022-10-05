#include<bits/stdc++.h>
using namespace std;
int gcd(int n,int m)
{

    if(n%m==0)
    {
        return m;
    }
    return gcd(m,n%m);
}
int main()
{
    int n;
    while(cin>>n)
    {
        long long sum=0;
        if(n==0)
        {
            break;
        }
       for(int i=1;i<n;i++)
       {
           for(int j=i+1;j<=n;j++)
           {
               sum+=gcd(i,j);
           }
       }
       cout<<sum<<endl;

    }
    return 0;
}
