#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,m,k;
    cin>>n>>m>>k;
    int ar[n];
    long long  p=0;
    for(long long int i=0;i<n;i++)
    {
        cin>>ar[i];
        p++;

    }
   // int siz=sizeof(ar);
  // cout<<"ar[0]="<<ar[0]<<endl;
    sort(ar,ar+(p));
    //cout<<"ar[p-1]="<<ar[p-1]<<endl;
    long long int sum=0;
    //cout<<"ar[-2]="<<ar[p]<<endl;
    for(long long int j=p-1;j>k*m;j--)
    {
       // cout<<ar[j]<<endl;
        sum+=ar[j];
    }
    cout<<sum<<endl;
    return 0;
}
