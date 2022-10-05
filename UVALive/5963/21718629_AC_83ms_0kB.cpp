
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       int n;
       cin>>n;
       int ar[n];
       int br[n];
       for(int j=0;j<n;j++)
       {
           cin>>ar[j];
           br[j]=0;
       }
       int ck=0;
       for(int j=0;j<n;j++)
       {
           if(ar[j]>=n)
           {
               ck=1;
               break;
           }
           if(br[ar[j]]==0)
           {
               br[ar[j]]=1;
           }
           else if(br[n-ar[j]-1]==0)
           {
               br[n-ar[j]-1]=1;
           }
           else
           {
               ck=1;
               break;
           }
       }
       if(ck==1)
       {
           cout<<"Case "<<i+1<<": "<<"no"<<endl;
       }
       else
       {
           cout<<"Case "<<i+1<<": "<<"yes"<<endl;
       }

    }
    return 0;
}
