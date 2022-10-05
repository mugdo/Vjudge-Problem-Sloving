#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long x,t;
   while(cin>>x>>t)
   {
       if(t>=x)
       {
           cout<<"0"<<endl;
       }
       else
       {
           cout<<x-t<<endl;
       }
   }


   return 0;
}
