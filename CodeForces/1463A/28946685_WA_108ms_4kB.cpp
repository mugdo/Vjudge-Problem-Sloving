#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
      int a,b,c;
      cin>>a>>b>>c;
      int sum=0;
      sum=a+b+c;
      sum=sum/7;
      //cout<<"sum="<<sum<<endl;
      int k=0;
      k=(a+b+c);
      //cout<<"k="<<k<<endl;
      if(k-(sum*3)==((sum*7)-1))
         cout<<"YES"<<endl;
      else
         cout<<"NO"<<endl;
   }
   return 0;
}
