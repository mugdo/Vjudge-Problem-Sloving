#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
      int x,y;
      cin>>x>>y;
      int sum=abs(x-y);
      //cout<<"sum1="<<sum<<endl;
      if(sum>1)
      {
         sum--;
      }
      else
         sum=0;
      //cout<<"sum="<<sum<<endl;

      cout<<(x-0)+(y-0)+sum<<endl;
   }
   return 0;
}
