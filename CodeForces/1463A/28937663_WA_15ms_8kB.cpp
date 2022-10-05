#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
      long long sum=0,a,b,c;
      cin>>a>>b>>c;
      sum=a+b+c;
      if(sum<7)
         cout<<"NO"<<endl;
      else if(sum%7==0)
         cout<<"YES"<<endl;
      else
         cout<<"NO"<<endl;


   }
}
