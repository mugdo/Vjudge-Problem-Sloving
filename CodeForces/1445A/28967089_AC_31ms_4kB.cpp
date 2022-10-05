#include<bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   cin>>T;
   for(int t=0;t<T;t++)
   {
      int n,x;
      cin>>n>>x;
      int ar[n];
      int br[n];
      for(int i=0;i<n;i++)
         cin>>ar[i];
      for(int i=0;i<n;i++)
         cin>>br[i];
      sort(br,br+n);
      sort(ar,ar+n);
         int temp=0,ck=n-1,flag=0;
      for(int i=0;i<n;i++)
      {
         if((ar[i]+br[ck])>x)
         {
            flag=1;
            break;
         }
         ck--;
      }
      if(flag==0)
         cout<<"Yes"<<endl;
      else
         cout<<"No"<<endl;
   }

   return 0;
}

