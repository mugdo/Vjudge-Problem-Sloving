#include <bits/stdc++.h>
using namespace std;
int ckprime(long long n)
{
    int flag=0;
       for(int i=2; i<=n/2; ++i)
    {

        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        return 2;


}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long p,l;
        cin>>p>>l;
        long long temp=0;
        temp=p-l;
        int pk;
        pk=ckprime(temp);
        long long ar[10000];
        int pl=0;
        int ck=0;
        int rk=0;
        if(pk==2&&pk>l)
        {
            cout<<"Case"<<" "<<i<<":"<<temp<<endl;
            ck=1;
        }
        else
        {
            while(temp!=0)
            {
                ar[pl]=temp;
                pl++;
                temp=temp/2;

            }
            cout<<"Case"<<" "<<i<<": ";
            for(long long j=pl-1;j>=0;j--)
            {
                if(ar[j]>=l)
                {
                    cout<<ar[j]<<" ";
                    ck=1;
                    rk=1;

                }

            }
            if(rk==1)
            {
                cout<<endl;
            }
        }
        if(ck!=1)
        {
             cout<<"Case"<<" "<<i<<": "<<"impossible"<<endl;
        }

    }
    return 0;
}


