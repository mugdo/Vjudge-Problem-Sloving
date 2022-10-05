#include<bits/stdc++.h>
using namespace std;
int main()
{

   long long n;
   while(cin>>n)
   {
       long long sum=0;
       if(n>=100)
       {
          sum+=n/100;
          n=n%100;
         // cout<<"sum="<<sum<<endl;
       }
       if(n>=20)
       {
           sum+=n/20;
           n=n%20;
          // cout<<
       }
        if(n>=10)
       {
           sum+=n/10;
           n=n%10;
       }
       if(n>=5)
       {
           sum+=n/5;
           n=n%5;
       }
       if(n>=1)
       {
           sum+=n;
           n=0;
       }
       cout<<sum<<endl;

   }

   return 0;
}
