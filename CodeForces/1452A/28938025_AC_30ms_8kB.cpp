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
      if(sum>1)
      {
         sum--;
      }
      else
         sum=0;
      cout<<(x-0)+(y-0)+sum<<endl;
   }
   return 0;
}
