#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int T=0;T<t;T++)
   {
      int n,con=0,temp;
      cin>>n;
      if(n==1)
         con=0;
      else if(n==2)
         con=1;
      else if(n==3)
         con=2;
      else
      {
         if(n%2==0)
            con=2;
         else
            con=3;
      }



      int p=0;

      cout<<con<<endl;
   }
   return 0;

}
