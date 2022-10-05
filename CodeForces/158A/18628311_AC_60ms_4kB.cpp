#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int p;
    int flag=0;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int sum=0;
   for(int i=0;i<n;i++)
   {
       if(ar[i]>0&&i<k)
       {
           //cout<<"ss"<<endl;
           sum++;
       }
   }

   for(int j=k-1;j<n-1;j++)
   {
       //cout<<"j="<<j<<"   ar[j]="<<ar[j]<<"  ar[j+1]="<<ar[j+1]<<endl;
       if(ar[j]==ar[j+1]&&ar[j]>0)
       {
           sum++;
       }
       else
       {
           break;
       }
   }
   cout<<sum<<endl;

    return 0;
}
