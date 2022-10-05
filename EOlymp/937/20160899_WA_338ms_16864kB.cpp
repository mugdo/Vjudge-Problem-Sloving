#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long ar[n];
    unsigned long long sum=1;
    int flag=0;
    for(long long i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]!=0)
        sum*=ar[i];
        else
        {
            flag=1;
        }
    }
   long long br[n];
   unsigned long long s=0;
    for(long long i=0;i<n;i++)
    {
        s=sum;
       if(ar[i]==0)
       {
           br[i]=sum;
       }
       else if(flag==1)
       {
           br[i]=0;
       }
       else
       {
           br[i]=s/ar[i];
       }
    }
    for(long long i=0;i<n;i++)
    {
        cout<<br[i]<<" ";
    }
    cout<<endl;

    return 0;
}
