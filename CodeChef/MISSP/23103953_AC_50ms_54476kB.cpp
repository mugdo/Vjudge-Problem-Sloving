#include<bits/stdc++.h>
using namespace std;
int br[10000000];
int main()
{
    int t;
    cin>>t;

    int temp;
    for(int i=0;i<t;i++)
    {
      int n;
      cin>>n;
      int ar[n+10];
      
       map<int,int>mp;
      memset(br,0,sizeof(br));
      for(int j=0;j<n;j++)
      {
          cin>>ar[j];
          mp[ar[j]]+=1;

      }
     // sort(ar,ar+n);
      for(int j=0;j<n;j++)
      {
          //cout<<"mp="<<mp[ar[j]]<<endl;
          if(mp[ar[j]]%2!=0&&br[ar[j]]==0)
          {
              cout<<ar[j]<<endl;
              br[ar[j]]=1;

          }
      }

    }
    return 0;
}
