#include<bits/stdc++.h>
using namespace std;
long long  absulate(long long  a,long long  b)
{
   if(a>b)
      return a-b;
   else
      return b-a;
}
long long mixmum(long long res1,long long res2)
{
   if(res1>res2)
      return res1;
   else
      return res2;
}
int main()
{
   int t;
   cin>>t;
   for(int T=0;T<t;T++)
   {
      long long  n,m,c,r;
      cin>>n>>m>>c>>r;
      int res1=0,res2=0;
      res1=absulate(1,c)+absulate(1,r);
      res2=absulate(n,c)+absulate(m,r);
      cout<<mixmum(res1,res2)<<endl;

   }
   return 0;
}
