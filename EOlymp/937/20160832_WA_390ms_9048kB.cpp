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
    for(long long i=0;i<n;i++)
    {
        unsigned long long s=sum;
        if(ar[i]==0&&i!=n-1)
        {
            cout<<s<<" ";
        }
        else if(ar[i]==0&&i==n-1)
        {
            cout<<s;
        }
        else if(i!=n-1&&flag!=1)
         cout<<s/ar[i]<<" ";
         else if(flag==1&&i!=n-1)
         {
             cout<<"0 ";
         }
         else if(flag==1&&i==n-1)
         {
             cout<<"0";
         }
         else
         cout<<s/ar[i];

    }
    cout<<endl;
    return 0;
}
