#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int r[n];
    long long d=0;
    for(int i=0;i<n;i++)
    {
        cin>>r[i];
        if(r[i]%2!=0)
        {
            d+=r[i]+1;
        }
        else
        d+=r[i];
    }
    for(int i=0;i<n;i++)
    {
        if(r[i]%2!=0)
        {
            long long  k=d;
            k-=r[i]+1;
            cout<<k/(n-1)<<endl;
        }
        else
        {
            long long h=d;
            h-=r[i];
            cout<<h/(n-1)<<endl;
        }
    }

    return 0;
}


