#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long ar[n];
    long long sum=1;
    long long flag=0;
    for(long long i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]!=0)
          sum*=ar[i];
        else
        {
            flag++;
        }
    }
    long long s=0;
    for(long long i=0;i<n;i++)
    {
        s=sum;
        if(flag>1)
        {
            cout<<"0"<<" ";
        }
        else if(flag==1&&ar[i]==0)
        {
            cout<<s<<" ";
        }
        else if(flag==1&&ar[i]!=0)
        {
            cout<<"0"<<" ";
        }
        else
        {
            cout<<s/ar[i]<<" ";
        }

    }

    cout<<endl;

    return 0;
}
