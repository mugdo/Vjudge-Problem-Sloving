#include<bits/stdc++.h>
using namespace std;
int br[1000000];
int main()
{
    int t;
    cin>>t;
    map<int,int>mp;
    int temp;
    for(int i=0;i<t;i++)
    {
      int n;
      cin>>n;
      int ar[n+10];
      memset(br,0,sizeof(br));
      int val=0;
      for(int j=0;j<n;j++)
      {
          cin>>ar[j];
          mp[ar[j]]+=1;
          val=max(ar[j],val);

      }
     // sort(ar,ar+n);
      for(int j=0;j<n;j++)
      {
          //cout<<"mp="<<mp[ar[j]]<<"  ar[j]="<<ar[j]<<"mp[ar[j]]%2="<<mp[ar[j]]%2<<endl;
          if(mp[ar[j]]%2!=0&&br[ar[j]]==0)
          {
              //cout<<ar[j]<<endl;
              br[ar[j]]=ar[j];

          }


      }
       for(int j=1;j<=val;j++)
      {

          if(br[j]!=0)
          {
              cout<<br[j]<<endl;


          }


      }

    }
    return 0;
}
