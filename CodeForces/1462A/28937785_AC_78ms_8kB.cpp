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
         cin>>ar[j];
      int flag=n-1,ind=0;
      int end_index;
      if(n%2==0)
         end_index=n/2;
      else
         end_index=(n/2)+1;

      for(int j=0;j<end_index;j++)
      {
         br[ind]=ar[j];
            ind++;
         br[ind]=ar[flag];
            ind++;
            flag--;

      }
      for(int j=0;j<n;j++)
         cout<<br[j]<<" ";
      cout<<endl;


   }
}

