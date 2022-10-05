#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int T=0;T<t;T++)
   {
      int n;
      cin>>n;
      int ck=n*4;
      //cout<<"ck="<<ck;
      for(int i=0;i<n;i++)
      {
         cout<<ck<<" ";
         ck-=2;
      }
      cout<<endl;
   }
   return 0;
}
