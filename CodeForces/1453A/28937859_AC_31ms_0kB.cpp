#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
   cin>>t;
   for(int T=0;T<t;T++)
   {
      int n,m;
      cin>>n>>m;
      int ar[n];
      int br[m],con=0;
      for(int i=0;i<n;i++)
      {
         cin>>ar[i];
      }
      for(int i=0;i<m;i++)
      {
         cin>>br[i];
         for(int j=0;j<n;j++)
         {
            if(br[i]==ar[j])
              con++;

         }
      }
      cout<<con<<endl;



   }
}



