#include<iostream>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        if(n==0&&k==0)
        {
            break;
        }
        int p=n-k;
        long long sum=1;
        if(p>=k)
        {
            //cout<<"p="<<p<<endl;

            for(int i=p+1;i<=n;i++)
            {
                sum*=i;
            }
            //cout<<"sum="<<sum<<endl;
            long long temp=1;
            for(int i=2;i<=k;i++)
            {
                temp*=i;
            }
            //cout<<"temp="<<temp<<endl;
            cout<<sum/temp<<endl;
        }
        else
        {

            for(int i=k+1;i<=n;i++)
            {
                sum*=i;
            }
            long long temp=1;
            //cout<<"sum="<<sum<<endl;
            for(int i=1;i<=p;i++)
            {
                temp*=i;
            }
            cout<<sum/temp<<endl;
        }
    }
    return 0;
}