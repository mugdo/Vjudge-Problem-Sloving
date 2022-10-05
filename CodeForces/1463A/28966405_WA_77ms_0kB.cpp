#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int T=0;T<t;T++)
   {
      int a,b,c;
      cin>>a>>b>>c;
      int sum=a+b+c;
      if(sum%9==0&&(min(min(a,b),c))>=sum/7)
      {
         cout<<"YES"<<endl;
      }
      else
         cout<<"NO"<<endl;
   }
   return 0;

}

